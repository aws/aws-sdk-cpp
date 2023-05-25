add_project(aws-cpp-sdk-iotsitewise "C++ SDK for the AWS iotsitewise service" aws-cpp-sdk-core)

file(GLOB AWS_IOTSITEWISE_HEADERS
    "include/aws/iotsitewise/*.h"
)

file(GLOB AWS_IOTSITEWISE_MODEL_HEADERS
    "include/aws/iotsitewise/model/*.h"
)

file(GLOB AWS_IOTSITEWISE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOTSITEWISE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOTSITEWISE_UNIFIED_HEADERS
    ${AWS_IOTSITEWISE_HEADERS}
    ${AWS_IOTSITEWISE_MODEL_HEADERS}
)

file(GLOB IOTSITEWISE_UNITY_SRC
    ${AWS_IOTSITEWISE_SOURCE}
    ${AWS_IOTSITEWISE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOTSITEWISE" IOTSITEWISE_UNITY_SRC)
endif()

file(GLOB IOTSITEWISE_SRC
    ${IOTSITEWISE_UNIFIED_HEADERS}
    ${IOTSITEWISE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iotsitewise" FILES ${AWS_IOTSITEWISE_HEADERS})
        source_group("Header Files\\aws\\iotsitewise\\model" FILES ${AWS_IOTSITEWISE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOTSITEWISE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOTSITEWISE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOTSITEWISE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOTSITEWISE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOTSITEWISE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOTSITEWISE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotsitewise)
install (FILES ${AWS_IOTSITEWISE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotsitewise/model)

do_packaging()


