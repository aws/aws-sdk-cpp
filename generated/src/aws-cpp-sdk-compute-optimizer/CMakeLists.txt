add_project(aws-cpp-sdk-compute-optimizer "C++ SDK for the AWS compute-optimizer service" aws-cpp-sdk-core)

file(GLOB AWS_COMPUTE-OPTIMIZER_HEADERS
    "include/aws/compute-optimizer/*.h"
)

file(GLOB AWS_COMPUTE-OPTIMIZER_MODEL_HEADERS
    "include/aws/compute-optimizer/model/*.h"
)

file(GLOB AWS_COMPUTE-OPTIMIZER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_COMPUTE-OPTIMIZER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB COMPUTE-OPTIMIZER_UNIFIED_HEADERS
    ${AWS_COMPUTE-OPTIMIZER_HEADERS}
    ${AWS_COMPUTE-OPTIMIZER_MODEL_HEADERS}
)

file(GLOB COMPUTE-OPTIMIZER_UNITY_SRC
    ${AWS_COMPUTE-OPTIMIZER_SOURCE}
    ${AWS_COMPUTE-OPTIMIZER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("COMPUTE-OPTIMIZER" COMPUTE-OPTIMIZER_UNITY_SRC)
endif()

file(GLOB COMPUTE-OPTIMIZER_SRC
    ${COMPUTE-OPTIMIZER_UNIFIED_HEADERS}
    ${COMPUTE-OPTIMIZER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\compute-optimizer" FILES ${AWS_COMPUTE-OPTIMIZER_HEADERS})
        source_group("Header Files\\aws\\compute-optimizer\\model" FILES ${AWS_COMPUTE-OPTIMIZER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_COMPUTE-OPTIMIZER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_COMPUTE-OPTIMIZER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(COMPUTE-OPTIMIZER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${COMPUTE-OPTIMIZER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_COMPUTEOPTIMIZER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_COMPUTE-OPTIMIZER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/compute-optimizer)
install (FILES ${AWS_COMPUTE-OPTIMIZER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/compute-optimizer/model)

do_packaging()


