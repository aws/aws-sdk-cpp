add_project(aws-cpp-sdk-iotsecuretunneling "C++ SDK for the AWS iotsecuretunneling service" aws-cpp-sdk-core)

file(GLOB AWS_IOTSECURETUNNELING_HEADERS
    "include/aws/iotsecuretunneling/*.h"
)

file(GLOB AWS_IOTSECURETUNNELING_MODEL_HEADERS
    "include/aws/iotsecuretunneling/model/*.h"
)

file(GLOB AWS_IOTSECURETUNNELING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_IOTSECURETUNNELING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB IOTSECURETUNNELING_UNIFIED_HEADERS
    ${AWS_IOTSECURETUNNELING_HEADERS}
    ${AWS_IOTSECURETUNNELING_MODEL_HEADERS}
)

file(GLOB IOTSECURETUNNELING_UNITY_SRC
    ${AWS_IOTSECURETUNNELING_SOURCE}
    ${AWS_IOTSECURETUNNELING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("IOTSECURETUNNELING" IOTSECURETUNNELING_UNITY_SRC)
endif()

file(GLOB IOTSECURETUNNELING_SRC
    ${IOTSECURETUNNELING_UNIFIED_HEADERS}
    ${IOTSECURETUNNELING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\iotsecuretunneling" FILES ${AWS_IOTSECURETUNNELING_HEADERS})
        source_group("Header Files\\aws\\iotsecuretunneling\\model" FILES ${AWS_IOTSECURETUNNELING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_IOTSECURETUNNELING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_IOTSECURETUNNELING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(IOTSECURETUNNELING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${IOTSECURETUNNELING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_IOTSECURETUNNELING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_IOTSECURETUNNELING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotsecuretunneling)
install (FILES ${AWS_IOTSECURETUNNELING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/iotsecuretunneling/model)

do_packaging()


