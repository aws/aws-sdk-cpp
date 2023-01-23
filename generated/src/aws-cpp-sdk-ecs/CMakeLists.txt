add_project(aws-cpp-sdk-ecs "C++ SDK for the AWS ecs service" aws-cpp-sdk-core)

file(GLOB AWS_ECS_HEADERS
    "include/aws/ecs/*.h"
)

file(GLOB AWS_ECS_MODEL_HEADERS
    "include/aws/ecs/model/*.h"
)

file(GLOB AWS_ECS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ECS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ECS_UNIFIED_HEADERS
    ${AWS_ECS_HEADERS}
    ${AWS_ECS_MODEL_HEADERS}
)

file(GLOB ECS_UNITY_SRC
    ${AWS_ECS_SOURCE}
    ${AWS_ECS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ECS" ECS_UNITY_SRC)
endif()

file(GLOB ECS_SRC
    ${ECS_UNIFIED_HEADERS}
    ${ECS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ecs" FILES ${AWS_ECS_HEADERS})
        source_group("Header Files\\aws\\ecs\\model" FILES ${AWS_ECS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ECS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ECS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ECS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ECS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ECS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ECS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ecs)
install (FILES ${AWS_ECS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ecs/model)

do_packaging()


