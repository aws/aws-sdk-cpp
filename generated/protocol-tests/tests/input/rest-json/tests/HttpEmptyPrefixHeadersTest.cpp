/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpEmptyPrefixHeadersRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpEmptyPrefixHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpEmptyPrefixHeaders, RestJsonHttpEmptyPrefixHeadersRequestClient) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpEmptyPrefixHeadersRequest request;
  request.SetPrefixHeaders({{"x-foo", R"(Foo)"}, {"hello", R"(Hello)"}});
  request.SetSpecificHeader(R"(There)");

  auto outcome = client.HttpEmptyPrefixHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/HttpEmptyPrefixHeaders";
  expectedRq.headers = {{"x-foo", R"(Foo)"}, {"hello", R"(There)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
