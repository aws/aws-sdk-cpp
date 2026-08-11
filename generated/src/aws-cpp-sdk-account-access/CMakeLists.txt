add_project(aws-cpp-sdk-account-access "C++ SDK for the AWS account-access service" aws-cpp-sdk-core)

file(GLOB AWS_ACCOUNT-ACCESS_HEADERS
    "include/aws/account-access/*.h"
)

file(GLOB AWS_ACCOUNT-ACCESS_MODEL_HEADERS
    "include/aws/account-access/model/*.h"
)

file(GLOB AWS_ACCOUNT-ACCESS_INTERNAL_HEADERS
    "include/aws/account-access/internal/*.h"
)

file(GLOB AWS_ACCOUNT-ACCESS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ACCOUNT-ACCESS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ACCOUNT-ACCESS_UNIFIED_HEADERS
    ${AWS_ACCOUNT-ACCESS_HEADERS}
    ${AWS_ACCOUNT-ACCESS_INTERNAL_HEADERS}
    ${AWS_ACCOUNT-ACCESS_MODEL_HEADERS}
)

file(GLOB ACCOUNT-ACCESS_UNITY_SRC
    ${AWS_ACCOUNT-ACCESS_SOURCE}
    ${AWS_ACCOUNT-ACCESS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ACCOUNT-ACCESS" ACCOUNT-ACCESS_UNITY_SRC)
endif()

file(GLOB ACCOUNT-ACCESS_SRC
    ${ACCOUNT-ACCESS_UNIFIED_HEADERS}
    ${ACCOUNT-ACCESS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\account-access" FILES ${AWS_ACCOUNT-ACCESS_HEADERS})
        source_group("Header Files\\aws\\account-access\\internal" FILES ${AWS_ACCOUNT-ACCESS_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\account-access\\model" FILES ${AWS_ACCOUNT-ACCESS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ACCOUNT-ACCESS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ACCOUNT-ACCESS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ACCOUNT-ACCESS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ACCOUNT-ACCESS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ACCOUNTACCESS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ACCOUNT-ACCESS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/account-access)
install (FILES ${AWS_ACCOUNT-ACCESS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/account-access/model)

do_packaging()


