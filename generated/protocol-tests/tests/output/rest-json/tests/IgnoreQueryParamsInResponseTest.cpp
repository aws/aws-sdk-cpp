/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/IgnoreQueryParamsInResponseRequest.h>

using IgnoreQueryParamsInResponse = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(IgnoreQueryParamsInResponse, RestJsonIgnoreQueryParamsInResponse) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "e30=";
  SetMockResponse(mockRs);

  IgnoreQueryParamsInResponseRequest request;

  auto outcome = client.IgnoreQueryParamsInResponse(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  /* expectedResult = R"( {} )" */
}

AWS_PROTOCOL_TEST(IgnoreQueryParamsInResponse, RestJsonIgnoreQueryParamsInResponseNoPayload) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  SetMockResponse(mockRs);

  IgnoreQueryParamsInResponseRequest request;

  auto outcome = client.IgnoreQueryParamsInResponse(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  /* expectedResult = R"( {} )" */
}
