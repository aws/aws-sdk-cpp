/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/InputAndOutputWithHeadersRequest.h>

using InputAndOutputWithHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithStringHeaders) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithNumericHeaders) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithBooleanHeaders) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithTimestampHeaders) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithEnumHeaders) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestXmlSupportsNaNFloatHeaderOutputs) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestXmlSupportsInfinityFloatHeaderOutputs) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestXmlSupportsNegativeInfinityFloatHeaderOutputs) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
