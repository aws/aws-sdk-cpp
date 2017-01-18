#!/usr/bin/env bash

set -e

ABIS=("x86")
BASE_DIR=$(git rev-parse --show-toplevel)
BUILD_DIR=$BASE_DIR/build/GenerateVitalClient
REST_API_ID=h6wguq9ghl
STAGE_NAME=prod
SWAGGER_FILE_PATH=$BASE_DIR/VitalServices-prod-swagger.json
AWS_CPP_SOURCE_DIR=$BASE_DIR

rm -rf $BASE_DIR/aws-cpp-sdk-vitalservices
aws apigateway get-export --rest-api-id $REST_API_ID --stage-name $STAGE_NAME --export-type swagger $SWAGGER_FILE_PATH
$BASE_DIR/translate-vitalserver-spec.py > \
    $BASE_DIR/code-generation/api-descriptions/vitalservices-2016-11-23.normal.json

mkdir -p $BUILD_DIR
cd $BUILD_DIR
for ABI in "${ABIS[@]}"
do
    mkdir -p $ABI
    pushd .
    cd $ABI
    cmake -DTARGET_ARCH=ANDROID \
          -DNDK_RELEASE=r13b \
          -DANDROID_NATIVE_API_LEVEL=21 \
          -DANDROID_ABI=$ABI \
          -DBUILD_ONLY="core" \
          -DADD_CUSTOM_CLIENTS="serviceName=vitalservices,version=2016-11-23" \
          -DCMAKE_BUILD_TYPE=Debug \
          -Wno-dev \
          $AWS_CPP_SOURCE_DIR

    make -j3
    popd
done

