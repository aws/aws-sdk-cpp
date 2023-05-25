add_project(aws-cpp-sdk-application-insights "C++ SDK for the AWS application-insights service" aws-cpp-sdk-core)

file(GLOB AWS_APPLICATION-INSIGHTS_HEADERS
    "include/aws/application-insights/*.h"
)

file(GLOB AWS_APPLICATION-INSIGHTS_MODEL_HEADERS
    "include/aws/application-insights/model/*.h"
)

file(GLOB AWS_APPLICATION-INSIGHTS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPLICATION-INSIGHTS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPLICATION-INSIGHTS_UNIFIED_HEADERS
    ${AWS_APPLICATION-INSIGHTS_HEADERS}
    ${AWS_APPLICATION-INSIGHTS_MODEL_HEADERS}
)

file(GLOB APPLICATION-INSIGHTS_UNITY_SRC
    ${AWS_APPLICATION-INSIGHTS_SOURCE}
    ${AWS_APPLICATION-INSIGHTS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPLICATION-INSIGHTS" APPLICATION-INSIGHTS_UNITY_SRC)
endif()

file(GLOB APPLICATION-INSIGHTS_SRC
    ${APPLICATION-INSIGHTS_UNIFIED_HEADERS}
    ${APPLICATION-INSIGHTS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\application-insights" FILES ${AWS_APPLICATION-INSIGHTS_HEADERS})
        source_group("Header Files\\aws\\application-insights\\model" FILES ${AWS_APPLICATION-INSIGHTS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPLICATION-INSIGHTS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPLICATION-INSIGHTS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPLICATION-INSIGHTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APPLICATION-INSIGHTS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPLICATIONINSIGHTS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPLICATION-INSIGHTS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/application-insights)
install (FILES ${AWS_APPLICATION-INSIGHTS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/application-insights/model)

do_packaging()


