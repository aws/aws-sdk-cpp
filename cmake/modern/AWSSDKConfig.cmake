# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
# Backward-compatibility shim: forwards find_package(AWSSDK COMPONENTS ...)
# to the modern per-service find_package(aws-cpp-sdk-<service>) packages.

message(DEPRECATION
    "find_package(AWSSDK) is deprecated. Use find_package(aws-cpp-sdk-<service>) instead.\n"
    "Example: find_package(aws-cpp-sdk-s3 REQUIRED)")

include(CMakeFindDependencyMacro)
find_dependency(aws-cpp-sdk-core)

foreach(_component IN LISTS AWSSDK_FIND_COMPONENTS)
    find_dependency(aws-cpp-sdk-${_component})
endforeach()

set(AWSSDK_FOUND TRUE)
set(AWSSDK_LIBRARIES "")
foreach(_component IN LISTS AWSSDK_FIND_COMPONENTS)
    list(APPEND AWSSDK_LIBRARIES AWS::aws-cpp-sdk-${_component})
endforeach()
list(APPEND AWSSDK_LIBRARIES AWS::aws-cpp-sdk-core)
