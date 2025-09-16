/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadTraitsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPayloadTraits = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadTraits, HttpPayloadTraitsWithBlob) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Foo", R"(Foo)"}};
  mockRs.body = "YmxvYmJ5IGJsb2IgYmxvYg==";
  SetMockResponse(mockRs);

  HttpPayloadTraitsRequest request;

  auto outcome = client.HttpPayloadTraits(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpPayloadTraitsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"foo":"Foo","blob":"blobby blob blob"} )" */
    EXPECT_EQ(R"(Foo)", result.GetFoo());
    const Aws::String resultBlob = [&result]() {
      Aws::StringStream ss;
      ss << result.GetBlob().rdbuf();
      return ss.str();
    }();
    EXPECT_STREQ(R"(blobby blob blob)", resultBlob.c_str());
  });
}

AWS_PROTOCOL_TEST(HttpPayloadTraits, HttpPayloadTraitsWithNoBlobBody) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Foo", R"(Foo)"}};
  SetMockResponse(mockRs);

  HttpPayloadTraitsRequest request;

  auto outcome = client.HttpPayloadTraits(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpPayloadTraitsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"foo":"Foo"} )" */
    EXPECT_EQ(R"(Foo)", result.GetFoo());
  });
}
