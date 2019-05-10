add_project(aws-cpp-sdk-application-autoscaling "C++ SDK for the AWS application-autoscaling service" aws-cpp-sdk-core)

file(GLOB AWS_APPLICATION-AUTOSCALING_HEADERS
    "include/aws/application-autoscaling/*.h"
)

file(GLOB AWS_APPLICATION-AUTOSCALING_MODEL_HEADERS
    "include/aws/application-autoscaling/model/*.h"
)

file(GLOB AWS_APPLICATION-AUTOSCALING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPLICATION-AUTOSCALING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPLICATION-AUTOSCALING_UNIFIED_HEADERS
    ${AWS_APPLICATION-AUTOSCALING_HEADERS}
    ${AWS_APPLICATION-AUTOSCALING_MODEL_HEADERS}
)

file(GLOB APPLICATION-AUTOSCALING_UNITY_SRC
    ${AWS_APPLICATION-AUTOSCALING_SOURCE}
    ${AWS_APPLICATION-AUTOSCALING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPLICATION-AUTOSCALING" APPLICATION-AUTOSCALING_UNITY_SRC)
endif()

file(GLOB APPLICATION-AUTOSCALING_SRC
    ${APPLICATION-AUTOSCALING_UNIFIED_HEADERS}
    ${APPLICATION-AUTOSCALING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\application-autoscaling" FILES ${AWS_APPLICATION-AUTOSCALING_HEADERS})
        source_group("Header Files\\aws\\application-autoscaling\\model" FILES ${AWS_APPLICATION-AUTOSCALING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPLICATION-AUTOSCALING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPLICATION-AUTOSCALING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPLICATION-AUTOSCALING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APPLICATION-AUTOSCALING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPLICATIONAUTOSCALING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPLICATION-AUTOSCALING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/application-autoscaling)
install (FILES ${AWS_APPLICATION-AUTOSCALING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/application-autoscaling/model)

do_packaging()


