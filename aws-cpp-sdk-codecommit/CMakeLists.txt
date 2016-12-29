add_project(aws-cpp-sdk-codecommit "C++ SDK for the AWS codecommit service" aws-cpp-sdk-core)

file(GLOB AWS_CODECOMMIT_HEADERS
    "include/aws/codecommit/*.h"
)

file(GLOB AWS_CODECOMMIT_MODEL_HEADERS
    "include/aws/codecommit/model/*.h"
)

file(GLOB AWS_CODECOMMIT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CODECOMMIT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CODECOMMIT_UNIFIED_HEADERS
    ${AWS_CODECOMMIT_HEADERS}
    ${AWS_CODECOMMIT_MODEL_HEADERS}
)

file(GLOB CODECOMMIT_UNITY_SRC
    ${AWS_CODECOMMIT_SOURCE}
    ${AWS_CODECOMMIT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODECOMMIT" CODECOMMIT_UNITY_SRC)
endif()

file(GLOB CODECOMMIT_SRC
    ${CODECOMMIT_UNIFIED_HEADERS}
    ${CODECOMMIT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\codecommit" FILES ${AWS_CODECOMMIT_HEADERS})
        source_group("Header Files\\aws\\codecommit\\model" FILES ${AWS_CODECOMMIT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CODECOMMIT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CODECOMMIT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CODECOMMIT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${CODECOMMIT_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CODECOMMIT_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${CODECOMMIT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_CODECOMMIT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codecommit)
install (FILES ${AWS_CODECOMMIT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codecommit/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


