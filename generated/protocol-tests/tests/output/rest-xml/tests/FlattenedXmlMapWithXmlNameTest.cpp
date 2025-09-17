/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapWithXmlNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using FlattenedXmlMapWithXmlName = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(FlattenedXmlMapWithXmlName, FlattenedXmlMapWithXmlName) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PEZsYXR0ZW5lZFhtbE1hcFdpdGhYbWxOYW1lUmVzcG9uc2U+CiAgICA8S1ZQPgogICAgICAgIDxLPmE8L0s+CiAgICAgICAgPFY+"
      "QTwvVj4KICAgIDwvS1ZQPgogICAgPEtWUD4KICAgICAgICA8Sz5iPC9LPgogICAgICAgIDxWPkI8L1Y+"
      "CiAgICA8L0tWUD4KPC9GbGF0dGVuZWRYbWxNYXBXaXRoWG1sTmFtZVJlc3BvbnNlPg==";
  SetMockResponse(mockRs);

  FlattenedXmlMapWithXmlNameRequest request;

  auto outcome = client.FlattenedXmlMapWithXmlName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const FlattenedXmlMapWithXmlNameResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"myMap":{"a":"A","b":"B"}} )" */
    const Aws::Map<Aws::String, Aws::String>& resultMyMap = result.GetMyMap();
    EXPECT_EQ(2U, resultMyMap.size());
    EXPECT_TRUE(resultMyMap.find("a") != resultMyMap.end());
    EXPECT_EQ(R"(A)", resultMyMap.at("a"));
    EXPECT_TRUE(resultMyMap.find("b") != resultMyMap.end());
    EXPECT_EQ(R"(B)", resultMyMap.at("b"));
  });
}
