./make-cross.sh $1.cpp $1 aws-cpp-sdk-core aws-cpp-sdk-dynamodb aws-cpp-sdk-s3 aws-cpp-sdk-transfer
if [ "$?" = "0" ]; then
    
readelf -h $1
scp -oCiphers=aes128-ctr $1 root@192.168.1.125:/home/root/
else
    echo "nothing copied or checked!"
    exit 1
fi




