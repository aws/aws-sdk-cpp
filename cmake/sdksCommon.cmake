# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# Return all values for a key from a flatmap
# I.e. given a flatmap list of items such as "key1:val1,val2,val3;key2:val2;key1:valDoNotLoseMe" and "key1" as arguments
# when called such as "get_flatmap_value(${TEST_NAME} TEMP_VAR ${TEST_DEPENDENCY_LIST})"
# will return "val1,val2,val3,valDoNotLoseMe"
function(get_flatmap_value KEY VALUE_VAR)
    set(${VALUE_VAR} "" PARENT_SCOPE)
    set(RETURN_LIST "")
    foreach(ELEMENT_PAIR ${ARGN})
        STRING(REGEX REPLACE "([^:]+):.*" "\\1" KEY_RESULT ${ELEMENT_PAIR})
        if(${KEY_RESULT} STREQUAL ${KEY} )
            STRING(REGEX REPLACE "[^:]+:(.*)" "\\1" VALUE_RESULT ${ELEMENT_PAIR})
            list(APPEND RETURN_LIST "${VALUE_RESULT}")
        endif()
    endforeach()
    set(${VALUE_VAR} "${RETURN_LIST}" PARENT_SCOPE)
endfunction(get_flatmap_value)

function(get_test_projects_for_service SERVICE_NAME TEST_PROJECT_NAME_VAR)
    get_flatmap_value(${SERVICE_NAME} TEMP_VAR ${SDK_TEST_PROJECT_LIST})
    set(${TEST_PROJECT_NAME_VAR} "${TEMP_VAR}" PARENT_SCOPE)
endfunction()

function(get_dependencies_for_sdk PROJECT_NAME DEPENDENCY_LIST_VAR)
    get_flatmap_value(${PROJECT_NAME} TEMP_VAR ${SDK_DEPENDENCY_LIST})
    if (TEMP_VAR)
        string(REPLACE "," ";" TEMP_LIST_VAR ${TEMP_VAR})
        list(FIND TEMP_LIST_VAR "core" _index)
        if (${_index} GREATER -1) # old cmake search in a list syntax
            # core is already there
            set(${DEPENDENCY_LIST_VAR} "${TEMP_VAR}" PARENT_SCOPE)
            return()
        endif()
    endif()
    # "core" is the default dependency for every sdk.
    set(${DEPENDENCY_LIST_VAR} "${TEMP_VAR},core" PARENT_SCOPE)
endfunction()

function(get_dependencies_for_test TEST_NAME DEPENDENCY_LIST_VAR)
    get_flatmap_value(${TEST_NAME} TEMP_VAR ${TEST_DEPENDENCY_LIST})
    set(${DEPENDENCY_LIST_VAR} "${TEMP_VAR}" PARENT_SCOPE)
endfunction()

# returns all sdks, including itself, that depend on the supplied sdk
# this is kind of a reverse function of get_dependencies_for_sdk
function(get_sdks_depending_on SDK_NAME DEPENDING_SDKS_VAR)
    set(TEMP_SDK_LIST "${SDK_NAME}")
    foreach(SDK_DEP ${SDK_DEPENDENCY_LIST})
        STRING(REGEX REPLACE "([^:]+):.*" "\\1" KEY_RESULT ${SDK_DEP})
        STRING(REGEX REPLACE "[^:]+:(.*)" "\\1" VALUE_RESULT ${SDK_DEP})
        STRING(REPLACE "," ";" LIST_RESULT ${VALUE_RESULT})
        list(FIND LIST_RESULT ${SDK_NAME} FIND_INDEX)
        if(FIND_INDEX GREATER -1)
            list(APPEND TEMP_SDK_LIST ${KEY_RESULT})
        endif()
    endforeach()

    set(${DEPENDING_SDKS_VAR} "${TEMP_SDK_LIST}" PARENT_SCOPE)
endfunction()

