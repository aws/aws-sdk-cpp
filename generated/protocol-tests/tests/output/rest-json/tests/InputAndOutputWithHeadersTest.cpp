/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/InputAndOutputWithHeadersRequest.h>

using InputAndOutputWithHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithStringHeaders) {
  RestJsonProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithQuotedStringHeaders) {
  RestJsonProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithNumericHeaders) {
  RestJsonProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithBooleanHeaders) {
  RestJsonProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithTimestampHeaders) {
  RestJsonProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithEnumHeaders) {
  RestJsonProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithIntEnumHeaders) {
  RestJsonProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonSupportsNaNFloatHeaderOutputs) {
  RestJsonProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonSupportsInfinityFloatHeaderOutputs) {
  RestJsonProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonSupportsNegativeInfinityFloatHeaderOutputs) {
  RestJsonProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
