add_project(aws-cpp-sdk-mailmanager "C++ SDK for the AWS mailmanager service" aws-cpp-sdk-core)

file(GLOB AWS_MAILMANAGER_HEADERS
    "include/aws/mailmanager/*.h"
)

file(GLOB AWS_MAILMANAGER_MODEL_HEADERS
    "include/aws/mailmanager/model/*.h"
)

file(GLOB AWS_MAILMANAGER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MAILMANAGER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MAILMANAGER_UNIFIED_HEADERS
    ${AWS_MAILMANAGER_HEADERS}
    ${AWS_MAILMANAGER_MODEL_HEADERS}
)

file(GLOB MAILMANAGER_UNITY_SRC
    ${AWS_MAILMANAGER_SOURCE}
    ${AWS_MAILMANAGER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MAILMANAGER" MAILMANAGER_UNITY_SRC)
endif()

file(GLOB MAILMANAGER_SRC
    ${MAILMANAGER_UNIFIED_HEADERS}
    ${MAILMANAGER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\mailmanager" FILES ${AWS_MAILMANAGER_HEADERS})
        source_group("Header Files\\aws\\mailmanager\\model" FILES ${AWS_MAILMANAGER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MAILMANAGER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MAILMANAGER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MAILMANAGER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MAILMANAGER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MAILMANAGER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MAILMANAGER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mailmanager)
install (FILES ${AWS_MAILMANAGER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mailmanager/model)

do_packaging()


