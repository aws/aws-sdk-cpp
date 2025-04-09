/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/SimpleScalarXmlPropertiesRequest.h>

using SimpleScalarXmlProperties = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, QuerySimpleScalarProperties) {
  QueryProtocolClient client;
  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, AwsQuerySupportsNaNFloatOutputs) {
  QueryProtocolClient client;
  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, AwsQuerySupportsInfinityFloatOutputs) {
  QueryProtocolClient client;
  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(SimpleScalarXmlProperties, AwsQuerySupportsNegativeInfinityFloatOutputs) {
  QueryProtocolClient client;
  SimpleScalarXmlPropertiesRequest request;

  auto outcome = client.SimpleScalarXmlProperties(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
