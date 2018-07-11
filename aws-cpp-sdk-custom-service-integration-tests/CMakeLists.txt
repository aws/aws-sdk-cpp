#
# Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License").
# You may not use this file except in compliance with the License.
# A copy of the License is located at
# 
#  http://aws.amazon.com/apache2.0
# 
# or in the "license" file accompanying this file. This file is distributed
# on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
# express or implied. See the License for the specific language governing
# permissions and limitations under the License.
#

cmake_minimum_required (VERSION 2.8.12)

find_package(AWSSDK)
find_package(aws-cpp-sdk-core)
find_package(testing-resources)
find_package(aws-cpp-sdk-custom-service)
add_project(aws-cpp-sdk-custom-service-integration-tests
    "Tests for the Custom Service: Pet Store" 
    aws-cpp-sdk-custom-service
    testing-resources
    aws-cpp-sdk-core)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB AWS_CUSTOM_SERVICE_INTEGRATION_TESTS_SRC "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${LIBTYPE} ${AWS_CUSTOM_SERVICE_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_CUSTOM_SERVICE_INTEGRATION_TESTS_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})
copyDlls(${PROJECT_NAME} ${PROJECT_LIBS})

