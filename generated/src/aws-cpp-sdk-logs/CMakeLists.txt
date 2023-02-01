add_project(aws-cpp-sdk-logs "C++ SDK for the AWS logs service" aws-cpp-sdk-core)

file(GLOB AWS_LOGS_HEADERS
    "include/aws/logs/*.h"
)

file(GLOB AWS_LOGS_MODEL_HEADERS
    "include/aws/logs/model/*.h"
)

file(GLOB AWS_LOGS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LOGS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LOGS_UNIFIED_HEADERS
    ${AWS_LOGS_HEADERS}
    ${AWS_LOGS_MODEL_HEADERS}
)

file(GLOB LOGS_UNITY_SRC
    ${AWS_LOGS_SOURCE}
    ${AWS_LOGS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LOGS" LOGS_UNITY_SRC)
endif()

file(GLOB LOGS_SRC
    ${LOGS_UNIFIED_HEADERS}
    ${LOGS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\logs" FILES ${AWS_LOGS_HEADERS})
        source_group("Header Files\\aws\\logs\\model" FILES ${AWS_LOGS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LOGS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LOGS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LOGS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LOGS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUDWATCHLOGS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_LOGS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/logs)
install (FILES ${AWS_LOGS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/logs/model)

do_packaging()


