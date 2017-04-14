#
# Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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


add_project(AWSSDK "User friendly cmake creator")

# create a new version file for AWSSDK, then find_package will return latest PACKAGE_VERSION
write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
)

file(WRITE
    "${CMAKE_CURRENT_BINARY_DIR}/platformDeps.cmake"
"#
# Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
# 
# Licensed under the Apache License, Version 2.0 (the \"License\").
# You may not use this file except in compliance with the License.
# A copy of the License is located at
# 
#  http://aws.amazon.com/apache2.0
# 
# or in the \"license\" file accompanying this file. This file is distributed
# on an \"AS IS\" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
# express or implied. See the License for the specific language governing
# permissions and limitations under the License.
#\n"
    "SET(AWSSDK_PLATFORM_DEPS_LIBS ${PLATFORM_DEP_LIBS_ABSTRACT_NAME})\n"
    "SET(AWSSDK_CLIENT_LIBS ${CLIENT_LIBS_ABSTRACT_NAME})\n"
    "SET(AWSSDK_CRYPTO_LIBS ${CRYPTO_LIBS_ABSTRACT_NAME})\n"
    "SET(AWSSDK_ADDITIONAL_LIBS ${AWS_SDK_ADDITIONAL_LIBRARIES_ABSTRACT_NAME})\n"
    "SET(AWSSDK_LIB_INSTALLDIR ${LIBRARY_DIRECTORY})\n"
    "SET(AWSSDK_BIN_INSTALLDIR ${BINARY_DIRECTORY})\n"
    "SET(AWSSDK_INCLUDE_INSTALLDIR ${INCLUDE_DIRECTORY})\n"
    "SET(AWSSDK_ARCHIVE_INSTALLDIR ${ARCHIVE_DIRECTORY})\n"
    )

if (NOT SIMPLE_INSTALL)
    file(APPEND
        "${CMAKE_CURRENT_BINARY_DIR}/platformDeps.cmake"
        "SET(AWSSDK_PLATFORM_PREFIX ${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER})\n")
endif()

# copy version file to destination
install(
    FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
    DESTINATION "${LIBRARY_DIRECTORY}/cmake/${PROJECT_NAME}")

# copy config file to destination, this file is vital for cmake to find correct package.
# useful macros and variables will be included in this cmake file for user to use
install(
    FILES "${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}Config.cmake"
    DESTINATION "${LIBRARY_DIRECTORY}/cmake/${PROJECT_NAME}")

# to make compile time settings consistent with user usage time settings, we copy common settings to 
# destination. These settings will be included by ${PROJECT_NAME}-config.cmake

# internal dependencies
install(
    FILES "${CMAKE_SOURCE_DIR}/cmake/sdksCommon.cmake"
    DESTINATION "${LIBRARY_DIRECTORY}/cmake/${PROJECT_NAME}/")

# platform external dependencies
install(
    FILES "${CMAKE_CURRENT_BINARY_DIR}/platformDeps.cmake"
    DESTINATION "${LIBRARY_DIRECTORY}/cmake/${PROJECT_NAME}/")
