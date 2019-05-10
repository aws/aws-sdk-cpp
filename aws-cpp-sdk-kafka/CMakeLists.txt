add_project(aws-cpp-sdk-kafka "C++ SDK for the AWS kafka service" aws-cpp-sdk-core)

file(GLOB AWS_KAFKA_HEADERS
    "include/aws/kafka/*.h"
)

file(GLOB AWS_KAFKA_MODEL_HEADERS
    "include/aws/kafka/model/*.h"
)

file(GLOB AWS_KAFKA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_KAFKA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB KAFKA_UNIFIED_HEADERS
    ${AWS_KAFKA_HEADERS}
    ${AWS_KAFKA_MODEL_HEADERS}
)

file(GLOB KAFKA_UNITY_SRC
    ${AWS_KAFKA_SOURCE}
    ${AWS_KAFKA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("KAFKA" KAFKA_UNITY_SRC)
endif()

file(GLOB KAFKA_SRC
    ${KAFKA_UNIFIED_HEADERS}
    ${KAFKA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\kafka" FILES ${AWS_KAFKA_HEADERS})
        source_group("Header Files\\aws\\kafka\\model" FILES ${AWS_KAFKA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_KAFKA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_KAFKA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(KAFKA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${KAFKA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_KAFKA_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_KAFKA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kafka)
install (FILES ${AWS_KAFKA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/kafka/model)

do_packaging()


