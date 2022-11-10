add_project(aws-cpp-sdk-scheduler "C++ SDK for the AWS scheduler service" aws-cpp-sdk-core)

file(GLOB AWS_SCHEDULER_HEADERS
    "include/aws/scheduler/*.h"
)

file(GLOB AWS_SCHEDULER_MODEL_HEADERS
    "include/aws/scheduler/model/*.h"
)

file(GLOB AWS_SCHEDULER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SCHEDULER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SCHEDULER_UNIFIED_HEADERS
    ${AWS_SCHEDULER_HEADERS}
    ${AWS_SCHEDULER_MODEL_HEADERS}
)

file(GLOB SCHEDULER_UNITY_SRC
    ${AWS_SCHEDULER_SOURCE}
    ${AWS_SCHEDULER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SCHEDULER" SCHEDULER_UNITY_SRC)
endif()

file(GLOB SCHEDULER_SRC
    ${SCHEDULER_UNIFIED_HEADERS}
    ${SCHEDULER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\scheduler" FILES ${AWS_SCHEDULER_HEADERS})
        source_group("Header Files\\aws\\scheduler\\model" FILES ${AWS_SCHEDULER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SCHEDULER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SCHEDULER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SCHEDULER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SCHEDULER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SCHEDULER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SCHEDULER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/scheduler)
install (FILES ${AWS_SCHEDULER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/scheduler/model)

do_packaging()


