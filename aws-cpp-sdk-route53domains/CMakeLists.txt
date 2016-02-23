cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-route53domains)

  file(GLOB AWS_ROUTE53DOMAINS_HEADERS
    "include/aws/route53domains/*.h"
  )

  file(GLOB AWS_ROUTE53DOMAINS_MODEL_HEADERS
    "include/aws/route53domains/model/*.h"
  )

  file(GLOB AWS_ROUTE53DOMAINS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ROUTE53DOMAINS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ROUTE53DOMAINS_SRC
    ${AWS_ROUTE53DOMAINS_HEADERS}
    ${AWS_ROUTE53DOMAINS_MODEL_HEADERS}
    ${AWS_ROUTE53DOMAINS_SOURCE}
    ${AWS_ROUTE53DOMAINS_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\route53domains" FILES ${AWS_ROUTE53DOMAINS_HEADERS})
      source_group("Header Files\\aws\\route53domains\\model" FILES ${AWS_ROUTE53DOMAINS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ROUTE53DOMAINS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ROUTE53DOMAINS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ROUTE53DOMAINS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ROUTE53DOMAINS_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ROUTE53DOMAINS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-route53domains ${LIBTYPE} ${ROUTE53DOMAINS_SRC})

  target_include_directories(aws-cpp-sdk-route53domains PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-route53domains aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-route53domains
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_ROUTE53DOMAINS_HEADERS} DESTINATION include/aws/route53domains)
  install (FILES ${AWS_ROUTE53DOMAINS_MODEL_HEADERS} DESTINATION include/aws/route53domains/model)

