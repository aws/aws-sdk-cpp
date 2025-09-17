/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithUnionRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPayloadWithUnion = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithUnion, RestXmlHttpPayloadWithUnion) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFVuaW9uUGF5bG9hZD4KICAgIDxncmVldGluZz5oZWxsbzwvZ3JlZXRpbmc+CjwvVW5pb25QYXlsb2FkPg==";
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

AWS_PROTOCOL_TEST(HttpPayloadWithUnion, RestXmlHttpPayloadWithUnsetUnion) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

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
