cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-access-management)

file(GLOB AWS_ACCESS_MANAGEMENT_HEADERS
    "include/aws/access-management/*.h"
)

file(GLOB AWS_ACCESS_MANAGEMENT_SOURCE
     "source/*.cpp"
 )

if(MSVC)
    source_group("Header Files\\aws\\access-management" FILES ${AWS_ACCESS_MANAGEMENT_HEADERS})

    source_group("Source Files" FILES ${AWS_ACCESS_MANAGEMENT_SOURCE})
endif()

file(GLOB ACCESS_MANAGEMENT_SRC
  ${AWS_ACCESS_MANAGEMENT_HEADERS}
  ${AWS_ACCESS_MANAGEMENT_SOURCE}
)

set(ACCESS_MANAGEMENT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-iam/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-cognito-identity/include/"
    "${CORE_DIR}/include/"
  )

include_directories(${ACCESS_MANAGEMENT_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ACCESS_MANAGEMENT_EXPORTS")
endif()

add_library(aws-cpp-sdk-access-management ${LIBTYPE} ${ACCESS_MANAGEMENT_SRC})

target_include_directories(aws-cpp-sdk-access-management PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(aws-cpp-sdk-access-management aws-cpp-sdk-cognito-identity aws-cpp-sdk-iam)

install (TARGETS aws-cpp-sdk-access-management 
         ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
         LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
         RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

install (FILES ${AWS_ACCESS_MANAGEMENT_HEADERS} DESTINATION include/aws/access-management)
