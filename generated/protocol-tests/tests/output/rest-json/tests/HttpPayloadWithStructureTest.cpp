/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithStructureRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPayloadWithStructure = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithStructure, RestJsonHttpPayloadWithStructure) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImdyZWV0aW5nIjogImhlbGxvIiwKICAgICJuYW1lIjogIlBocmVkZHkiCn0=";
  SetMockResponse(mockRs);

  HttpPayloadWithStructureRequest request;

  auto outcome = client.HttpPayloadWithStructure(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpPayloadWithStructureResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"nested":{"greeting":"hello","name":"Phreddy"}} )" */
    {
      const NestedPayload& resultNested = result.GetNested();
      EXPECT_EQ(R"(hello)", resultNested.GetGreeting());
      EXPECT_EQ(R"(Phreddy)", resultNested.GetName());
    }
  });
}
