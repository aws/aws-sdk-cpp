add_project(aws-cpp-sdk-apprunner "C++ SDK for the AWS apprunner service" aws-cpp-sdk-core)

file(GLOB AWS_APPRUNNER_HEADERS
    "include/aws/apprunner/*.h"
)

file(GLOB AWS_APPRUNNER_MODEL_HEADERS
    "include/aws/apprunner/model/*.h"
)

file(GLOB AWS_APPRUNNER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPRUNNER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPRUNNER_UNIFIED_HEADERS
    ${AWS_APPRUNNER_HEADERS}
    ${AWS_APPRUNNER_MODEL_HEADERS}
)

file(GLOB APPRUNNER_UNITY_SRC
    ${AWS_APPRUNNER_SOURCE}
    ${AWS_APPRUNNER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPRUNNER" APPRUNNER_UNITY_SRC)
endif()

file(GLOB APPRUNNER_SRC
    ${APPRUNNER_UNIFIED_HEADERS}
    ${APPRUNNER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\apprunner" FILES ${AWS_APPRUNNER_HEADERS})
        source_group("Header Files\\aws\\apprunner\\model" FILES ${AWS_APPRUNNER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPRUNNER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPRUNNER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPRUNNER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APPRUNNER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPRUNNER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPRUNNER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/apprunner)
install (FILES ${AWS_APPRUNNER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/apprunner/model)

do_packaging()


