add_project(aws-cpp-sdk-identity-management 
    "High-level C++ SDK for identity management against AWS" 
    aws-cpp-sdk-cognito-identity 
    aws-cpp-sdk-sts
    aws-cpp-sdk-core)

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
    source_group("Header Files\\aws\\identity-management" FILES ${AWS_IDENTITY_HEADERS})
    source_group("Source Files\\auth" FILES ${AWS_IDENTITY_PROVIDER_SOURCE})
endif()

file(GLOB IDENTITY_MGMT_SRC
  ${AWS_IDENTITY_PROVIDER_HEADERS}
  ${AWS_IDENTITY_HEADERS}
  ${AWS_IDENTITY_PROVIDER_SOURCE}
)

set(IDENTITY_MGMT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
  )

include_directories(${IDENTITY_MGMT_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_IDENTITY_MANAGEMENT_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${IDENTITY_MGMT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_IDENTITY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/identity-management)
install (FILES ${AWS_IDENTITY_PROVIDER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/identity-management/auth)

do_packaging()

