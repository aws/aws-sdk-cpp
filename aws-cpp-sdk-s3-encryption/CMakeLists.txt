add_project(aws-cpp-sdk-s3-encryption-integration-tests 
    "Amazon S3 Encryption Client"
    aws-cpp-sdk-core 
    aws-cpp-sdk-s3 
    aws-cpp-sdk-kms)

file( GLOB S3ENCRYPTION_HEADERS "include/aws/s3-encryption/*.h" )
file( GLOB S3ENCRYPTION_MATERIALS_HEADERS "include/aws/s3-encryption/materials/*.h" )
file( GLOB S3ENCRYPTION_HANDLERS_HEADERS "include/aws/s3-encryption/handlers/*.h" )
file( GLOB S3ENCRYPTION_MODULES_HEADERS "include/aws/s3-encryption/modules/*.h" )

file( GLOB S3ENCRYPTION_SOURCE "source/s3-encryption/*.cpp" )
file( GLOB S3ENCRYPTION_MATERIALS_SOURCE "source/s3-encryption/materials/*.cpp" )
file( GLOB S3ENCRYPTION_HANDLERS_SOURCE "source/s3-encryption/handlers/*.cpp" )
file( GLOB S3ENCRYPTION_MODULES_SOURCE "source/s3-encryption/modules/*.cpp" )

if(MSVC)
    source_group("Header Files\\aws\\s3-encryption" FILES ${S3ENCRYPTION_HEADERS})
    source_group("Header Files\\aws\\s3-encryption\\materials" FILES ${S3ENCRYPTION_MATERIALS_HEADERS})
    source_group("Header Files\\aws\\s3-encryption\\handlers" FILES ${S3ENCRYPTION_HANDLERS_HEADERS})
    source_group("Header Files\\aws\\s3-encryption\\modules" FILES ${S3ENCRYPTION_MODULES_HEADERS})

    source_group("Source Files\\s3-encryption" FILES ${S3ENCRYPTION_SOURCE})
    source_group("Source Files\\s3-encryption\\materials" FILES ${S3ENCRYPTION_MATERIALS_SOURCE})
    source_group("Source Files\\s3-encryption\\handlers" FILES ${S3ENCRYPTION_HANDLERS_SOURCE})
    source_group("Source Files\\s3-encryption\\modules" FILES ${S3ENCRYPTION_MODULES_SOURCE})
    
endif()

file(GLOB ALL_S3ENCRYPTION_HEADERS
    ${S3ENCRYPTION_HEADERS}
    ${S3ENCRYPTION_MATERIALS_HEADERS}
    ${S3ENCRYPTION_HANDLERS_HEADERS}
    ${S3ENCRYPTION_MODULES_HEADERS}
)

file(GLOB ALL_S3ENCRYPTION_SOURCE
    ${S3ENCRYPTION_SOURCE}
    ${S3ENCRYPTION_MATERIALS_SOURCE}
    ${S3ENCRYPTION_HANDLERS_SOURCE}
    ${S3ENCRYPTION_MODULES_SOURCE}
)

file(GLOB ALL_S3ENCRYPTION
    ${ALL_S3ENCRYPTION_HEADERS}
    ${ALL_S3ENCRYPTION_SOURCE}
)

set(S3ENCRYPTION_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CMAKE_SOURCE_DIR}/aws-cpp-sdk-s3/include/"
    "${CMAKE_SOURCE_DIR}/aws-cpp-sdk-kms/include/"
    "${CORE_DIR}/include/"
  )

include_directories(${S3ENCRYPTION_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_S3ENCRYPTION_EXPORTS")
endif()

add_library(aws-cpp-sdk-s3-encryption ${LIBTYPE} ${ALL_S3ENCRYPTION})

target_include_directories(aws-cpp-sdk-s3-encryption PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(aws-cpp-sdk-s3-encryption ${PROJECT_LIBS})

if(SIMPLE_INSTALL)
    install (TARGETS aws-cpp-sdk-s3-encryption
            ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
            LIBRARY DESTINATION lib
            RUNTIME DESTINATION bin)
else()
    install (TARGETS aws-cpp-sdk-s3-encryption
             ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
             LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
             RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
endif()

install (FILES ${ALL_S3ENCRYPTION_HEADERS} DESTINATION include/aws/s3-encryption)
