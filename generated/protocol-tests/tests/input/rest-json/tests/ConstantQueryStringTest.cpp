/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/ConstantQueryStringRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using ConstantQueryString = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(ConstantQueryString, RestJsonConstantQueryString) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  ConstantQueryStringRequest request;
  request.SetHello(R"(hi)");

  auto outcome = client.ConstantQueryString(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/ConstantQueryString/hi?foo=bar&hello";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
