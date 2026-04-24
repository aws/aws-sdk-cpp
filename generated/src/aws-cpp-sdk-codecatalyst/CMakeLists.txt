add_project(aws-cpp-sdk-codecatalyst "C++ SDK for the AWS codecatalyst service" aws-cpp-sdk-core)

file(GLOB AWS_CODECATALYST_HEADERS
    "include/aws/codecatalyst/*.h"
)

file(GLOB AWS_CODECATALYST_MODEL_HEADERS
    "include/aws/codecatalyst/model/*.h"
)

file(GLOB AWS_CODECATALYST_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CODECATALYST_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CODECATALYST_UNIFIED_HEADERS
    ${AWS_CODECATALYST_HEADERS}
    ${AWS_CODECATALYST_MODEL_HEADERS}
)

file(GLOB CODECATALYST_UNITY_SRC
    ${AWS_CODECATALYST_SOURCE}
    ${AWS_CODECATALYST_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODECATALYST" CODECATALYST_UNITY_SRC)
endif()

file(GLOB CODECATALYST_SRC
    ${CODECATALYST_UNIFIED_HEADERS}
    ${CODECATALYST_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\codecatalyst" FILES ${AWS_CODECATALYST_HEADERS})
        source_group("Header Files\\aws\\codecatalyst\\model" FILES ${AWS_CODECATALYST_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CODECATALYST_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CODECATALYST_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CODECATALYST_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CODECATALYST_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CODECATALYST_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CODECATALYST_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codecatalyst)
install (FILES ${AWS_CODECATALYST_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codecatalyst/model)

do_packaging()


