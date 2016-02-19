cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-email)

  file(GLOB AWS_EMAIL_HEADERS
    "include/aws/email/*.h"
  )

  file(GLOB AWS_EMAIL_MODEL_HEADERS
    "include/aws/email/model/*.h"
  )

  file(GLOB AWS_EMAIL_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_EMAIL_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB EMAIL_SRC
    ${AWS_EMAIL_HEADERS}
    ${AWS_EMAIL_MODEL_HEADERS}
    ${AWS_EMAIL_SOURCE}
    ${AWS_EMAIL_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\email" FILES ${AWS_EMAIL_HEADERS})
      source_group("Header Files\\aws\\email\\model" FILES ${AWS_EMAIL_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_EMAIL_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_EMAIL_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(EMAIL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${EMAIL_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SES_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-email ${LIBTYPE} ${EMAIL_SRC})

  target_include_directories(aws-cpp-sdk-email PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-email aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-email
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_EMAIL_HEADERS} DESTINATION include/aws/email)
  install (FILES ${AWS_EMAIL_MODEL_HEADERS} DESTINATION include/aws/email/model)

