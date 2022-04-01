add_project(aws-cpp-sdk-timestream-write "C++ SDK for the AWS timestream-write service" aws-cpp-sdk-core)

file(GLOB AWS_TIMESTREAM-WRITE_HEADERS
    "include/aws/timestream-write/*.h"
)

file(GLOB AWS_TIMESTREAM-WRITE_MODEL_HEADERS
    "include/aws/timestream-write/model/*.h"
)

file(GLOB AWS_TIMESTREAM-WRITE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_TIMESTREAM-WRITE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB TIMESTREAM-WRITE_UNIFIED_HEADERS
    ${AWS_TIMESTREAM-WRITE_HEADERS}
    ${AWS_TIMESTREAM-WRITE_MODEL_HEADERS}
)

file(GLOB TIMESTREAM-WRITE_UNITY_SRC
    ${AWS_TIMESTREAM-WRITE_SOURCE}
    ${AWS_TIMESTREAM-WRITE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("TIMESTREAM-WRITE" TIMESTREAM-WRITE_UNITY_SRC)
endif()

file(GLOB TIMESTREAM-WRITE_SRC
    ${TIMESTREAM-WRITE_UNIFIED_HEADERS}
    ${TIMESTREAM-WRITE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\timestream-write" FILES ${AWS_TIMESTREAM-WRITE_HEADERS})
        source_group("Header Files\\aws\\timestream-write\\model" FILES ${AWS_TIMESTREAM-WRITE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_TIMESTREAM-WRITE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_TIMESTREAM-WRITE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(TIMESTREAM-WRITE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${TIMESTREAM-WRITE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_TIMESTREAMWRITE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_TIMESTREAM-WRITE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/timestream-write)
install (FILES ${AWS_TIMESTREAM-WRITE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/timestream-write/model)

do_packaging()


