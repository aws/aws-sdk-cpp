cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-cloudsearchdomain)

  file(GLOB AWS_CLOUDSEARCHDOMAIN_HEADERS
    "include/aws/cloudsearchdomain/*.h"
  )

  file(GLOB AWS_CLOUDSEARCHDOMAIN_MODEL_HEADERS
    "include/aws/cloudsearchdomain/model/*.h"
  )

  file(GLOB AWS_CLOUDSEARCHDOMAIN_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_CLOUDSEARCHDOMAIN_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB CLOUDSEARCHDOMAIN_SRC
    ${AWS_CLOUDSEARCHDOMAIN_HEADERS}
    ${AWS_CLOUDSEARCHDOMAIN_MODEL_HEADERS}
    ${AWS_CLOUDSEARCHDOMAIN_SOURCE}
    ${AWS_CLOUDSEARCHDOMAIN_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\cloudsearchdomain" FILES ${AWS_CLOUDSEARCHDOMAIN_HEADERS})
      source_group("Header Files\\aws\\cloudsearchdomain\\model" FILES ${AWS_CLOUDSEARCHDOMAIN_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_CLOUDSEARCHDOMAIN_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_CLOUDSEARCHDOMAIN_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(CLOUDSEARCHDOMAIN_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${CLOUDSEARCHDOMAIN_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDSEARCHDOMAIN_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-cloudsearchdomain ${LIBTYPE} ${CLOUDSEARCHDOMAIN_SRC})

  target_include_directories(aws-cpp-sdk-cloudsearchdomain PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-cloudsearchdomain aws-cpp-sdk-core)

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-cloudsearchdomain
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_CLOUDSEARCHDOMAIN_HEADERS} DESTINATION include/aws/cloudsearchdomain)
  install (FILES ${AWS_CLOUDSEARCHDOMAIN_MODEL_HEADERS} DESTINATION include/aws/cloudsearchdomain/model)

