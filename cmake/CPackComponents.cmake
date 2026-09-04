# CPack Component Definitions for AWS SDK C++
# Defines component groups and components for packaging

# Provides cpack_add_component / cpack_add_component_group. CPackConfig.cmake
# includes this file before include(CPack), so we can't rely on CPack pulling
# the helper module in for us.
include(CPackComponent)

# Component groups represent logical groupings of AWS services
# Each group has two components:
#   - {group}-runtime: Runtime libraries (.so or .a files)
#   - {group}-devel: Development files (headers, CMake configs)

# Core group (required)
cpack_add_component_group(core
    DISPLAY_NAME "AWS SDK Core"
    DESCRIPTION "Core SDK libraries including HTTP clients, authentication, and utilities (required)"
    EXPANDED
    BOLD_TITLE
)

# Storage Services
cpack_add_component_group(storage
    DISPLAY_NAME "Storage Services"
    DESCRIPTION "S3, Glacier, EFS, FSx and related storage services"
)

# Compute Services
cpack_add_component_group(compute
    DISPLAY_NAME "Compute Services"
    DESCRIPTION "EC2, Lambda, Batch and compute services"
)

# Container Services
cpack_add_component_group(containers
    DISPLAY_NAME "Container Services"
    DESCRIPTION "ECS, EKS, ECR and container orchestration services"
)

# Database Services
cpack_add_component_group(database
    DISPLAY_NAME "Database Services"
    DESCRIPTION "DynamoDB, RDS, Redshift, Neptune and database services"
)

# Networking & Content Delivery
cpack_add_component_group(networking
    DISPLAY_NAME "Networking Services"
    DESCRIPTION "VPC, Route53, CloudFront, API Gateway and networking services"
)

# Messaging & Streaming
cpack_add_component_group(messaging
    DISPLAY_NAME "Messaging Services"
    DESCRIPTION "SQS, SNS, Kinesis, EventBridge and messaging services"
)

# AI & Machine Learning
cpack_add_component_group(aiml
    DISPLAY_NAME "AI/ML Services"
    DESCRIPTION "Bedrock, SageMaker, Rekognition, Comprehend and AI/ML services"
)

# Analytics
cpack_add_component_group(analytics
    DISPLAY_NAME "Analytics Services"
    DESCRIPTION "Athena, EMR, Glue, QuickSight and analytics services"
)

# Security & Identity
cpack_add_component_group(security
    DISPLAY_NAME "Security Services"
    DESCRIPTION "IAM, Cognito, KMS, Secrets Manager and security services"
)

# Management & Governance
cpack_add_component_group(management
    DISPLAY_NAME "Management Services"
    DESCRIPTION "CloudFormation, CloudWatch, Config and management services"
)

# Application Integration
cpack_add_component_group(appintegration
    DISPLAY_NAME "Application Integration"
    DESCRIPTION "AppConfig, AppSync, Step Functions and integration services"
)

# Developer Tools
cpack_add_component_group(devtools
    DISPLAY_NAME "Developer Tools"
    DESCRIPTION "CodeCommit, CodeBuild, CodeDeploy, X-Ray and developer tools"
)

# Media Services
cpack_add_component_group(media
    DISPLAY_NAME "Media Services"
    DESCRIPTION "MediaConvert, MediaLive, IVS and media services"
)

# IoT Services
cpack_add_component_group(iot
    DISPLAY_NAME "IoT Services"
    DESCRIPTION "IoT Core, Greengrass and IoT services"
)

# Business Applications
cpack_add_component_group(business
    DISPLAY_NAME "Business Applications"
    DESCRIPTION "WorkSpaces, Chime, Connect and business applications"
)

# Migration & Transfer
cpack_add_component_group(migration
    DISPLAY_NAME "Migration Services"
    DESCRIPTION "DMS, DataSync, Transfer and migration services"
)

