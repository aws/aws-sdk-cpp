add_project(aws-cpp-sdk-emr-containers "C++ SDK for the AWS emr-containers service" aws-cpp-sdk-core)

file(GLOB AWS_EMR-CONTAINERS_HEADERS
    "include/aws/emr-containers/*.h"
)

file(GLOB AWS_EMR-CONTAINERS_MODEL_HEADERS
    "include/aws/emr-containers/model/*.h"
)

file(GLOB AWS_EMR-CONTAINERS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_EMR-CONTAINERS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB EMR-CONTAINERS_UNIFIED_HEADERS
    ${AWS_EMR-CONTAINERS_HEADERS}
    ${AWS_EMR-CONTAINERS_MODEL_HEADERS}
)

file(GLOB EMR-CONTAINERS_UNITY_SRC
    ${AWS_EMR-CONTAINERS_SOURCE}
    ${AWS_EMR-CONTAINERS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("EMR-CONTAINERS" EMR-CONTAINERS_UNITY_SRC)
endif()

file(GLOB EMR-CONTAINERS_SRC
    ${EMR-CONTAINERS_UNIFIED_HEADERS}
    ${EMR-CONTAINERS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\emr-containers" FILES ${AWS_EMR-CONTAINERS_HEADERS})
        source_group("Header Files\\aws\\emr-containers\\model" FILES ${AWS_EMR-CONTAINERS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_EMR-CONTAINERS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_EMR-CONTAINERS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(EMR-CONTAINERS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${EMR-CONTAINERS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_EMRCONTAINERS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_EMR-CONTAINERS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/emr-containers)
install (FILES ${AWS_EMR-CONTAINERS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/emr-containers/model)

do_packaging()


