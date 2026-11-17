add_project(aws-cpp-sdk-account-access-runtime "C++ SDK for Account Access Runtime" aws-cpp-sdk-core)

file(GLOB AWS_ACCOUNT-ACCESS-RUNTIME_HEADERS
    "include/aws/account-access-runtime/*.h"
)

file(GLOB AWS_ACCOUNT-ACCESS-RUNTIME_MODEL_HEADERS
    "include/aws/account-access-runtime/model/*.h"
)

file(GLOB AWS_ACCOUNT-ACCESS-RUNTIME_INTERNAL_HEADERS
    "include/aws/account-access-runtime/internal/*.h"
)

file(GLOB AWS_ACCOUNT-ACCESS-RUNTIME_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ACCOUNT-ACCESS-RUNTIME_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ACCOUNT-ACCESS-RUNTIME_UNIFIED_HEADERS
    ${AWS_ACCOUNT-ACCESS-RUNTIME_HEADERS}
    ${AWS_ACCOUNT-ACCESS-RUNTIME_INTERNAL_HEADERS}
    ${AWS_ACCOUNT-ACCESS-RUNTIME_MODEL_HEADERS}
)

file(GLOB ACCOUNT-ACCESS-RUNTIME_UNITY_SRC
    ${AWS_ACCOUNT-ACCESS-RUNTIME_SOURCE}
    ${AWS_ACCOUNT-ACCESS-RUNTIME_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ACCOUNT-ACCESS-RUNTIME" ACCOUNT-ACCESS-RUNTIME_UNITY_SRC)
endif()

file(GLOB ACCOUNT-ACCESS-RUNTIME_SRC
    ${ACCOUNT-ACCESS-RUNTIME_UNIFIED_HEADERS}
    ${ACCOUNT-ACCESS-RUNTIME_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\account-access-runtime" FILES ${AWS_ACCOUNT-ACCESS-RUNTIME_HEADERS})
        source_group("Header Files\\aws\\account-access-runtime\\internal" FILES ${AWS_ACCOUNT-ACCESS-RUNTIME_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\account-access-runtime\\model" FILES ${AWS_ACCOUNT-ACCESS-RUNTIME_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ACCOUNT-ACCESS-RUNTIME_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ACCOUNT-ACCESS-RUNTIME_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ACCOUNT-ACCESS-RUNTIME_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ACCOUNT-ACCESS-RUNTIME_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ACCOUNTACCESSRUNTIME_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ACCOUNT-ACCESS-RUNTIME_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/account-access-runtime)
install (FILES ${AWS_ACCOUNT-ACCESS-RUNTIME_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/account-access-runtime/model)

do_packaging()