# Cost Management
cpack_add_component_group(costmgmt
    DISPLAY_NAME "Cost Management"
    DESCRIPTION "Cost Explorer, Budgets and cost management services"
)

# Miscellaneous Services
cpack_add_component_group(misc
    DISPLAY_NAME "Miscellaneous Services"
    DESCRIPTION "Other AWS services"
)

# Define component for each group
# We use a macro to avoid repetition
macro(define_group_components GROUP_NAME DISPLAY_NAME IS_REQUIRED)
    # Runtime component (libraries)
    cpack_add_component(${GROUP_NAME}-runtime
        DISPLAY_NAME "${DISPLAY_NAME} Runtime"
        DESCRIPTION "${DISPLAY_NAME} runtime libraries"
        GROUP ${GROUP_NAME}
        REQUIRED ${IS_REQUIRED}
    )

    # Development component (headers + cmake configs)
    cpack_add_component(${GROUP_NAME}-devel
        DISPLAY_NAME "${DISPLAY_NAME} Development"
        DESCRIPTION "${DISPLAY_NAME} headers and CMake configuration files"
        GROUP ${GROUP_NAME}
        DEPENDS ${GROUP_NAME}-runtime
    )

    # Static library component (for separate static builds)
    cpack_add_component(${GROUP_NAME}-static
        DISPLAY_NAME "${DISPLAY_NAME} Static"
        DESCRIPTION "${DISPLAY_NAME} static libraries"
        GROUP ${GROUP_NAME}
    )
endmacro()

# Define components for all groups
define_group_components(core "Core" TRUE)
define_group_components(storage "Storage" FALSE)
define_group_components(compute "Compute" FALSE)
define_group_components(containers "Containers" FALSE)
define_group_components(database "Database" FALSE)
define_group_components(networking "Networking" FALSE)
define_group_components(messaging "Messaging" FALSE)
define_group_components(aiml "AI/ML" FALSE)
define_group_components(analytics "Analytics" FALSE)
define_group_components(security "Security" FALSE)
define_group_components(management "Management" FALSE)
define_group_components(appintegration "App Integration" FALSE)
define_group_components(devtools "Developer Tools" FALSE)
define_group_components(media "Media" FALSE)
define_group_components(iot "IoT" FALSE)
define_group_components(business "Business Apps" FALSE)
define_group_components(migration "Migration" FALSE)
define_group_components(costmgmt "Cost Management" FALSE)
define_group_components(misc "Miscellaneous" FALSE)

# =============================================================================
# RPM Package Configuration
# =============================================================================

# A given build produces either shared (*-runtime) or static (*-static) library
# packages, not both -- setup_install routes installs to one or the other based
# on BUILD_SHARED_LIBS. The devel package and the inter-service dep chain must
# point at whichever variant actually exists.
if(BUILD_SHARED_LIBS)
    set(_AWS_LIB_VARIANT_SUFFIX "")
else()
    set(_AWS_LIB_VARIANT_SUFFIX "-static")
endif()

