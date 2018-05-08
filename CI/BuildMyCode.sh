#!/bin/bash
if [ $# -eq 0 ]; then
    echo "Using master as the default branch and using default cmake flags to build."
    branch="master"
    cmakeFlags=""
elif [ $# -eq 1 ]; then
    echo "Using default cmake flags to build."
    branch=$1
    cmakeFlags=""
elif [ $# -eq 2 ]; then
    branch=$1
    cmakeFlags=$2
else
    echo "    Usage BuildMyCode [branchName] [cmakeFlags]"
    exit 1
fi

json='{ "branch": "'$branch'", "cmakeFlags": "'$cmakeFlags' "}'
echo $json >BuildSpec.json
zip -r BuildSpec.zip BuildSpec.json
aws s3 cp BuildSpec.zip s3://aws-sdk-cpp-dev-pipeline/BuildSpec.zip
