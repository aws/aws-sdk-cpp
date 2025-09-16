/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using FlattenedXmlMap = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(FlattenedXmlMap, FlattenedXmlMap) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PEZsYXR0ZW5lZFhtbE1hcFJlc3BvbnNlPgogICAgPG15TWFwPgogICAgICAgIDxrZXk+Zm9vPC9rZXk+CiAgICAgICAgPHZhbHVlPkZvbzwvdmFsdWU+"
      "CiAgICA8L215TWFwPgogICAgPG15TWFwPgogICAgICAgIDxrZXk+YmF6PC9rZXk+CiAgICAgICAgPHZhbHVlPkJhejwvdmFsdWU+"
      "CiAgICA8L215TWFwPgo8L0ZsYXR0ZW5lZFhtbE1hcFJlc3BvbnNlPg==";
  SetMockResponse(mockRs);

  FlattenedXmlMapRequest request;

  auto outcome = client.FlattenedXmlMap(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const FlattenedXmlMapResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"myMap":{"foo":"Foo","baz":"Baz"}} )" */
    const Aws::Map<Aws::String, FooEnum>& resultMyMap = result.GetMyMap();
    EXPECT_EQ(2U, resultMyMap.size());
    EXPECT_TRUE(resultMyMap.find("foo") != resultMyMap.end());
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), resultMyMap.at("foo"));
    EXPECT_TRUE(resultMyMap.find("baz") != resultMyMap.end());
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Baz)e"), resultMyMap.at("baz"));
  });
}
