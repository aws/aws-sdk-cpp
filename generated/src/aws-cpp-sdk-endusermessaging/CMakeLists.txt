add_project(aws-cpp-sdk-endusermessaging "C++ SDK for the AWS endusermessaging service" aws-cpp-sdk-core)

file(GLOB AWS_ENDUSERMESSAGING_HEADERS
    "include/aws/endusermessaging/*.h"
)

file(GLOB AWS_ENDUSERMESSAGING_MODEL_HEADERS
    "include/aws/endusermessaging/model/*.h"
)

file(GLOB AWS_ENDUSERMESSAGING_INTERNAL_HEADERS
    "include/aws/endusermessaging/internal/*.h"
)

file(GLOB AWS_ENDUSERMESSAGING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ENDUSERMESSAGING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ENDUSERMESSAGING_UNIFIED_HEADERS
    ${AWS_ENDUSERMESSAGING_HEADERS}
    ${AWS_ENDUSERMESSAGING_INTERNAL_HEADERS}
    ${AWS_ENDUSERMESSAGING_MODEL_HEADERS}
)

file(GLOB ENDUSERMESSAGING_UNITY_SRC
    ${AWS_ENDUSERMESSAGING_SOURCE}
    ${AWS_ENDUSERMESSAGING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ENDUSERMESSAGING" ENDUSERMESSAGING_UNITY_SRC)
endif()

file(GLOB ENDUSERMESSAGING_SRC
    ${ENDUSERMESSAGING_UNIFIED_HEADERS}
    ${ENDUSERMESSAGING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\endusermessaging" FILES ${AWS_ENDUSERMESSAGING_HEADERS})
        source_group("Header Files\\aws\\endusermessaging\\internal" FILES ${AWS_ENDUSERMESSAGING_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\endusermessaging\\model" FILES ${AWS_ENDUSERMESSAGING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ENDUSERMESSAGING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ENDUSERMESSAGING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ENDUSERMESSAGING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ENDUSERMESSAGING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ENDUSERMESSAGING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ENDUSERMESSAGING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/endusermessaging)
install (FILES ${AWS_ENDUSERMESSAGING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/endusermessaging/model)

do_packaging()


