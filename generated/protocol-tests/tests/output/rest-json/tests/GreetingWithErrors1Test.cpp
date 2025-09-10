/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors1 = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors1, RestJsonComplexErrorWithNoMessage) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 403;
  mockRs.headers = {{"Content-Type", R"(application/json)"}, {"X-Amzn-Errortype", R"(ComplexError)"}, {"X-Header", R"(Header)"}};
  mockRs.body = "ewogICAgIlRvcExldmVsIjogIlRvcCBsZXZlbCIsCiAgICAiTmVzdGVkIjogewogICAgICAgICJGb29vb28iOiAiYmFyIgogICAgfQp9";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors1, RestJsonEmptyComplexErrorWithNoMessage) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 403;
  mockRs.headers = {{"Content-Type", R"(application/json)"}, {"X-Amzn-Errortype", R"(ComplexError)"}};
  mockRs.body = "e30=";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
