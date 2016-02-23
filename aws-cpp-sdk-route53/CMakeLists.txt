cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-route53)

  file(GLOB AWS_ROUTE53_HEADERS
    "include/aws/route53/*.h"
  )

  file(GLOB AWS_ROUTE53_MODEL_HEADERS
    "include/aws/route53/model/*.h"
  )

  file(GLOB AWS_ROUTE53_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ROUTE53_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ROUTE53_SRC
    ${AWS_ROUTE53_HEADERS}
    ${AWS_ROUTE53_MODEL_HEADERS}
    ${AWS_ROUTE53_SOURCE}
    ${AWS_ROUTE53_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\route53" FILES ${AWS_ROUTE53_HEADERS})
      source_group("Header Files\\aws\\route53\\model" FILES ${AWS_ROUTE53_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ROUTE53_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ROUTE53_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ROUTE53_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ROUTE53_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ROUTE53_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-route53 ${LIBTYPE} ${ROUTE53_SRC})

  target_include_directories(aws-cpp-sdk-route53 PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-route53 aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-route53
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_ROUTE53_HEADERS} DESTINATION include/aws/route53)
  install (FILES ${AWS_ROUTE53_MODEL_HEADERS} DESTINATION include/aws/route53/model)

