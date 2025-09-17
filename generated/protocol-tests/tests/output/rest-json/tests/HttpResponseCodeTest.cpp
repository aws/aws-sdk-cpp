/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpResponseCodeRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpResponseCode = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpResponseCode, RestJsonHttpResponseCode) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 201;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "e30=";
  SetMockResponse(mockRs);

  HttpResponseCodeRequest request;

  auto outcome = client.HttpResponseCode(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpResponseCodeResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"Status":201} )" */
    EXPECT_EQ(201, result.GetStatus());
  });
}

AWS_PROTOCOL_TEST(HttpResponseCode, RestJsonHttpResponseCodeWithNoPayload) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 201;
  SetMockResponse(mockRs);

  HttpResponseCodeRequest request;

  auto outcome = client.HttpResponseCode(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpResponseCodeResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"Status":201} )" */
    EXPECT_EQ(201, result.GetStatus());
  });
}
