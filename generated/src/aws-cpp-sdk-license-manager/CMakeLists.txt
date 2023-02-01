add_project(aws-cpp-sdk-license-manager "C++ SDK for the AWS license-manager service" aws-cpp-sdk-core)

file(GLOB AWS_LICENSE-MANAGER_HEADERS
    "include/aws/license-manager/*.h"
)

file(GLOB AWS_LICENSE-MANAGER_MODEL_HEADERS
    "include/aws/license-manager/model/*.h"
)

file(GLOB AWS_LICENSE-MANAGER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LICENSE-MANAGER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LICENSE-MANAGER_UNIFIED_HEADERS
    ${AWS_LICENSE-MANAGER_HEADERS}
    ${AWS_LICENSE-MANAGER_MODEL_HEADERS}
)

file(GLOB LICENSE-MANAGER_UNITY_SRC
    ${AWS_LICENSE-MANAGER_SOURCE}
    ${AWS_LICENSE-MANAGER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LICENSE-MANAGER" LICENSE-MANAGER_UNITY_SRC)
endif()

file(GLOB LICENSE-MANAGER_SRC
    ${LICENSE-MANAGER_UNIFIED_HEADERS}
    ${LICENSE-MANAGER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\license-manager" FILES ${AWS_LICENSE-MANAGER_HEADERS})
        source_group("Header Files\\aws\\license-manager\\model" FILES ${AWS_LICENSE-MANAGER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LICENSE-MANAGER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LICENSE-MANAGER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LICENSE-MANAGER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LICENSE-MANAGER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_LICENSEMANAGER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_LICENSE-MANAGER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/license-manager)
install (FILES ${AWS_LICENSE-MANAGER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/license-manager/model)

do_packaging()


