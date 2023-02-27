add_project(aws-cpp-sdk-internetmonitor "C++ SDK for the AWS internetmonitor service" aws-cpp-sdk-core)

file(GLOB AWS_INTERNETMONITOR_HEADERS
    "include/aws/internetmonitor/*.h"
)

file(GLOB AWS_INTERNETMONITOR_MODEL_HEADERS
    "include/aws/internetmonitor/model/*.h"
)

file(GLOB AWS_INTERNETMONITOR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_INTERNETMONITOR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB INTERNETMONITOR_UNIFIED_HEADERS
    ${AWS_INTERNETMONITOR_HEADERS}
    ${AWS_INTERNETMONITOR_MODEL_HEADERS}
)

file(GLOB INTERNETMONITOR_UNITY_SRC
    ${AWS_INTERNETMONITOR_SOURCE}
    ${AWS_INTERNETMONITOR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("INTERNETMONITOR" INTERNETMONITOR_UNITY_SRC)
endif()

file(GLOB INTERNETMONITOR_SRC
    ${INTERNETMONITOR_UNIFIED_HEADERS}
    ${INTERNETMONITOR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\internetmonitor" FILES ${AWS_INTERNETMONITOR_HEADERS})
        source_group("Header Files\\aws\\internetmonitor\\model" FILES ${AWS_INTERNETMONITOR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_INTERNETMONITOR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_INTERNETMONITOR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(INTERNETMONITOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${INTERNETMONITOR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_INTERNETMONITOR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_INTERNETMONITOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/internetmonitor)
install (FILES ${AWS_INTERNETMONITOR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/internetmonitor/model)

do_packaging()


