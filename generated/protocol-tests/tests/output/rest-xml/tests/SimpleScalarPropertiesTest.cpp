/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/SimpleScalarPropertiesRequest.h>

using SimpleScalarProperties = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarProperties) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesComplexEscapes) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesWithEscapedCharacter) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesWithXMLPreamble) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesWithWhiteSpace) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesPureWhiteSpace) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestXmlSupportsNaNFloatOutputs) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestXmlSupportsInfinityFloatOutputs) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestXmlSupportsNegativeInfinityFloatOutputs) {
  RestXmlProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
