add_project(aws-cpp-sdk-apptest "C++ SDK for the AWS apptest service" aws-cpp-sdk-core)

file(GLOB AWS_APPTEST_HEADERS
    "include/aws/apptest/*.h"
)

file(GLOB AWS_APPTEST_MODEL_HEADERS
    "include/aws/apptest/model/*.h"
)

file(GLOB AWS_APPTEST_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPTEST_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPTEST_UNIFIED_HEADERS
    ${AWS_APPTEST_HEADERS}
    ${AWS_APPTEST_MODEL_HEADERS}
)

file(GLOB APPTEST_UNITY_SRC
    ${AWS_APPTEST_SOURCE}
    ${AWS_APPTEST_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPTEST" APPTEST_UNITY_SRC)
endif()

file(GLOB APPTEST_SRC
    ${APPTEST_UNIFIED_HEADERS}
    ${APPTEST_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\apptest" FILES ${AWS_APPTEST_HEADERS})
        source_group("Header Files\\aws\\apptest\\model" FILES ${AWS_APPTEST_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPTEST_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPTEST_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPTEST_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APPTEST_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPTEST_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPTEST_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/apptest)
install (FILES ${AWS_APPTEST_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/apptest/model)

do_packaging()


