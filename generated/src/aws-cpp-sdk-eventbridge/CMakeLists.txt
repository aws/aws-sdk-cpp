add_project(aws-cpp-sdk-eventbridge "C++ SDK for the AWS eventbridge service" aws-cpp-sdk-core)

file(GLOB AWS_EVENTBRIDGE_HEADERS
    "include/aws/eventbridge/*.h"
)

file(GLOB AWS_EVENTBRIDGE_MODEL_HEADERS
    "include/aws/eventbridge/model/*.h"
)

file(GLOB AWS_EVENTBRIDGE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_EVENTBRIDGE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB EVENTBRIDGE_UNIFIED_HEADERS
    ${AWS_EVENTBRIDGE_HEADERS}
    ${AWS_EVENTBRIDGE_MODEL_HEADERS}
)

file(GLOB EVENTBRIDGE_UNITY_SRC
    ${AWS_EVENTBRIDGE_SOURCE}
    ${AWS_EVENTBRIDGE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("EVENTBRIDGE" EVENTBRIDGE_UNITY_SRC)
endif()

file(GLOB EVENTBRIDGE_SRC
    ${EVENTBRIDGE_UNIFIED_HEADERS}
    ${EVENTBRIDGE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\eventbridge" FILES ${AWS_EVENTBRIDGE_HEADERS})
        source_group("Header Files\\aws\\eventbridge\\model" FILES ${AWS_EVENTBRIDGE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_EVENTBRIDGE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_EVENTBRIDGE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(EVENTBRIDGE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${EVENTBRIDGE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_EVENTBRIDGE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_EVENTBRIDGE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/eventbridge)
install (FILES ${AWS_EVENTBRIDGE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/eventbridge/model)

do_packaging()


