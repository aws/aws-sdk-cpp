add_project(aws-cpp-sdk-cloudhsmv2 "C++ SDK for the AWS cloudhsmv2 service" aws-cpp-sdk-core)

file(GLOB AWS_CLOUDHSMV2_HEADERS
    "include/aws/cloudhsmv2/*.h"
)

file(GLOB AWS_CLOUDHSMV2_MODEL_HEADERS
    "include/aws/cloudhsmv2/model/*.h"
)

file(GLOB AWS_CLOUDHSMV2_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLOUDHSMV2_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLOUDHSMV2_UNIFIED_HEADERS
    ${AWS_CLOUDHSMV2_HEADERS}
    ${AWS_CLOUDHSMV2_MODEL_HEADERS}
)

file(GLOB CLOUDHSMV2_UNITY_SRC
    ${AWS_CLOUDHSMV2_SOURCE}
    ${AWS_CLOUDHSMV2_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDHSMV2" CLOUDHSMV2_UNITY_SRC)
endif()

file(GLOB CLOUDHSMV2_SRC
    ${CLOUDHSMV2_UNIFIED_HEADERS}
    ${CLOUDHSMV2_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cloudhsmv2" FILES ${AWS_CLOUDHSMV2_HEADERS})
        source_group("Header Files\\aws\\cloudhsmv2\\model" FILES ${AWS_CLOUDHSMV2_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLOUDHSMV2_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLOUDHSMV2_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLOUDHSMV2_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CLOUDHSMV2_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUDHSMV2_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CLOUDHSMV2_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudhsmv2)
install (FILES ${AWS_CLOUDHSMV2_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudhsmv2/model)

do_packaging()


