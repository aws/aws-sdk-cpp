add_project(aws-cpp-sdk-lambda-web "C++ SDK for the AWS lambda-web service" aws-cpp-sdk-core)

file(GLOB AWS_LAMBDA-WEB_HEADERS
    "include/aws/lambda-web/*.h"
)

file(GLOB AWS_LAMBDA-WEB_MODEL_HEADERS
    "include/aws/lambda-web/model/*.h"
)

file(GLOB AWS_LAMBDA-WEB_INTERNAL_HEADERS
    "include/aws/lambda-web/internal/*.h"
)

file(GLOB AWS_LAMBDA-WEB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LAMBDA-WEB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LAMBDA-WEB_UNIFIED_HEADERS
    ${AWS_LAMBDA-WEB_HEADERS}
    ${AWS_LAMBDA-WEB_INTERNAL_HEADERS}
    ${AWS_LAMBDA-WEB_MODEL_HEADERS}
)

file(GLOB LAMBDA-WEB_UNITY_SRC
    ${AWS_LAMBDA-WEB_SOURCE}
    ${AWS_LAMBDA-WEB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LAMBDA-WEB" LAMBDA-WEB_UNITY_SRC)
endif()

file(GLOB LAMBDA-WEB_SRC
    ${LAMBDA-WEB_UNIFIED_HEADERS}
    ${LAMBDA-WEB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\lambda-web" FILES ${AWS_LAMBDA-WEB_HEADERS})
        source_group("Header Files\\aws\\lambda-web\\internal" FILES ${AWS_LAMBDA-WEB_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\lambda-web\\model" FILES ${AWS_LAMBDA-WEB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LAMBDA-WEB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LAMBDA-WEB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LAMBDA-WEB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LAMBDA-WEB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_LAMBDAWEB_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_LAMBDA-WEB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lambda-web)
install (FILES ${AWS_LAMBDA-WEB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lambda-web/model)

do_packaging()


