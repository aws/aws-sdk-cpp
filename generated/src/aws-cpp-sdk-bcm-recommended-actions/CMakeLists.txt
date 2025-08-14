add_project(aws-cpp-sdk-bcm-recommended-actions "C++ SDK for the AWS bcm-recommended-actions service" aws-cpp-sdk-core)

file(GLOB AWS_BCM-RECOMMENDED-ACTIONS_HEADERS
    "include/aws/bcm-recommended-actions/*.h"
)

file(GLOB AWS_BCM-RECOMMENDED-ACTIONS_MODEL_HEADERS
    "include/aws/bcm-recommended-actions/model/*.h"
)

file(GLOB AWS_BCM-RECOMMENDED-ACTIONS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BCM-RECOMMENDED-ACTIONS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BCM-RECOMMENDED-ACTIONS_UNIFIED_HEADERS
    ${AWS_BCM-RECOMMENDED-ACTIONS_HEADERS}
    ${AWS_BCM-RECOMMENDED-ACTIONS_MODEL_HEADERS}
)

file(GLOB BCM-RECOMMENDED-ACTIONS_UNITY_SRC
    ${AWS_BCM-RECOMMENDED-ACTIONS_SOURCE}
    ${AWS_BCM-RECOMMENDED-ACTIONS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BCM-RECOMMENDED-ACTIONS" BCM-RECOMMENDED-ACTIONS_UNITY_SRC)
endif()

file(GLOB BCM-RECOMMENDED-ACTIONS_SRC
    ${BCM-RECOMMENDED-ACTIONS_UNIFIED_HEADERS}
    ${BCM-RECOMMENDED-ACTIONS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\bcm-recommended-actions" FILES ${AWS_BCM-RECOMMENDED-ACTIONS_HEADERS})
        source_group("Header Files\\aws\\bcm-recommended-actions\\model" FILES ${AWS_BCM-RECOMMENDED-ACTIONS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BCM-RECOMMENDED-ACTIONS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BCM-RECOMMENDED-ACTIONS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BCM-RECOMMENDED-ACTIONS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BCM-RECOMMENDED-ACTIONS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BCMRECOMMENDEDACTIONS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BCM-RECOMMENDED-ACTIONS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bcm-recommended-actions)
install (FILES ${AWS_BCM-RECOMMENDED-ACTIONS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bcm-recommended-actions/model)

do_packaging()


