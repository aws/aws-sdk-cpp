/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/SimpleScalarPropertiesRequest.h>

using SimpleScalarProperties = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarProperties, AwsJson11SupportsNaNFloatInputs) {
  JsonProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, AwsJson11SupportsInfinityFloatInputs) {
  JsonProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, AwsJson11SupportsNegativeInfinityFloatInputs) {
  JsonProtocolClient client;
  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
