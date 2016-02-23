cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-waf)

  file(GLOB AWS_WAF_HEADERS
    "include/aws/waf/*.h"
  )

  file(GLOB AWS_WAF_MODEL_HEADERS
    "include/aws/waf/model/*.h"
  )

  file(GLOB AWS_WAF_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_WAF_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB WAF_SRC
    ${AWS_WAF_HEADERS}
    ${AWS_WAF_MODEL_HEADERS}
    ${AWS_WAF_SOURCE}
    ${AWS_WAF_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\waf" FILES ${AWS_WAF_HEADERS})
      source_group("Header Files\\aws\\waf\\model" FILES ${AWS_WAF_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_WAF_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_WAF_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(WAF_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${WAF_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_WAF_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-waf ${LIBTYPE} ${WAF_SRC})

  target_include_directories(aws-cpp-sdk-waf PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-waf aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-waf
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_WAF_HEADERS} DESTINATION include/aws/waf)
  install (FILES ${AWS_WAF_MODEL_HEADERS} DESTINATION include/aws/waf/model)

