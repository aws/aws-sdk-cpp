add_project(aws-cpp-sdk-kinesis "C++ SDK for the AWS kinesis service" aws-cpp-sdk-core)

file(GLOB AWS_KINESIS_HEADERS
    "include/aws/kinesis/*.h"
)

file(GLOB AWS_KINESIS_MODEL_HEADERS
    "include/aws/kinesis/model/*.h"
)

file(GLOB AWS_KINESIS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_KINESIS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB KINESIS_UNIFIED_HEADERS
    ${AWS_KINESIS_HEADERS}
    ${AWS_KINESIS_MODEL_HEADERS}
)

file(GLOB KINESIS_UNITY_SRC
    ${AWS_KINESIS_SOURCE}
    ${AWS_KINESIS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("KINESIS" KINESIS_UNITY_SRC)
endif()

file(GLOB KINESIS_SRC
    ${KINESIS_UNIFIED_HEADERS}
    ${KINESIS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\kinesis" FILES ${AWS_KINESIS_HEADERS})
        source_group("Header Files\\aws\\kinesis\\model" FILES ${AWS_KINESIS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_KINESIS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_KINESIS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(KINESIS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${KINESIS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_KINESIS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_KINESIS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kinesis)
install (FILES ${AWS_KINESIS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kinesis/model)

do_packaging()


