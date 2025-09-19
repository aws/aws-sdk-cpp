/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithUnionRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPayloadWithUnion = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithUnion, RestJsonHttpPayloadWithUnion) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImdyZWV0aW5nIjogImhlbGxvIgp9";
  SetMockResponse(mockRs);

  HttpPayloadWithUnionRequest request;

  auto outcome = client.HttpPayloadWithUnion(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpPayloadWithUnionResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"nested":{"greeting":"hello"}} )" */
    {
      const UnionPayload& resultNested = result.GetNested();
      EXPECT_EQ(R"(hello)", resultNested.GetGreeting());
    }
  });
}

AWS_PROTOCOL_TEST(HttpPayloadWithUnion, RestJsonHttpPayloadWithUnsetUnion) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Length", R"(0)"}};
  SetMockResponse(mockRs);

  HttpPayloadWithUnionRequest request;

  auto outcome = client.HttpPayloadWithUnion(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent([](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}
