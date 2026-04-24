add_project(aws-cpp-sdk-events "C++ SDK for the AWS events service" aws-cpp-sdk-core)

file(GLOB AWS_EVENTS_HEADERS
    "include/aws/events/*.h"
)

file(GLOB AWS_EVENTS_MODEL_HEADERS
    "include/aws/events/model/*.h"
)

file(GLOB AWS_EVENTS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_EVENTS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB EVENTS_UNIFIED_HEADERS
    ${AWS_EVENTS_HEADERS}
    ${AWS_EVENTS_MODEL_HEADERS}
)

file(GLOB EVENTS_UNITY_SRC
    ${AWS_EVENTS_SOURCE}
    ${AWS_EVENTS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("EVENTS" EVENTS_UNITY_SRC)
endif()

file(GLOB EVENTS_SRC
    ${EVENTS_UNIFIED_HEADERS}
    ${EVENTS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\events" FILES ${AWS_EVENTS_HEADERS})
        source_group("Header Files\\aws\\events\\model" FILES ${AWS_EVENTS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_EVENTS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_EVENTS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(EVENTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${EVENTS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUDWATCHEVENTS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_EVENTS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/events)
install (FILES ${AWS_EVENTS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/events/model)

do_packaging()