# Function that reads <repo>/src/generated and builds a list of all available generated service clients for a build,
# The resulting $SERVICE_CLIENT_LIST is as simple as "cognito-identity,s3,dynamodb,etc,..."
function(build_sdk_list)
    set(LIST_DIRECTORIES true)
    file(GLOB ALL_GENERATED_CLIENTS $LIST_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/generated/src/aws-cpp-sdk-*")

    foreach(clientDir IN LISTS ALL_GENERATED_CLIENTS)
        get_filename_component(clientDirName "${clientDir}" NAME)
        STRING(REGEX REPLACE "^aws-cpp-sdk-" "" serviceName "${clientDirName}")
        LIST(APPEND SERVICE_CLIENT_LIST "${serviceName}")
    endforeach()
    set(SERVICE_CLIENT_LIST "${SERVICE_CLIENT_LIST}" PARENT_SCOPE)
endfunction()

# A list of so-called "hand-written SDK high-level libraries/components"
set(HIGH_LEVEL_SDK_LIST "")
list(APPEND HIGH_LEVEL_SDK_LIST "access-management")
list(APPEND HIGH_LEVEL_SDK_LIST "identity-management")
list(APPEND HIGH_LEVEL_SDK_LIST "queues")
list(APPEND HIGH_LEVEL_SDK_LIST "transfer")
list(APPEND HIGH_LEVEL_SDK_LIST "s3-encryption")
list(APPEND HIGH_LEVEL_SDK_LIST "text-to-speech")

# A flatmap list of sdk_component:sdk_component_tests,sdk_component_another_tests
set(SDK_TEST_PROJECT_LIST "")
list(APPEND SDK_TEST_PROJECT_LIST "cloudfront:tests/aws-cpp-sdk-cloudfront-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "cognito-identity:tests/aws-cpp-sdk-cognitoidentity-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "core:tests/aws-cpp-sdk-core-tests")
list(APPEND SDK_TEST_PROJECT_LIST "dynamodb:tests/aws-cpp-sdk-dynamodb-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "dynamodb:tests/aws-cpp-sdk-dynamodb-unit-tests")
list(APPEND SDK_TEST_PROJECT_LIST "ec2:tests/aws-cpp-sdk-ec2-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "elasticfilesystem:tests/aws-cpp-sdk-elasticfilesystem-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "identity-management:tests/aws-cpp-sdk-identity-management-tests")
list(APPEND SDK_TEST_PROJECT_LIST "kinesis:tests/aws-cpp-sdk-kinesis-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "lambda:tests/aws-cpp-sdk-lambda-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "logs:tests/aws-cpp-sdk-logs-integration-tests,tests/aws-cpp-sdk-logs-unit-tests")
list(APPEND SDK_TEST_PROJECT_LIST "mediastore-data:tests/aws-cpp-sdk-mediastore-data-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "monitoring:tests/aws-cpp-sdk-monitoring-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "rds:tests/aws-cpp-sdk-rds-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "redshift:tests/aws-cpp-sdk-redshift-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "s3:tests/aws-cpp-sdk-s3-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "s3:tests/aws-cpp-sdk-s3-unit-tests")
list(APPEND SDK_TEST_PROJECT_LIST "s3-crt:tests/aws-cpp-sdk-s3-crt-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "s3-encryption:tests/aws-cpp-sdk-s3-encryption-tests,tests/aws-cpp-sdk-s3-encryption-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "s3control:tests/aws-cpp-sdk-s3control-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "sqs:tests/aws-cpp-sdk-sqs-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "transfer:tests/aws-cpp-sdk-transfer-tests")
list(APPEND SDK_TEST_PROJECT_LIST "text-to-speech:tests/aws-cpp-sdk-text-to-speech-tests,tests/aws-cpp-sdk-polly-sample")
list(APPEND SDK_TEST_PROJECT_LIST "transcribestreaming:tests/aws-cpp-sdk-transcribestreaming-integ-tests")
list(APPEND SDK_TEST_PROJECT_LIST "eventbridge:tests/aws-cpp-sdk-eventbridge-tests")
list(APPEND SDK_TEST_PROJECT_LIST "timestream-query:tests/aws-cpp-sdk-timestream-query-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "dsql:tests/aws-cpp-sdk-dsql-unit-tests")
list(APPEND SDK_TEST_PROJECT_LIST "bedrock-runtime:tests/aws-cpp-sdk-bedrock-runtime-integration-tests")


build_sdk_list()

if(EXISTS "${CMAKE_SOURCE_DIR}/generated")
    if(EXISTS "${CMAKE_SOURCE_DIR}/generated/tests")
        foreach(SERVICE_NAME IN LISTS SERVICE_CLIENT_LIST)
            if(EXISTS "${CMAKE_SOURCE_DIR}/generated/tests/${SERVICE_NAME}-gen-tests")
                list(APPEND SDK_TEST_PROJECT_LIST "${SERVICE_NAME}:generated/tests/${SERVICE_NAME}-gen-tests")
            endif()
        endforeach()
    endif()
endif()

set(SDK_DEPENDENCY_LIST "")
list(APPEND SDK_DEPENDENCY_LIST "access-management:iam,cognito-identity,core")
list(APPEND SDK_DEPENDENCY_LIST "identity-management:cognito-identity,sts,core")
list(APPEND SDK_DEPENDENCY_LIST "queues:sqs,core")
list(APPEND SDK_DEPENDENCY_LIST "s3-encryption:s3,kms,core")
list(APPEND SDK_DEPENDENCY_LIST "text-to-speech:polly,core")
list(APPEND SDK_DEPENDENCY_LIST "transfer:s3,core")

set(TEST_DEPENDENCY_LIST "")
list(APPEND TEST_DEPENDENCY_LIST "cognito-identity:access-management,iam,core")
list(APPEND TEST_DEPENDENCY_LIST "identity-management:cognito-identity,sts,core")
list(APPEND TEST_DEPENDENCY_LIST "lambda:access-management,cognito-identity,iam,kinesis,core")
list(APPEND TEST_DEPENDENCY_LIST "s3-encryption:s3,kms,core")
list(APPEND TEST_DEPENDENCY_LIST "s3control:s3,access-management,cognito-identity,iam,core")
list(APPEND TEST_DEPENDENCY_LIST "sqs:access-management,cognito-identity,iam,core")
list(APPEND TEST_DEPENDENCY_LIST "text-to-speech:polly,core")
list(APPEND TEST_DEPENDENCY_LIST "transfer:s3,core")
list(APPEND TEST_DEPENDENCY_LIST "logs:access-management,cognito-identity,iam,core")

set(GENERATED_SERVICE_LIST ${SERVICE_CLIENT_LIST})
foreach(SERVICE_NAME IN LISTS SERVICE_CLIENT_LIST)
    list(APPEND SDK_DEPENDENCY_LIST "${SERVICE_NAME}:core")
endforeach()
