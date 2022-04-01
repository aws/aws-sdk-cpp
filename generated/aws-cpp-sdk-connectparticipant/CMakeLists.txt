add_project(aws-cpp-sdk-connectparticipant "C++ SDK for the AWS connectparticipant service" aws-cpp-sdk-core)

file(GLOB AWS_CONNECTPARTICIPANT_HEADERS
    "include/aws/connectparticipant/*.h"
)

file(GLOB AWS_CONNECTPARTICIPANT_MODEL_HEADERS
    "include/aws/connectparticipant/model/*.h"
)

file(GLOB AWS_CONNECTPARTICIPANT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CONNECTPARTICIPANT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CONNECTPARTICIPANT_UNIFIED_HEADERS
    ${AWS_CONNECTPARTICIPANT_HEADERS}
    ${AWS_CONNECTPARTICIPANT_MODEL_HEADERS}
)

file(GLOB CONNECTPARTICIPANT_UNITY_SRC
    ${AWS_CONNECTPARTICIPANT_SOURCE}
    ${AWS_CONNECTPARTICIPANT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CONNECTPARTICIPANT" CONNECTPARTICIPANT_UNITY_SRC)
endif()

file(GLOB CONNECTPARTICIPANT_SRC
    ${CONNECTPARTICIPANT_UNIFIED_HEADERS}
    ${CONNECTPARTICIPANT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\connectparticipant" FILES ${AWS_CONNECTPARTICIPANT_HEADERS})
        source_group("Header Files\\aws\\connectparticipant\\model" FILES ${AWS_CONNECTPARTICIPANT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CONNECTPARTICIPANT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CONNECTPARTICIPANT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CONNECTPARTICIPANT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CONNECTPARTICIPANT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CONNECTPARTICIPANT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CONNECTPARTICIPANT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/connectparticipant)
install (FILES ${AWS_CONNECTPARTICIPANT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/connectparticipant/model)

do_packaging()


