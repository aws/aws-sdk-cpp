add_project(aws-cpp-sdk-application-signals "C++ SDK for the AWS application-signals service" aws-cpp-sdk-core)

file(GLOB AWS_APPLICATION-SIGNALS_HEADERS
    "include/aws/application-signals/*.h"
)

file(GLOB AWS_APPLICATION-SIGNALS_MODEL_HEADERS
    "include/aws/application-signals/model/*.h"
)

file(GLOB AWS_APPLICATION-SIGNALS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPLICATION-SIGNALS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPLICATION-SIGNALS_UNIFIED_HEADERS
    ${AWS_APPLICATION-SIGNALS_HEADERS}
    ${AWS_APPLICATION-SIGNALS_MODEL_HEADERS}
)

file(GLOB APPLICATION-SIGNALS_UNITY_SRC
    ${AWS_APPLICATION-SIGNALS_SOURCE}
    ${AWS_APPLICATION-SIGNALS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPLICATION-SIGNALS" APPLICATION-SIGNALS_UNITY_SRC)
endif()

file(GLOB APPLICATION-SIGNALS_SRC
    ${APPLICATION-SIGNALS_UNIFIED_HEADERS}
    ${APPLICATION-SIGNALS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\application-signals" FILES ${AWS_APPLICATION-SIGNALS_HEADERS})
        source_group("Header Files\\aws\\application-signals\\model" FILES ${AWS_APPLICATION-SIGNALS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPLICATION-SIGNALS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPLICATION-SIGNALS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPLICATION-SIGNALS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APPLICATION-SIGNALS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPLICATIONSIGNALS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPLICATION-SIGNALS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/application-signals)
install (FILES ${AWS_APPLICATION-SIGNALS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/application-signals/model)

do_packaging()


