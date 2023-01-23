add_project(aws-cpp-sdk-elasticmapreduce "C++ SDK for the AWS elasticmapreduce service" aws-cpp-sdk-core)

file(GLOB AWS_ELASTICMAPREDUCE_HEADERS
    "include/aws/elasticmapreduce/*.h"
)

file(GLOB AWS_ELASTICMAPREDUCE_MODEL_HEADERS
    "include/aws/elasticmapreduce/model/*.h"
)

file(GLOB AWS_ELASTICMAPREDUCE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ELASTICMAPREDUCE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ELASTICMAPREDUCE_UNIFIED_HEADERS
    ${AWS_ELASTICMAPREDUCE_HEADERS}
    ${AWS_ELASTICMAPREDUCE_MODEL_HEADERS}
)

file(GLOB ELASTICMAPREDUCE_UNITY_SRC
    ${AWS_ELASTICMAPREDUCE_SOURCE}
    ${AWS_ELASTICMAPREDUCE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELASTICMAPREDUCE" ELASTICMAPREDUCE_UNITY_SRC)
endif()

file(GLOB ELASTICMAPREDUCE_SRC
    ${ELASTICMAPREDUCE_UNIFIED_HEADERS}
    ${ELASTICMAPREDUCE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\elasticmapreduce" FILES ${AWS_ELASTICMAPREDUCE_HEADERS})
        source_group("Header Files\\aws\\elasticmapreduce\\model" FILES ${AWS_ELASTICMAPREDUCE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ELASTICMAPREDUCE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ELASTICMAPREDUCE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ELASTICMAPREDUCE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ELASTICMAPREDUCE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_EMR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ELASTICMAPREDUCE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticmapreduce)
install (FILES ${AWS_ELASTICMAPREDUCE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticmapreduce/model)

do_packaging()


