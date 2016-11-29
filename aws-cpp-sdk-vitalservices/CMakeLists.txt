add_project(aws-cpp-sdk-vitalservices "C++ SDK for the AWS vitalservices service" aws-cpp-sdk-core)

file(GLOB AWS_VITALSERVICES_HEADERS
    "include/aws/vitalservices/*.h"
)

file(GLOB AWS_VITALSERVICES_MODEL_HEADERS
    "include/aws/vitalservices/model/*.h"
)

file(GLOB AWS_VITALSERVICES_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_VITALSERVICES_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB VITALSERVICES_UNIFIED_HEADERS
    ${AWS_VITALSERVICES_HEADERS}
    ${AWS_VITALSERVICES_MODEL_HEADERS}
)

file(GLOB VITALSERVICES_UNITY_SRC
    ${AWS_VITALSERVICES_SOURCE}
    ${AWS_VITALSERVICES_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("VITALSERVICES" VITALSERVICES_UNITY_SRC)
endif()

file(GLOB VITALSERVICES_SRC
    ${VITALSERVICES_UNIFIED_HEADERS}
    ${VITALSERVICES_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\vitalservices" FILES ${AWS_VITALSERVICES_HEADERS})
        source_group("Header Files\\aws\\vitalservices\\model" FILES ${AWS_VITALSERVICES_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_VITALSERVICES_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_VITALSERVICES_MODEL_SOURCE})
    endif(MSVC)
endif()

set(VITALSERVICES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${VITALSERVICES_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_VITALSERVICES_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${VITALSERVICES_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_VITALSERVICES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/vitalservices)
install (FILES ${AWS_VITALSERVICES_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/vitalservices/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


