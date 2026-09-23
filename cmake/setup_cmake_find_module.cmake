# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.


add_project(AWSSDK "User friendly cmake creator")

# create a new version file for AWSSDK, then find_package will return latest PACKAGE_VERSION
write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}/${PROJECT_NAME}ConfigVersion.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
)

file(APPEND
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}/${PROJECT_NAME}ConfigVersion.cmake"
    "set(AWSSDK_INSTALL_AS_SHARED_LIBS ${BUILD_SHARED_LIBS} PARENT_SCOPE)\n"
    "set(AWSSDK_CRT_INSTALL_AS_SHARED_LIBS ${CRT_BUILD_SHARED_LIBS} PARENT_SCOPE)\n")

file(WRITE
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}/platformDeps.cmake"
"# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.\n"
    "set(AWSSDK_PLATFORM_DEPS_LIBS ${PLATFORM_DEP_LIBS_ABSTRACT_NAME})\n"
    "set(AWSSDK_CLIENT_LIBS ${CLIENT_LIBS_ABSTRACT_NAME})\n"
    "set(AWSSDK_CRYPTO_LIBS ${CRYPTO_LIBS_ABSTRACT_NAME})\n"
    "set(AWSSDK_CRYPTO_IN_SOURCE_BUILD ${CRYPTO_IN_SOURCE_BUILD})\n"
    "set(AWSSDK_COMMON_RUNTIME_LIBS ${AWS_COMMON_RUNTIME_LIBS})\n"
    "set(AWSSDK_ADDITIONAL_LIBS ${AWS_SDK_ADDITIONAL_LIBRARIES_ABSTRACT_NAME})\n"
    "set(AWSSDK_INSTALL_LIBDIR ${LIBRARY_DIRECTORY})\n"
    "set(AWSSDK_INSTALL_BINDIR ${BINARY_DIRECTORY})\n"
    "set(AWSSDK_INSTALL_INCLUDEDIR ${INCLUDE_DIRECTORY})\n"
    "set(AWSSDK_INSTALL_ARCHIVEDIR ${ARCHIVE_DIRECTORY})\n"
    "if (NOT LibCrypto_INCLUDE_DIR)\n"
    "    set(LibCrypto_INCLUDE_DIR ${OPENSSL_INCLUDE_DIR} CACHE INTERNAL \"The OpenSSL include directory\")\n"
    "endif()\n"
    "if (NOT LibCrypto_STATIC_LIBRARY)\n"
    "    set(LibCrypto_STATIC_LIBRARY ${OPENSSL_CRYPTO_LIBRARY} CACHE INTERNAL \"The OpenSSL crypto static library\")\n"
    "endif()\n"
    "if (NOT LibCrypto_SHARED_LIBRARY)\n"
    "    set(LibCrypto_SHARED_LIBRARY ${OPENSSL_CRYPTO_LIBRARY} CACHE INTERNAL \"The OpenSSL crypto shared library\")\n"
    "endif()\n"
    )

if (NOT SIMPLE_INSTALL)
    file(APPEND
        "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}/platformDeps.cmake"
        "set(AWSSDK_PLATFORM_PREFIX ${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER})\n")
endif()

# When ENABLE_CPACK_PACKAGING is ON these consumer-facing CMake config files are
# tagged so they land in the core devel package rather than CPack's catch-all
# "Unspecified" bucket (which would produce a stray rpm/deb). When it is OFF the
# variable expands to nothing and the install() calls behave exactly as they did
# before packaging support was added.
if(ENABLE_CPACK_PACKAGING)
    set(AWSSDK_CORE_DEVEL_COMPONENT COMPONENT core-devel)
else()
    set(AWSSDK_CORE_DEVEL_COMPONENT)
endif()

# copy version file to destination
install(
    FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}/${PROJECT_NAME}ConfigVersion.cmake"
    DESTINATION "${LIBRARY_DIRECTORY}/cmake/${PROJECT_NAME}"
    ${AWSSDK_CORE_DEVEL_COMPONENT})

# platform external dependencies
install(
    FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}/platformDeps.cmake"
    DESTINATION "${LIBRARY_DIRECTORY}/cmake/${PROJECT_NAME}/"
    ${AWSSDK_CORE_DEVEL_COMPONENT})

# copy cmake files to destination, these files include useful macros, functions and variables for users.
# The EXCLUDEs are unconditional: they only ever match files added by this
# packaging support, so keeping them always-on leaves the installed tree
# identical to what it was before, rather than shipping build-only scaffolding
# to consumers when packaging is disabled.
install(DIRECTORY "${AWS_NATIVE_SDK_ROOT}/cmake/" DESTINATION "${LIBRARY_DIRECTORY}/cmake/${PROJECT_NAME}"
    ${AWSSDK_CORE_DEVEL_COMPONENT}
    PATTERN "CPackConfig.cmake"          EXCLUDE
    PATTERN "CPackComponents.cmake"      EXCLUDE
    PATTERN "ServiceGroupMapping.cmake"  EXCLUDE
    PATTERN "rpm-scripts"                EXCLUDE
    PATTERN "deb-scripts"                EXCLUDE)

# following two files are vital for cmake to find correct package, but since we copied all files from above
# we left the code here to give you bettern understanding
#install(
#    FILES "${AWS_NATIVE_SDK_ROOT}/cmake/${PROJECT_NAME}Config.cmake"
#    DESTINATION "${LIBRARY_DIRECTORY}/cmake/${PROJECT_NAME}")

# to make compile time settings consistent with user usage time settings, we copy common settings to
# destination. These settings will be included by ${PROJECT_NAME}-config.cmake

# internal dependencies
#install(
#    FILES "${AWS_NATIVE_SDK_ROOT}/cmake/sdksCommon.cmake"
#    DESTINATION "${LIBRARY_DIRECTORY}/cmake/${PROJECT_NAME}/")
