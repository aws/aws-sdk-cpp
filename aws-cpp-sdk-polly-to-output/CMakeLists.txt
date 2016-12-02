add_project(aws-cpp-sdk-polly-to-output
    "High-level C++ SDK for Polly"
    aws-cpp-sdk-polly
    aws-cpp-sdk-core)

file( GLOB POLLY_OUT_HEADERS "include/aws/polly-to-output/*.h" )

file( GLOB POLLY_OUT_SOURCE "source/polly-to-output/*.cpp" )

if(MSVC)
    source_group("Header Files\\aws\\polly-to-output" FILES ${POLLY_OUT_HEADERS})
    source_group("Source Files\\polly-to-output" FILES ${POLLY_OUT_SOURCE})
endif()

file(GLOB ALL_POLLY_OUT_HEADERS
    ${POLLY_OUT_HEADERS}
)

file(GLOB ALL_POLLY_OUT_SOURCE
    ${POLLY_OUT_SOURCE}
)

file(GLOB ALL_POLLY_OUT
    ${ALL_POLLY_OUT_HEADERS}
    ${ALL_POLLY_OUT_SOURCE}
)

set(POLLY_OUT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
  )

include_directories(${POLLY_OUT_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_POLLY_OUT_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${ALL_POLLY_OUT})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${ALL_POLLY_OUT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/polly-to-output)

do_packaging()

