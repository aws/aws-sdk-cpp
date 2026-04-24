add_project(aws-cpp-sdk-appintegrations "C++ SDK for the AWS appintegrations service" aws-cpp-sdk-core)

file(GLOB AWS_APPINTEGRATIONS_HEADERS
    "include/aws/appintegrations/*.h"
)

file(GLOB AWS_APPINTEGRATIONS_MODEL_HEADERS
    "include/aws/appintegrations/model/*.h"
)

file(GLOB AWS_APPINTEGRATIONS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPINTEGRATIONS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPINTEGRATIONS_UNIFIED_HEADERS
    ${AWS_APPINTEGRATIONS_HEADERS}
    ${AWS_APPINTEGRATIONS_MODEL_HEADERS}
)

file(GLOB APPINTEGRATIONS_UNITY_SRC
    ${AWS_APPINTEGRATIONS_SOURCE}
    ${AWS_APPINTEGRATIONS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPINTEGRATIONS" APPINTEGRATIONS_UNITY_SRC)
endif()

file(GLOB APPINTEGRATIONS_SRC
    ${APPINTEGRATIONS_UNIFIED_HEADERS}
    ${APPINTEGRATIONS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\appintegrations" FILES ${AWS_APPINTEGRATIONS_HEADERS})
        source_group("Header Files\\aws\\appintegrations\\model" FILES ${AWS_APPINTEGRATIONS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPINTEGRATIONS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPINTEGRATIONS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPINTEGRATIONS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APPINTEGRATIONS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPINTEGRATIONSSERVICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPINTEGRATIONS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appintegrations)
install (FILES ${AWS_APPINTEGRATIONS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appintegrations/model)

do_packaging()


