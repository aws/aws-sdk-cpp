add_project(aws-cpp-sdk-dynamodbstreams "C++ SDK for the AWS dynamodbstreams service" aws-cpp-sdk-core)

file(GLOB AWS_DYNAMODBSTREAMS_HEADERS
    "include/aws/dynamodbstreams/*.h"
)

file(GLOB AWS_DYNAMODBSTREAMS_MODEL_HEADERS
    "include/aws/dynamodbstreams/model/*.h"
)

file(GLOB AWS_DYNAMODBSTREAMS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DYNAMODBSTREAMS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DYNAMODBSTREAMS_UNIFIED_HEADERS
    ${AWS_DYNAMODBSTREAMS_HEADERS}
    ${AWS_DYNAMODBSTREAMS_MODEL_HEADERS}
)

file(GLOB DYNAMODBSTREAMS_UNITY_SRC
    ${AWS_DYNAMODBSTREAMS_SOURCE}
    ${AWS_DYNAMODBSTREAMS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DYNAMODBSTREAMS" DYNAMODBSTREAMS_UNITY_SRC)
endif()

file(GLOB DYNAMODBSTREAMS_SRC
    ${DYNAMODBSTREAMS_UNIFIED_HEADERS}
    ${DYNAMODBSTREAMS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\dynamodbstreams" FILES ${AWS_DYNAMODBSTREAMS_HEADERS})
        source_group("Header Files\\aws\\dynamodbstreams\\model" FILES ${AWS_DYNAMODBSTREAMS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DYNAMODBSTREAMS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DYNAMODBSTREAMS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DYNAMODBSTREAMS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DYNAMODBSTREAMS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DYNAMODBSTREAMS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DYNAMODBSTREAMS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/dynamodbstreams)
install (FILES ${AWS_DYNAMODBSTREAMS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/dynamodbstreams/model)

do_packaging()


