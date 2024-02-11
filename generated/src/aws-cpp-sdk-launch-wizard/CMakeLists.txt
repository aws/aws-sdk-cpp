add_project(aws-cpp-sdk-launch-wizard "C++ SDK for the AWS launch-wizard service" aws-cpp-sdk-core)

file(GLOB AWS_LAUNCH-WIZARD_HEADERS
    "include/aws/launch-wizard/*.h"
)

file(GLOB AWS_LAUNCH-WIZARD_MODEL_HEADERS
    "include/aws/launch-wizard/model/*.h"
)

file(GLOB AWS_LAUNCH-WIZARD_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LAUNCH-WIZARD_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LAUNCH-WIZARD_UNIFIED_HEADERS
    ${AWS_LAUNCH-WIZARD_HEADERS}
    ${AWS_LAUNCH-WIZARD_MODEL_HEADERS}
)

file(GLOB LAUNCH-WIZARD_UNITY_SRC
    ${AWS_LAUNCH-WIZARD_SOURCE}
    ${AWS_LAUNCH-WIZARD_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LAUNCH-WIZARD" LAUNCH-WIZARD_UNITY_SRC)
endif()

file(GLOB LAUNCH-WIZARD_SRC
    ${LAUNCH-WIZARD_UNIFIED_HEADERS}
    ${LAUNCH-WIZARD_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\launch-wizard" FILES ${AWS_LAUNCH-WIZARD_HEADERS})
        source_group("Header Files\\aws\\launch-wizard\\model" FILES ${AWS_LAUNCH-WIZARD_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LAUNCH-WIZARD_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LAUNCH-WIZARD_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LAUNCH-WIZARD_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LAUNCH-WIZARD_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_LAUNCHWIZARD_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_LAUNCH-WIZARD_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/launch-wizard)
install (FILES ${AWS_LAUNCH-WIZARD_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/launch-wizard/model)

do_packaging()


