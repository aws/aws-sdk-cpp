/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpStringPayloadRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpStringPayload = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpStringPayload, RestJsonStringPayloadRequest) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpStringPayloadRequest request;
  request.SetBody([]() { return Aws::MakeShared<Aws::StringStream>("Test", R"(rawstring)", std::ios_base::in | std::ios_base::binary); }());

  auto outcome = client.HttpStringPayload(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "cmF3c3RyaW5n";
  expectedRq.uri = "/StringPayload";
  expectedRq.headers = {{"Content-Type", R"(text/plain)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
