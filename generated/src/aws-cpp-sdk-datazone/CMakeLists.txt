add_project(aws-cpp-sdk-datazone "C++ SDK for the AWS datazone service" aws-cpp-sdk-core)

file(GLOB AWS_DATAZONE_HEADERS
    "include/aws/datazone/*.h"
)

file(GLOB AWS_DATAZONE_MODEL_HEADERS
    "include/aws/datazone/model/*.h"
)

file(GLOB AWS_DATAZONE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DATAZONE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DATAZONE_UNIFIED_HEADERS
    ${AWS_DATAZONE_HEADERS}
    ${AWS_DATAZONE_MODEL_HEADERS}
)

file(GLOB DATAZONE_UNITY_SRC
    ${AWS_DATAZONE_SOURCE}
    ${AWS_DATAZONE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DATAZONE" DATAZONE_UNITY_SRC)
endif()

file(GLOB DATAZONE_SRC
    ${DATAZONE_UNIFIED_HEADERS}
    ${DATAZONE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\datazone" FILES ${AWS_DATAZONE_HEADERS})
        source_group("Header Files\\aws\\datazone\\model" FILES ${AWS_DATAZONE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DATAZONE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DATAZONE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DATAZONE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DATAZONE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DATAZONE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DATAZONE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/datazone)
install (FILES ${AWS_DATAZONE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/datazone/model)

do_packaging()


