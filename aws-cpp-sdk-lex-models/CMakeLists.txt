add_project(aws-cpp-sdk-lex-models "C++ SDK for the AWS lex-models service" aws-cpp-sdk-core)

file(GLOB AWS_LEX-MODELS_HEADERS
    "include/aws/lex-models/*.h"
)

file(GLOB AWS_LEX-MODELS_MODEL_HEADERS
    "include/aws/lex-models/model/*.h"
)

file(GLOB AWS_LEX-MODELS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LEX-MODELS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LEX-MODELS_UNIFIED_HEADERS
    ${AWS_LEX-MODELS_HEADERS}
    ${AWS_LEX-MODELS_MODEL_HEADERS}
)

file(GLOB LEX-MODELS_UNITY_SRC
    ${AWS_LEX-MODELS_SOURCE}
    ${AWS_LEX-MODELS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LEX-MODELS" LEX-MODELS_UNITY_SRC)
endif()

file(GLOB LEX-MODELS_SRC
    ${LEX-MODELS_UNIFIED_HEADERS}
    ${LEX-MODELS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\lex-models" FILES ${AWS_LEX-MODELS_HEADERS})
        source_group("Header Files\\aws\\lex-models\\model" FILES ${AWS_LEX-MODELS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LEX-MODELS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LEX-MODELS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LEX-MODELS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${LEX-MODELS_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_LEXMODELBUILDINGSERVICE_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${LEX-MODELS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_LEX-MODELS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lex-models)
install (FILES ${AWS_LEX-MODELS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lex-models/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


