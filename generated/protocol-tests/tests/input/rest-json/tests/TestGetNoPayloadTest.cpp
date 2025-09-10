/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TestGetNoPayloadRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using TestGetNoPayload = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TestGetNoPayload, RestJsonHttpGetWithNoModeledBody) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestGetNoPayloadRequest request;

  auto outcome = client.TestGetNoPayload(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/no_payload";
  expectedRq.forbidHeaders = {"Content-Length", "Content-Type"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(TestGetNoPayload, RestJsonHttpGetWithHeaderMemberNoModeledBody) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestGetNoPayloadRequest request;
  request.SetTestId(R"(t-12345)");

  auto outcome = client.TestGetNoPayload(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/no_payload";
  expectedRq.headers = {{"X-Amz-Test-Id", R"(t-12345)"}};
  expectedRq.forbidHeaders = {"Content-Length", "Content-Type"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
