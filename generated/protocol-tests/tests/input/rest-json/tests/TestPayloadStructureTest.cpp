/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TestPayloadStructureRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using TestPayloadStructure = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TestPayloadStructure, RestJsonHttpWithEmptyStructurePayload) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestPayloadStructureRequest request;

  auto outcome = client.TestPayloadStructure(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "e30=";
  expectedRq.uri = "/payload";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(TestPayloadStructure, RestJsonTestPayloadStructure) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestPayloadStructureRequest request;
  {
    PayloadConfig requestPayloadConfig;
    requestPayloadConfig.SetData(25);
    request.SetPayloadConfig(requestPayloadConfig);
  }

  auto outcome = client.TestPayloadStructure(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "eyJkYXRhIjogMjUKfQ==";
  expectedRq.uri = "/payload";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(TestPayloadStructure, RestJsonHttpWithHeadersButNoPayload) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestPayloadStructureRequest request;
  request.SetTestId(R"(t-12345)");

  auto outcome = client.TestPayloadStructure(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "e30=";
  expectedRq.uri = "/payload";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}, {"X-Amz-Test-Id", R"(t-12345)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
