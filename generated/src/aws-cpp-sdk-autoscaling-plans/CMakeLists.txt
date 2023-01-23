add_project(aws-cpp-sdk-autoscaling-plans "C++ SDK for the AWS autoscaling-plans service" aws-cpp-sdk-core)

file(GLOB AWS_AUTOSCALING-PLANS_HEADERS
    "include/aws/autoscaling-plans/*.h"
)

file(GLOB AWS_AUTOSCALING-PLANS_MODEL_HEADERS
    "include/aws/autoscaling-plans/model/*.h"
)

file(GLOB AWS_AUTOSCALING-PLANS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_AUTOSCALING-PLANS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB AUTOSCALING-PLANS_UNIFIED_HEADERS
    ${AWS_AUTOSCALING-PLANS_HEADERS}
    ${AWS_AUTOSCALING-PLANS_MODEL_HEADERS}
)

file(GLOB AUTOSCALING-PLANS_UNITY_SRC
    ${AWS_AUTOSCALING-PLANS_SOURCE}
    ${AWS_AUTOSCALING-PLANS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("AUTOSCALING-PLANS" AUTOSCALING-PLANS_UNITY_SRC)
endif()

file(GLOB AUTOSCALING-PLANS_SRC
    ${AUTOSCALING-PLANS_UNIFIED_HEADERS}
    ${AUTOSCALING-PLANS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\autoscaling-plans" FILES ${AWS_AUTOSCALING-PLANS_HEADERS})
        source_group("Header Files\\aws\\autoscaling-plans\\model" FILES ${AWS_AUTOSCALING-PLANS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_AUTOSCALING-PLANS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_AUTOSCALING-PLANS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(AUTOSCALING-PLANS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${AUTOSCALING-PLANS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_AUTOSCALINGPLANS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_AUTOSCALING-PLANS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/autoscaling-plans)
install (FILES ${AWS_AUTOSCALING-PLANS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/autoscaling-plans/model)

do_packaging()


