cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-s3EncryptionClient)

file( GLOB S3ENCRYPTIONCLIENT_HEADERS "include/aws/s3EncryptionClient/*.h" )

file( GLOB S3ENCRYPTIONCLIENT_SOURCE "source/s3EncryptionClient/*.cpp" )

if(MSVC)
    source_group("Header Files\\aws\\s3EncryptionClient" FILES ${S3ENCRYPTIONCLIENT_HEADERS})

    source_group("Source Files\\s3EncryptionClient" FILES ${S3ENCRYPTIONCLIENT_SOURCE})
endif()

file(GLOB ALL_S3ENCRYPTIONCLIENT_HEADERS
    ${S3ENCRYPTIONCLIENT_HEADERS}
    ${S3ENCRYPTIONCLIENT_RESOURCE_HEADERS}
)

file(GLOB ALL_S3ENCRYPTIONCLIENT_SOURCE
    ${S3ENCRYPTIONCLIENT_SOURCE}
)

file(GLOB ALL_S3ENCRYPTIONCLIENT
    ${ALL_S3ENCRYPTIONCLIENT_HEADERS}
    ${ALL_S3ENCRYPTIONCLIENT_SOURCE}
)

set(S3ENCRYPTIONCLIENT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3/include/"
    "${CORE_DIR}/include/"
  )

include_directories(${S3ENCRYPTIONCLIENT_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_S3ENCRYPTIONCLIENT_EXPORTS")
endif()

add_library(aws-cpp-sdk-s3EncryptionClient ${LIBTYPE} ${ALL_S3ENCRYPTIONCLIENT})

target_include_directories(aws-cpp-sdk-s3EncryptionClient PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(aws-cpp-sdk-s3EncryptionClient aws-cpp-sdk-s3)

if(SIMPLE_INSTALL)
    install (TARGETS aws-cpp-sdk-s3EncryptionClient
            ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
            LIBRARY DESTINATION lib
            RUNTIME DESTINATION bin)
else()
    install (TARGETS aws-cpp-sdk-s3EncryptionClient
             ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
             LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
             RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
endif()

install (FILES ${ALL_S3ENCRYPTIONCLIENT_HEADERS} DESTINATION include/aws/s3EncryptionClient)
