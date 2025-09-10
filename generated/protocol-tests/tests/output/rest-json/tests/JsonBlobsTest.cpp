/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonBlobsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonBlobs = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonBlobs, RestJsonJsonBlobs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImRhdGEiOiAiZG1Gc2RXVT0iCn0=";
  SetMockResponse(mockRs);

  JsonBlobsRequest request;

  auto outcome = client.JsonBlobs(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonBlobsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"data":"value"} )" */
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"(value)"), result.GetData());
  });
}
