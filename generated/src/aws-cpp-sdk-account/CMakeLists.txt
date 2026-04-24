add_project(aws-cpp-sdk-account "C++ SDK for the AWS account service" aws-cpp-sdk-core)

file(GLOB AWS_ACCOUNT_HEADERS
    "include/aws/account/*.h"
)

file(GLOB AWS_ACCOUNT_MODEL_HEADERS
    "include/aws/account/model/*.h"
)

file(GLOB AWS_ACCOUNT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ACCOUNT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ACCOUNT_UNIFIED_HEADERS
    ${AWS_ACCOUNT_HEADERS}
    ${AWS_ACCOUNT_MODEL_HEADERS}
)

file(GLOB ACCOUNT_UNITY_SRC
    ${AWS_ACCOUNT_SOURCE}
    ${AWS_ACCOUNT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ACCOUNT" ACCOUNT_UNITY_SRC)
endif()

file(GLOB ACCOUNT_SRC
    ${ACCOUNT_UNIFIED_HEADERS}
    ${ACCOUNT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\account" FILES ${AWS_ACCOUNT_HEADERS})
        source_group("Header Files\\aws\\account\\model" FILES ${AWS_ACCOUNT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ACCOUNT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ACCOUNT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ACCOUNT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ACCOUNT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ACCOUNT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ACCOUNT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/account)
install (FILES ${AWS_ACCOUNT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/account/model)

do_packaging()