# Macro to configure RPM package for a group.
# CPackRPM looks up per-component variables under the upper-cased component
# name (CPACK_RPM_<COMPONENT_UPPER>_*), so the LHS must be upper-case even
# though the component itself and the rpm package names are lower-case.
macro(configure_rpm_group GROUP_NAME)
    string(TOUPPER "${GROUP_NAME}" _GROUP_UPPER)

    # Runtime package
    set(CPACK_RPM_${_GROUP_UPPER}-RUNTIME_PACKAGE_NAME "aws-sdk-cpp-${GROUP_NAME}")
    set(CPACK_RPM_${_GROUP_UPPER}-RUNTIME_FILE_NAME "RPM-DEFAULT")

    # Development package
    set(CPACK_RPM_${_GROUP_UPPER}-DEVEL_PACKAGE_NAME "aws-sdk-cpp-${GROUP_NAME}-devel")
    set(CPACK_RPM_${_GROUP_UPPER}-DEVEL_FILE_NAME "RPM-DEFAULT")

    # Static package
    set(CPACK_RPM_${_GROUP_UPPER}-STATIC_PACKAGE_NAME "aws-sdk-cpp-${GROUP_NAME}-static")
    set(CPACK_RPM_${_GROUP_UPPER}-STATIC_FILE_NAME "RPM-DEFAULT")

    # Inter-package deps. Skip for core -- the standalone block below sets core's
    # devel requires (with system devel libs) and would otherwise be overwritten.
    # NB: this is a macro, so a bare `GROUP_NAME` in if() is a variable lookup,
    # not a substitution; we must dereference via ${GROUP_NAME}.
    if(NOT "${GROUP_NAME}" STREQUAL "core")
        if(BUILD_SHARED_LIBS)
            set(CPACK_RPM_${_GROUP_UPPER}-RUNTIME_PACKAGE_REQUIRES
                "aws-sdk-cpp-core = ${CPACK_PACKAGE_VERSION}")
        else()
            set(CPACK_RPM_${_GROUP_UPPER}-STATIC_PACKAGE_REQUIRES
                "aws-sdk-cpp-core-static = ${CPACK_PACKAGE_VERSION}")
        endif()
        set(CPACK_RPM_${_GROUP_UPPER}-DEVEL_PACKAGE_REQUIRES
            "aws-sdk-cpp-${GROUP_NAME}${_AWS_LIB_VARIANT_SUFFIX} = ${CPACK_PACKAGE_VERSION}, aws-sdk-cpp-core-devel = ${CPACK_PACKAGE_VERSION}")
    endif()
endmacro()

# Runtime deps on system shared libraries are discovered automatically via
# CPACK_RPM_PACKAGE_AUTOREQ from the .so files. Hardcoding rpm package names
# (libcurl vs curl, openssl-libs vs libopenssl1_1, ...) breaks portability
# across Fedora/RHEL/openSUSE, so we leave runtime requires to autoreq.
#
# Devel deps cannot be auto-discovered; the names below target the
# Fedora/RHEL family which is the primary consumer of rpm packages.
set(CPACK_RPM_CORE-DEVEL_PACKAGE_REQUIRES
    "aws-sdk-cpp-core${_AWS_LIB_VARIANT_SUFFIX} = ${CPACK_PACKAGE_VERSION}, libcurl-devel >= 7.58.0, openssl-devel >= 1.1.1, zlib-devel >= 1.2.11, cmake >= 3.13")

# Configure all groups for RPM
configure_rpm_group(core)
configure_rpm_group(storage)
configure_rpm_group(compute)
configure_rpm_group(containers)
configure_rpm_group(database)
configure_rpm_group(networking)
configure_rpm_group(messaging)
configure_rpm_group(aiml)
configure_rpm_group(analytics)
configure_rpm_group(security)
configure_rpm_group(management)
configure_rpm_group(appintegration)
configure_rpm_group(devtools)
configure_rpm_group(media)
configure_rpm_group(iot)
configure_rpm_group(business)
configure_rpm_group(migration)
configure_rpm_group(costmgmt)
configure_rpm_group(misc)

# RPM post-install/uninstall scripts for shared libraries
if(BUILD_SHARED_LIBS AND EXISTS "${CMAKE_SOURCE_DIR}/cmake/rpm-scripts/post.sh")
    set(CPACK_RPM_CORE-RUNTIME_POST_INSTALL_SCRIPT_FILE "${CMAKE_SOURCE_DIR}/cmake/rpm-scripts/post.sh")
    set(CPACK_RPM_CORE-RUNTIME_POST_UNINSTALL_SCRIPT_FILE "${CMAKE_SOURCE_DIR}/cmake/rpm-scripts/postun.sh")
endif()

# =============================================================================
# DEB Package Configuration
# =============================================================================

