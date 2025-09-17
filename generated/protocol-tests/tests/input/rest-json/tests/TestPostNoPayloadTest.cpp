/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TestPostNoPayloadRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using TestPostNoPayload = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TestPostNoPayload, RestJsonHttpPostWithNoModeledBody) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestPostNoPayloadRequest request;

  auto outcome = client.TestPostNoPayload(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/no_payload";
  expectedRq.forbidHeaders = {"Content-Type"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(TestPostNoPayload, RestJsonHttpWithPostHeaderMemberNoModeledBody) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestPostNoPayloadRequest request;
  request.SetTestId(R"(t-12345)");

  auto outcome = client.TestPostNoPayload(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/no_payload";
  expectedRq.headers = {{"X-Amz-Test-Id", R"(t-12345)"}};
  expectedRq.forbidHeaders = {"Content-Type"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
