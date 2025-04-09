/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/SimpleScalarPropertiesRequest.h>

using SimpleScalarProperties = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSimpleScalarProperties) {
  RestJsonProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonDoesntDeserializeNullStructureValues) {
  RestJsonProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSupportsNaNFloatInputs) {
  RestJsonProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSupportsInfinityFloatInputs) {
  RestJsonProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSupportsNegativeInfinityFloatInputs) {
  RestJsonProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
