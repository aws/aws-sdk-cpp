add_project(aws-cpp-sdk-applicationcostprofiler "C++ SDK for the AWS applicationcostprofiler service" aws-cpp-sdk-core)

file(GLOB AWS_APPLICATIONCOSTPROFILER_HEADERS
    "include/aws/applicationcostprofiler/*.h"
)

file(GLOB AWS_APPLICATIONCOSTPROFILER_MODEL_HEADERS
    "include/aws/applicationcostprofiler/model/*.h"
)

file(GLOB AWS_APPLICATIONCOSTPROFILER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPLICATIONCOSTPROFILER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPLICATIONCOSTPROFILER_UNIFIED_HEADERS
    ${AWS_APPLICATIONCOSTPROFILER_HEADERS}
    ${AWS_APPLICATIONCOSTPROFILER_MODEL_HEADERS}
)

file(GLOB APPLICATIONCOSTPROFILER_UNITY_SRC
    ${AWS_APPLICATIONCOSTPROFILER_SOURCE}
    ${AWS_APPLICATIONCOSTPROFILER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPLICATIONCOSTPROFILER" APPLICATIONCOSTPROFILER_UNITY_SRC)
endif()

file(GLOB APPLICATIONCOSTPROFILER_SRC
    ${APPLICATIONCOSTPROFILER_UNIFIED_HEADERS}
    ${APPLICATIONCOSTPROFILER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\applicationcostprofiler" FILES ${AWS_APPLICATIONCOSTPROFILER_HEADERS})
        source_group("Header Files\\aws\\applicationcostprofiler\\model" FILES ${AWS_APPLICATIONCOSTPROFILER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPLICATIONCOSTPROFILER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPLICATIONCOSTPROFILER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPLICATIONCOSTPROFILER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APPLICATIONCOSTPROFILER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPLICATIONCOSTPROFILER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPLICATIONCOSTPROFILER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/applicationcostprofiler)
install (FILES ${AWS_APPLICATIONCOSTPROFILER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/applicationcostprofiler/model)

do_packaging()


