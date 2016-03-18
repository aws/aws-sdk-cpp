cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-meteringmarketplace)

  file(GLOB AWS_METERINGMARKETPLACE_HEADERS
    "include/aws/meteringmarketplace/*.h"
  )

  file(GLOB AWS_METERINGMARKETPLACE_MODEL_HEADERS
    "include/aws/meteringmarketplace/model/*.h"
  )

  file(GLOB AWS_METERINGMARKETPLACE_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_METERINGMARKETPLACE_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB METERINGMARKETPLACE_SRC
    ${AWS_METERINGMARKETPLACE_HEADERS}
    ${AWS_METERINGMARKETPLACE_MODEL_HEADERS}
    ${AWS_METERINGMARKETPLACE_SOURCE}
    ${AWS_METERINGMARKETPLACE_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\meteringmarketplace" FILES ${AWS_METERINGMARKETPLACE_HEADERS})
      source_group("Header Files\\aws\\meteringmarketplace\\model" FILES ${AWS_METERINGMARKETPLACE_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_METERINGMARKETPLACE_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_METERINGMARKETPLACE_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(METERINGMARKETPLACE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${METERINGMARKETPLACE_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_MARKETPLACEMETERING_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-meteringmarketplace ${LIBTYPE} ${METERINGMARKETPLACE_SRC})

  target_include_directories(aws-cpp-sdk-meteringmarketplace PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-meteringmarketplace aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-meteringmarketplace
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_METERINGMARKETPLACE_HEADERS} DESTINATION include/aws/meteringmarketplace)
  install (FILES ${AWS_METERINGMARKETPLACE_MODEL_HEADERS} DESTINATION include/aws/meteringmarketplace/model)

