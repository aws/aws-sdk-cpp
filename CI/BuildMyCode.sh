#!/bin/bash

set -eu

if [[ $# -lt 1 ]]; then
    echo -e "error: missing location paramter.\n"
    echo -e "USAGE: BuildMyCode [OPTIONS]\n"
    echo "OPTIONS:"
    echo "-b|--branch       The name of the git branch. Default is the current branch."
    echo "-c|--cmake-flags  Any additional CMake flags to pass to the build jobs."
    echo "-l|--location     The name of key in S3 under which to save the BuildSpec.zip file."

    exit 1
fi

branch=""
cmakeFlags=""
# default to the current branch
if [[ -z $branch ]]; then
    branch=$(git rev-parse --abbrev-ref HEAD)
fi

POSITIONAL=()
while [[ $# -gt 0 ]]
do
    key="$1"
    case $key in
        -b|--branch)
            branch=$2
            shift # past argument
            ;;
        -c|--cmake-flags)
            cmakeFlags=$2
            shift # past argument
            ;;
        -l|--location) # where to put the buildspec.zip file
            buildspecLocation=$2
            shift # past argument
            ;;
        *)    # unknown option
            POSITIONAL+=("$1") # save it in an array for later
            shift # past argument
            ;;
    esac
done
set -- "${POSITIONAL[@]}" # restore positional parameters


json='{ "branch": "'$branch'", "cmakeFlags": "'$cmakeFlags' "}'
echo "$json" >BuildSpec.json
zip -r BuildSpec.zip BuildSpec.json
aws s3 cp BuildSpec.zip s3://aws-sdk-cpp-dev-pipeline/"${buildspecLocation}"/BuildSpec.zip
S3VERSION=$(aws s3api head-object --bucket aws-sdk-cpp-dev-pipeline --key "${buildspecLocation}"/BuildSpec.zip | awk '/VersionId/{gsub(/[",]/, ""); print $2}')
echo -e "\033[30;42mYour build version ID is ${S3VERSION}\033[0m"
