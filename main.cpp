#include <iostream>
using namespace std;

int getSum(int a,int b){
    return a+b;
}
int main()
{

    int temp;
    int temp1;
    int temp2;
    cout << "HIÄãºÃ£¡" << endl;
    cout << "A:" << endl;
    cin >> temp1;
    cout << "B:" << endl;
    cin >> temp2;
    temp= getSum(temp1,temp2);
    cout << "AºÏ¼Æ:" << endl;
    cout<< temp;
    cin >> temp;
    return 0;
}
