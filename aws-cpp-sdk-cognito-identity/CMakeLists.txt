cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-cognito-identity)

  file(GLOB AWS_COGNITO-IDENTITY_HEADERS
    "include/aws/cognito-identity/*.h"
  )

  file(GLOB AWS_COGNITO-IDENTITY_MODEL_HEADERS
    "include/aws/cognito-identity/model/*.h"
  )

  file(GLOB AWS_COGNITO-IDENTITY_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_COGNITO-IDENTITY_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB COGNITO-IDENTITY_SRC
    ${AWS_COGNITO-IDENTITY_HEADERS}
    ${AWS_COGNITO-IDENTITY_MODEL_HEADERS}
    ${AWS_COGNITO-IDENTITY_SOURCE}
    ${AWS_COGNITO-IDENTITY_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\cognito-identity" FILES ${AWS_COGNITO-IDENTITY_HEADERS})
      source_group("Header Files\\aws\\cognito-identity\\model" FILES ${AWS_COGNITO-IDENTITY_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_COGNITO-IDENTITY_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_COGNITO-IDENTITY_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(COGNITO-IDENTITY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${COGNITO-IDENTITY_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_COGNITOIDENTITY_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-cognito-identity ${LIBTYPE} ${COGNITO-IDENTITY_SRC})

  target_include_directories(aws-cpp-sdk-cognito-identity PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-cognito-identity aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-cognito-identity
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_COGNITO-IDENTITY_HEADERS} DESTINATION include/aws/cognito-identity)
  install (FILES ${AWS_COGNITO-IDENTITY_MODEL_HEADERS} DESTINATION include/aws/cognito-identity/model)

