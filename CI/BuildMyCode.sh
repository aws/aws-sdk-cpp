#!/bin/bash
if [ $# -ne 2 ]; then
    echo "    Usage BuildMyCode <branchName> <cmakeFlags>"
    exit 1
fi
branch=$1
cmakeFlags=$2
json='{ "branch": "'$branch'", "cmakeFlags": "'$cmakeFlags'"}'
echo $json >BuildSpec.json
zip -r BuildSpec.zip BuildSpec.json
aws s3 cp BuildSpec.zip s3://aws-sdk-cpp-pipeline-sdks-team/BuildSpec.zip
