/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpQueryParamsOnlyOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpQueryParamsOnlyOperation = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpQueryParamsOnlyOperation, HttpQueryParamsOnlyRequest) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpQueryParamsOnlyOperationRequest request;
  request.SetQueryMap({{"a", R"(b)"}, {"c", R"(d)"}});

  auto outcome = client.HttpQueryParamsOnlyOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/http-query-params-only?a=b&c=d";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(HttpQueryParamsOnlyOperation, HttpQueryParamsOnlyEmptyRequest) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpQueryParamsOnlyOperationRequest request;
  request.SetQueryMap({});

  auto outcome = client.HttpQueryParamsOnlyOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/http-query-params-only";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
