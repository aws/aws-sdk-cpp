add_project(aws-cpp-sdk-macie "C++ SDK for the AWS macie service" aws-cpp-sdk-core)

file(GLOB AWS_MACIE_HEADERS
    "include/aws/macie/*.h"
)

file(GLOB AWS_MACIE_MODEL_HEADERS
    "include/aws/macie/model/*.h"
)

file(GLOB AWS_MACIE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MACIE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MACIE_UNIFIED_HEADERS
    ${AWS_MACIE_HEADERS}
    ${AWS_MACIE_MODEL_HEADERS}
)

file(GLOB MACIE_UNITY_SRC
    ${AWS_MACIE_SOURCE}
    ${AWS_MACIE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MACIE" MACIE_UNITY_SRC)
endif()

file(GLOB MACIE_SRC
    ${MACIE_UNIFIED_HEADERS}
    ${MACIE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\macie" FILES ${AWS_MACIE_HEADERS})
        source_group("Header Files\\aws\\macie\\model" FILES ${AWS_MACIE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MACIE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MACIE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MACIE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MACIE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MACIE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MACIE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/macie)
install (FILES ${AWS_MACIE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/macie/model)

do_packaging()


