add_project(aws-cpp-sdk-connect-contact-lens "C++ SDK for the AWS connect-contact-lens service" aws-cpp-sdk-core)

file(GLOB AWS_CONNECT-CONTACT-LENS_HEADERS
    "include/aws/connect-contact-lens/*.h"
)

file(GLOB AWS_CONNECT-CONTACT-LENS_MODEL_HEADERS
    "include/aws/connect-contact-lens/model/*.h"
)

file(GLOB AWS_CONNECT-CONTACT-LENS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CONNECT-CONTACT-LENS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CONNECT-CONTACT-LENS_UNIFIED_HEADERS
    ${AWS_CONNECT-CONTACT-LENS_HEADERS}
    ${AWS_CONNECT-CONTACT-LENS_MODEL_HEADERS}
)

file(GLOB CONNECT-CONTACT-LENS_UNITY_SRC
    ${AWS_CONNECT-CONTACT-LENS_SOURCE}
    ${AWS_CONNECT-CONTACT-LENS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CONNECT-CONTACT-LENS" CONNECT-CONTACT-LENS_UNITY_SRC)
endif()

file(GLOB CONNECT-CONTACT-LENS_SRC
    ${CONNECT-CONTACT-LENS_UNIFIED_HEADERS}
    ${CONNECT-CONTACT-LENS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\connect-contact-lens" FILES ${AWS_CONNECT-CONTACT-LENS_HEADERS})
        source_group("Header Files\\aws\\connect-contact-lens\\model" FILES ${AWS_CONNECT-CONTACT-LENS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CONNECT-CONTACT-LENS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CONNECT-CONTACT-LENS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CONNECT-CONTACT-LENS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CONNECT-CONTACT-LENS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CONNECTCONTACTLENS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CONNECT-CONTACT-LENS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/connect-contact-lens)
install (FILES ${AWS_CONNECT-CONTACT-LENS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/connect-contact-lens/model)

do_packaging()


