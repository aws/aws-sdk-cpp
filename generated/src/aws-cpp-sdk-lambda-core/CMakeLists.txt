add_project(aws-cpp-sdk-lambda-core "C++ SDK for the AWS lambda-core service" aws-cpp-sdk-core)

file(GLOB AWS_LAMBDA-CORE_HEADERS
    "include/aws/lambda-core/*.h"
)

file(GLOB AWS_LAMBDA-CORE_MODEL_HEADERS
    "include/aws/lambda-core/model/*.h"
)

file(GLOB AWS_LAMBDA-CORE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LAMBDA-CORE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LAMBDA-CORE_UNIFIED_HEADERS
    ${AWS_LAMBDA-CORE_HEADERS}
    ${AWS_LAMBDA-CORE_MODEL_HEADERS}
)

file(GLOB LAMBDA-CORE_UNITY_SRC
    ${AWS_LAMBDA-CORE_SOURCE}
    ${AWS_LAMBDA-CORE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LAMBDA-CORE" LAMBDA-CORE_UNITY_SRC)
endif()

file(GLOB LAMBDA-CORE_SRC
    ${LAMBDA-CORE_UNIFIED_HEADERS}
    ${LAMBDA-CORE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\lambda-core" FILES ${AWS_LAMBDA-CORE_HEADERS})
        source_group("Header Files\\aws\\lambda-core\\model" FILES ${AWS_LAMBDA-CORE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LAMBDA-CORE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LAMBDA-CORE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LAMBDA-CORE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LAMBDA-CORE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_LAMBDACORE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_LAMBDA-CORE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lambda-core)
install (FILES ${AWS_LAMBDA-CORE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lambda-core/model)

do_packaging()