# Macro to configure DEB package for a group.
# CPackDeb looks up per-component variables under the upper-cased component
# name (CPACK_DEBIAN_<COMPONENT_UPPER>_*), so the LHS must be upper-case even
# though the component itself and the deb package names are lower-case.
macro(configure_deb_group GROUP_NAME)
    string(TOUPPER "${GROUP_NAME}" _GROUP_UPPER)

    # Runtime package (follows lib* naming convention for Debian)
    set(CPACK_DEBIAN_${_GROUP_UPPER}-RUNTIME_PACKAGE_NAME "libaws-sdk-cpp-${GROUP_NAME}")
    set(CPACK_DEBIAN_${_GROUP_UPPER}-RUNTIME_FILE_NAME "DEB-DEFAULT")

    # Development package
    set(CPACK_DEBIAN_${_GROUP_UPPER}-DEVEL_PACKAGE_NAME "libaws-sdk-cpp-${GROUP_NAME}-dev")
    set(CPACK_DEBIAN_${_GROUP_UPPER}-DEVEL_FILE_NAME "DEB-DEFAULT")

    # Static package
    set(CPACK_DEBIAN_${_GROUP_UPPER}-STATIC_PACKAGE_NAME "libaws-sdk-cpp-${GROUP_NAME}-static")
    set(CPACK_DEBIAN_${_GROUP_UPPER}-STATIC_FILE_NAME "DEB-DEFAULT")

    # Inter-package deps. Skip for core -- the standalone block below sets core's
    # devel depends (with system devel libs) and would otherwise be overwritten.
    # NB: this is a macro, so a bare `GROUP_NAME` in if() is a variable lookup,
    # not a substitution; we must dereference via ${GROUP_NAME}.
    if(NOT "${GROUP_NAME}" STREQUAL "core")
        if(BUILD_SHARED_LIBS)
            set(CPACK_DEBIAN_${_GROUP_UPPER}-RUNTIME_PACKAGE_DEPENDS
                "libaws-sdk-cpp-core (= ${CPACK_PACKAGE_VERSION})")
        else()
            set(CPACK_DEBIAN_${_GROUP_UPPER}-STATIC_PACKAGE_DEPENDS
                "libaws-sdk-cpp-core-static (= ${CPACK_PACKAGE_VERSION})")
        endif()
        set(CPACK_DEBIAN_${_GROUP_UPPER}-DEVEL_PACKAGE_DEPENDS
            "libaws-sdk-cpp-${GROUP_NAME}${_AWS_LIB_VARIANT_SUFFIX} (= ${CPACK_PACKAGE_VERSION}), libaws-sdk-cpp-core-dev (= ${CPACK_PACKAGE_VERSION})")
    endif()
endmacro()

# Runtime deps on system shared libraries are discovered automatically via
# CPACK_DEBIAN_PACKAGE_SHLIBDEPS (dpkg-shlibdeps) from the .so files. Hardcoding
# deb package names (libssl3 on bookworm vs libssl1.1 on bullseye, etc.)
# pins the package to a single Debian/Ubuntu release, so we leave runtime
# depends to shlibdeps.
#
# Devel deps cannot be auto-discovered; the names below target the
# Debian/Ubuntu family which is the primary consumer of deb packages.
set(CPACK_DEBIAN_CORE-DEVEL_PACKAGE_DEPENDS
    "libaws-sdk-cpp-core${_AWS_LIB_VARIANT_SUFFIX} (= ${CPACK_PACKAGE_VERSION}), libcurl4-openssl-dev (>= 7.58.0), libssl-dev (>= 1.1.1), zlib1g-dev (>= 1:1.2.11), cmake (>= 3.13)")

# Configure all groups for DEB
configure_deb_group(core)
configure_deb_group(storage)
configure_deb_group(compute)
configure_deb_group(containers)
configure_deb_group(database)
configure_deb_group(networking)
configure_deb_group(messaging)
configure_deb_group(aiml)
configure_deb_group(analytics)
configure_deb_group(security)
configure_deb_group(management)
configure_deb_group(appintegration)
configure_deb_group(devtools)
configure_deb_group(media)
configure_deb_group(iot)
configure_deb_group(business)
configure_deb_group(migration)
configure_deb_group(costmgmt)
configure_deb_group(misc)

