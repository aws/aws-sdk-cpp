cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-transfer)

file( GLOB TRANSFER_HEADERS "include/aws/transfer/*.h" )
file( GLOB TRANSFER_RESOURCE_HEADERS "include/aws/transfer/resource/*.h" )

file( GLOB TRANSFER_SOURCE "source/transfer/*.cpp" )

if(MSVC)
    source_group("Header Files\\aws\\transfer" FILES ${TRANSFER_HEADERS})
    source_group("Header Files\\aws\\transfer\\resource" FILES ${TRANSFER_RESOURCE_HEADERS})

    source_group("Source Files\\transfer" FILES ${TRANSFER_SOURCE})
endif()

file(GLOB ALL_TRANSFER_HEADERS
    ${TRANSFER_HEADERS}
    ${TRANSFER_RESOURCE_HEADERS}
)

file(GLOB ALL_TRANSFER_SOURCE
    ${TRANSFER_SOURCE}
)

file(GLOB ALL_TRANSFER
    ${ALL_TRANSFER_HEADERS}
    ${ALL_TRANSFER_SOURCE}
)

set(TRANSFER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3/include/"
    "${CORE_DIR}/include/"
  )

include_directories(${TRANSFER_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_TRANSFER_EXPORTS")
endif()

add_library(aws-cpp-sdk-transfer ${LIBTYPE} ${ALL_TRANSFER})

target_include_directories(aws-cpp-sdk-transfer PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(aws-cpp-sdk-transfer aws-cpp-sdk-s3)

if(SIMPLE_INSTALL)
    install (TARGETS aws-cpp-sdk-transfer
            ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
            LIBRARY DESTINATION lib
            RUNTIME DESTINATION bin)
else()
    if(PLATFORM_CUSTOM)
        install_custom_library(aws-cpp-sdk-transfer)
    else()
        install (TARGETS aws-cpp-sdk-transfer
                 ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
                 LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
                RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
endif()

install (FILES ${ALL_TRANSFER_HEADERS} DESTINATION include/aws/transfer)
