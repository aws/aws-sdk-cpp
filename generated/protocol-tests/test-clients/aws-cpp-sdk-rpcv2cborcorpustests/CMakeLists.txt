add_project(aws-cpp-sdk-rpcv2cborcorpustests "C++ SDK for the AWS rpcv2cborcorpustests service" aws-cpp-sdk-core)

file(GLOB AWS_RPCV2CBORCORPUSTESTS_HEADERS
    "include/aws/rpcv2cborcorpustests/*.h"
)

file(GLOB AWS_RPCV2CBORCORPUSTESTS_MODEL_HEADERS
    "include/aws/rpcv2cborcorpustests/model/*.h"
)

file(GLOB AWS_RPCV2CBORCORPUSTESTS_INTERNAL_HEADERS
    "include/aws/rpcv2cborcorpustests/internal/*.h"
)

file(GLOB AWS_RPCV2CBORCORPUSTESTS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_RPCV2CBORCORPUSTESTS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB RPCV2CBORCORPUSTESTS_UNIFIED_HEADERS
    ${AWS_RPCV2CBORCORPUSTESTS_HEADERS}
    ${AWS_RPCV2CBORCORPUSTESTS_INTERNAL_HEADERS}
    ${AWS_RPCV2CBORCORPUSTESTS_MODEL_HEADERS}
)

file(GLOB RPCV2CBORCORPUSTESTS_UNITY_SRC
    ${AWS_RPCV2CBORCORPUSTESTS_SOURCE}
    ${AWS_RPCV2CBORCORPUSTESTS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("RPCV2CBORCORPUSTESTS" RPCV2CBORCORPUSTESTS_UNITY_SRC)
endif()

file(GLOB RPCV2CBORCORPUSTESTS_SRC
    ${RPCV2CBORCORPUSTESTS_UNIFIED_HEADERS}
    ${RPCV2CBORCORPUSTESTS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\rpcv2cborcorpustests" FILES ${AWS_RPCV2CBORCORPUSTESTS_HEADERS})
        source_group("Header Files\\aws\\rpcv2cborcorpustests\\internal" FILES ${AWS_RPCV2CBORCORPUSTESTS_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\rpcv2cborcorpustests\\model" FILES ${AWS_RPCV2CBORCORPUSTESTS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_RPCV2CBORCORPUSTESTS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_RPCV2CBORCORPUSTESTS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(RPCV2CBORCORPUSTESTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${RPCV2CBORCORPUSTESTS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_RPCV2CBORCORPUSTESTS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_RPCV2CBORCORPUSTESTS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/rpcv2cborcorpustests)
install (FILES ${AWS_RPCV2CBORCORPUSTESTS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/rpcv2cborcorpustests/model)

do_packaging()


