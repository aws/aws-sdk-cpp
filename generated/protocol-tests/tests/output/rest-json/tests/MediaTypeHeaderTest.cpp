/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/MediaTypeHeaderRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using MediaTypeHeader = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(MediaTypeHeader, MediaTypeHeaderOutputBase64) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Json", R"(dHJ1ZQ==)"}};
  SetMockResponse(mockRs);

  MediaTypeHeaderRequest request;

  auto outcome = client.MediaTypeHeader(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const MediaTypeHeaderResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"json":"true"} )" */
    EXPECT_EQ(R"(true)", result.GetJson());
  });
}