# DEB post-install/remove scripts for shared libraries
if(BUILD_SHARED_LIBS AND EXISTS "${CMAKE_SOURCE_DIR}/cmake/deb-scripts/postinst")
    set(CPACK_DEBIAN_CORE-RUNTIME_PACKAGE_CONTROL_EXTRA
        "${CMAKE_SOURCE_DIR}/cmake/deb-scripts/postinst;${CMAKE_SOURCE_DIR}/cmake/deb-scripts/postrm")
endif()

# =============================================================================
# aws-crt-cpp vendored submodule components
# =============================================================================
#
# crt/aws-crt-cpp and its sub-libraries (aws-c-common, aws-c-cal, aws-c-io, s2n,
# ...) are built in-tree and install with the conventional CMake component names
# "Runtime" (.so files) and "Development" (headers, .a, .cmake). We can't easily
# override those install rules, so route the resulting CPack components into
# their own packages with explicit names.
#
# Runtime cross-package deps from aws-sdk-cpp-core -> aws-sdk-cpp-crt are picked
# up automatically by AUTOREQ/SHLIBDEPS via the .so soname links. The devel-
# time dep (headers cross-include) is added explicitly to the core-devel
# packages below since header includes aren't visible to autoreq.

# RPM
set(CPACK_RPM_RUNTIME_PACKAGE_NAME "aws-sdk-cpp-crt")
set(CPACK_RPM_RUNTIME_FILE_NAME "RPM-DEFAULT")
set(CPACK_RPM_DEVELOPMENT_PACKAGE_NAME "aws-sdk-cpp-crt-devel")
set(CPACK_RPM_DEVELOPMENT_FILE_NAME "RPM-DEFAULT")
set(CPACK_RPM_DEVELOPMENT_PACKAGE_REQUIRES
    "aws-sdk-cpp-crt = ${CPACK_PACKAGE_VERSION}")
# Catch-all for any install() without COMPONENT that didn't fit elsewhere.
set(CPACK_RPM_UNSPECIFIED_PACKAGE_NAME "aws-sdk-cpp-crt-extra")
set(CPACK_RPM_UNSPECIFIED_FILE_NAME "RPM-DEFAULT")

# Append the CRT devel cross-dep to core-devel's Requires.
set(CPACK_RPM_CORE-DEVEL_PACKAGE_REQUIRES
    "${CPACK_RPM_CORE-DEVEL_PACKAGE_REQUIRES}, aws-sdk-cpp-crt-devel = ${CPACK_PACKAGE_VERSION}")

# DEB
set(CPACK_DEBIAN_RUNTIME_PACKAGE_NAME "libaws-sdk-cpp-crt")
set(CPACK_DEBIAN_RUNTIME_FILE_NAME "DEB-DEFAULT")
set(CPACK_DEBIAN_DEVELOPMENT_PACKAGE_NAME "libaws-sdk-cpp-crt-dev")
set(CPACK_DEBIAN_DEVELOPMENT_FILE_NAME "DEB-DEFAULT")
set(CPACK_DEBIAN_DEVELOPMENT_PACKAGE_DEPENDS
    "libaws-sdk-cpp-crt (= ${CPACK_PACKAGE_VERSION})")
set(CPACK_DEBIAN_UNSPECIFIED_PACKAGE_NAME "libaws-sdk-cpp-crt-extra")
set(CPACK_DEBIAN_UNSPECIFIED_FILE_NAME "DEB-DEFAULT")

set(CPACK_DEBIAN_CORE-DEVEL_PACKAGE_DEPENDS
    "${CPACK_DEBIAN_CORE-DEVEL_PACKAGE_DEPENDS}, libaws-sdk-cpp-crt-dev (= ${CPACK_PACKAGE_VERSION})")
