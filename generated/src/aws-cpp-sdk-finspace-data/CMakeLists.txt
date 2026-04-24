add_project(aws-cpp-sdk-finspace-data "C++ SDK for the AWS finspace-data service" aws-cpp-sdk-core)

file(GLOB AWS_FINSPACE-DATA_HEADERS
    "include/aws/finspace-data/*.h"
)

file(GLOB AWS_FINSPACE-DATA_MODEL_HEADERS
    "include/aws/finspace-data/model/*.h"
)

file(GLOB AWS_FINSPACE-DATA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_FINSPACE-DATA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB FINSPACE-DATA_UNIFIED_HEADERS
    ${AWS_FINSPACE-DATA_HEADERS}
    ${AWS_FINSPACE-DATA_MODEL_HEADERS}
)

file(GLOB FINSPACE-DATA_UNITY_SRC
    ${AWS_FINSPACE-DATA_SOURCE}
    ${AWS_FINSPACE-DATA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("FINSPACE-DATA" FINSPACE-DATA_UNITY_SRC)
endif()

file(GLOB FINSPACE-DATA_SRC
    ${FINSPACE-DATA_UNIFIED_HEADERS}
    ${FINSPACE-DATA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\finspace-data" FILES ${AWS_FINSPACE-DATA_HEADERS})
        source_group("Header Files\\aws\\finspace-data\\model" FILES ${AWS_FINSPACE-DATA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_FINSPACE-DATA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_FINSPACE-DATA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(FINSPACE-DATA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${FINSPACE-DATA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_FINSPACEDATA_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_FINSPACE-DATA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/finspace-data)
install (FILES ${AWS_FINSPACE-DATA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/finspace-data/model)

do_packaging()


