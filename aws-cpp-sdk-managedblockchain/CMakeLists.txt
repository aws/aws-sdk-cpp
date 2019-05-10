add_project(aws-cpp-sdk-managedblockchain "C++ SDK for the AWS managedblockchain service" aws-cpp-sdk-core)

file(GLOB AWS_MANAGEDBLOCKCHAIN_HEADERS
    "include/aws/managedblockchain/*.h"
)

file(GLOB AWS_MANAGEDBLOCKCHAIN_MODEL_HEADERS
    "include/aws/managedblockchain/model/*.h"
)

file(GLOB AWS_MANAGEDBLOCKCHAIN_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MANAGEDBLOCKCHAIN_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MANAGEDBLOCKCHAIN_UNIFIED_HEADERS
    ${AWS_MANAGEDBLOCKCHAIN_HEADERS}
    ${AWS_MANAGEDBLOCKCHAIN_MODEL_HEADERS}
)

file(GLOB MANAGEDBLOCKCHAIN_UNITY_SRC
    ${AWS_MANAGEDBLOCKCHAIN_SOURCE}
    ${AWS_MANAGEDBLOCKCHAIN_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MANAGEDBLOCKCHAIN" MANAGEDBLOCKCHAIN_UNITY_SRC)
endif()

file(GLOB MANAGEDBLOCKCHAIN_SRC
    ${MANAGEDBLOCKCHAIN_UNIFIED_HEADERS}
    ${MANAGEDBLOCKCHAIN_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\managedblockchain" FILES ${AWS_MANAGEDBLOCKCHAIN_HEADERS})
        source_group("Header Files\\aws\\managedblockchain\\model" FILES ${AWS_MANAGEDBLOCKCHAIN_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MANAGEDBLOCKCHAIN_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MANAGEDBLOCKCHAIN_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MANAGEDBLOCKCHAIN_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MANAGEDBLOCKCHAIN_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MANAGEDBLOCKCHAIN_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MANAGEDBLOCKCHAIN_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/managedblockchain)
install (FILES ${AWS_MANAGEDBLOCKCHAIN_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/managedblockchain/model)

do_packaging()


