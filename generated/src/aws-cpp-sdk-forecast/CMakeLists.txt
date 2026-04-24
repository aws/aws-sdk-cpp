add_project(aws-cpp-sdk-forecast "C++ SDK for the AWS forecast service" aws-cpp-sdk-core)

file(GLOB AWS_FORECAST_HEADERS
    "include/aws/forecast/*.h"
)

file(GLOB AWS_FORECAST_MODEL_HEADERS
    "include/aws/forecast/model/*.h"
)

file(GLOB AWS_FORECAST_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_FORECAST_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB FORECAST_UNIFIED_HEADERS
    ${AWS_FORECAST_HEADERS}
    ${AWS_FORECAST_MODEL_HEADERS}
)

file(GLOB FORECAST_UNITY_SRC
    ${AWS_FORECAST_SOURCE}
    ${AWS_FORECAST_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("FORECAST" FORECAST_UNITY_SRC)
endif()

file(GLOB FORECAST_SRC
    ${FORECAST_UNIFIED_HEADERS}
    ${FORECAST_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\forecast" FILES ${AWS_FORECAST_HEADERS})
        source_group("Header Files\\aws\\forecast\\model" FILES ${AWS_FORECAST_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_FORECAST_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_FORECAST_MODEL_SOURCE})
    endif(MSVC)
endif()

set(FORECAST_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${FORECAST_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_FORECASTSERVICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_FORECAST_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/forecast)
install (FILES ${AWS_FORECAST_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/forecast/model)

do_packaging()


