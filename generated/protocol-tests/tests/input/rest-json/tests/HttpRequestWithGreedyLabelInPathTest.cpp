/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpRequestWithGreedyLabelInPathRequest.h>

using HttpRequestWithGreedyLabelInPath = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpRequestWithGreedyLabelInPath, RestJsonHttpRequestWithGreedyLabelInPath) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpRequestWithGreedyLabelInPathRequest request;
  request.SetFoo(R"(hello/escape)");
  request.SetBaz(R"(there/guy)");

  auto outcome = client.HttpRequestWithGreedyLabelInPath(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/HttpRequestWithGreedyLabelInPath/foo/hello%2Fescape/baz/there/guy";
  ValidateRequestSent(expectedRq);
}
