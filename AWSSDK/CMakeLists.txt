add_project(AWSSDK "User friendly cmake creator")

# create a new version file for AWSSDK, then find_package will return latest PACKAGE_VERSION
write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
)

file(WRITE
    "${CMAKE_CURRENT_BINARY_DIR}/platformDeps.cmake"
    "SET(PLATFORM_DEPS ${PLATFORM_DEP_LIBS_ABSTRACT_NAME})\n"
    "SET(CLIENT_LIBS ${CLIENT_LIBS_ABSTRACT_NAME})\n"
    "SET(CRYPTO_LIBS ${CRYPTO_LIBS_ABSTRACT_NAME})\n"
    "SET(ADDITIONAL_LIBS ${AWS_SDK_ADDITIONAL_LIBRARIES_ABSTRACT_NAME})\n")

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
