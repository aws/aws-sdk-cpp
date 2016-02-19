cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-identity-management)

file(GLOB AWS_IDENTITY_PROVIDER_HEADERS
    "include/aws/identity-management/auth/*.h"
)

file(GLOB AWS_IDENTITY_HEADERS
    "include/aws/identity-management/*.h"
)

file(GLOB AWS_IDENTITY_PROVIDER_SOURCE
     "source/auth/*.cpp"
 )

if(MSVC)
    source_group("Header Files\\aws\\identity-management\\auth" FILES ${AWS_IDENTITY_PROVIDER_HEADERS})

    source_group("Source Files\\auth" FILES ${AWS_IDENTITY_PROVIDER_SOURCE})
endif()

file(GLOB IDENTITY_MGMT_SRC
  ${AWS_IDENTITY_PROVIDER_HEADERS}
  ${AWS_IDENTITY_HEADERS}
  ${AWS_IDENTITY_PROVIDER_SOURCE}
)

set(IDENTITY_MGMT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-cognito-identity/include/"
    "${CORE_DIR}/include/"
  )

include_directories(${IDENTITY_MGMT_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_IDENTITY_MANAGEMENT_EXPORTS")
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

add_library(aws-cpp-sdk-identity-management ${LIBTYPE} ${IDENTITY_MGMT_SRC})

target_include_directories(aws-cpp-sdk-identity-management PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(aws-cpp-sdk-identity-management aws-cpp-sdk-cognito-identity)

install (TARGETS aws-cpp-sdk-identity-management 
         ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
         LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
         RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

install (FILES ${AWS_IDENTITY_HEADERS} DESTINATION include/aws/identity-management)
install (FILES ${AWS_IDENTITY_PROVIDER_HEADERS} DESTINATION include/aws/identity-management/auth)