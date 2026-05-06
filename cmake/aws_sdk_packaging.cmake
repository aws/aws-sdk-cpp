# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

# CPack source distribution configuration for the modern build path.
# Users can generate a source tarball via:
#   cmake --build <build-dir> --target package_source

set(CPACK_PACKAGE_NAME "aws-sdk-cpp")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_SOURCE_GENERATOR "TGZ;ZIP")
set(CPACK_SOURCE_IGNORE_FILES
    "/\\.git/"
    "/build.*/"
    "/\\.cache/"
)
include(CPack)
