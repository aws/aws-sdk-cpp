add_project(aws-cpp-sdk-iotfleetwise "C++ SDK for the AWS iotfleetwise service" aws-cpp-sdk-core)

file(GLOB AWS_IOTFLEETWISE_HEADERS
    "include/aws/iotfleetwise/*.h"
)

file(GLOB AWS_IOTFLEETWISE_MODEL_HEADERS
    "include/aws/iotfleetwise/model/*.h"
)

file(GLOB AWS_IOTFLEETWISE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOTFLEETWISE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOTFLEETWISE_UNIFIED_HEADERS
    ${AWS_IOTFLEETWISE_HEADERS}
    ${AWS_IOTFLEETWISE_MODEL_HEADERS}
)

file(GLOB IOTFLEETWISE_UNITY_SRC
    ${AWS_IOTFLEETWISE_SOURCE}
    ${AWS_IOTFLEETWISE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOTFLEETWISE" IOTFLEETWISE_UNITY_SRC)
endif()

file(GLOB IOTFLEETWISE_SRC
    ${IOTFLEETWISE_UNIFIED_HEADERS}
    ${IOTFLEETWISE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iotfleetwise" FILES ${AWS_IOTFLEETWISE_HEADERS})
        source_group("Header Files\\aws\\iotfleetwise\\model" FILES ${AWS_IOTFLEETWISE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOTFLEETWISE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOTFLEETWISE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOTFLEETWISE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOTFLEETWISE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOTFLEETWISE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOTFLEETWISE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotfleetwise)
install (FILES ${AWS_IOTFLEETWISE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotfleetwise/model)

do_packaging()


