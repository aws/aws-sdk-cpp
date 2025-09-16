/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors0 = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson11ComplexError) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body =
      "ewogICAgIl9fdHlwZSI6ICJDb21wbGV4RXJyb3IiLAogICAgIlRvcExldmVsIjogIlRvcCBsZXZlbCIsCiAgICAiTmVzdGVkIjogewogICAgICAgICJGb28iOiAiYmFyIgog"
      "ICAgfQp9";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(GreetingWithErrors0, AwsJson11EmptyComplexError) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgIl9fdHlwZSI6ICJDb21wbGV4RXJyb3IiCn0=";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
