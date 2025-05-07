/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/MediaTypeHeaderRequest.h>

using MediaTypeHeader = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(MediaTypeHeader, MediaTypeHeaderInputBase64) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  MediaTypeHeaderRequest request;
  request.SetJson(R"(true)");

  auto outcome = client.MediaTypeHeader(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/MediaTypeHeader";
  expectedRq.headers = {{"X-Json", R"(dHJ1ZQ==)"}};
  ValidateRequestSent(expectedRq);
}
