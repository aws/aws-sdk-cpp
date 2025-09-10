/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapWithXmlNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using NestedXmlMapWithXmlName = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(NestedXmlMapWithXmlName, NestedXmlMapWithXmlNameDeserializes) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "ICAgIDxOZXN0ZWRYbWxNYXBXaXRoWG1sTmFtZUlucHV0T3V0cHV0PgogICAgICAgIDxuZXN0ZWRYbWxNYXBXaXRoWG1sTmFtZU1hcD4KICAgICAgICAgICAgPGVudHJ5Pgog"
      "ICAgICAgICAgICAgICAgPE91dGVyS2V5PmZvbzwvT3V0ZXJLZXk+CiAgICAgICAgICAgICAgICA8dmFsdWU+"
      "CiAgICAgICAgICAgICAgICAgICAgPGVudHJ5PgogICAgICAgICAgICAgICAgICAgICAgICA8SW5uZXJLZXk+"
      "YmFyPC9Jbm5lcktleT4KICAgICAgICAgICAgICAgICAgICAgICAgPElubmVyVmFsdWU+QmF6PC9Jbm5lclZhbHVlPgogICAgICAgICAgICAgICAgICAgIDwvZW50cnk+"
      "CiAgICAgICAgICAgICAgICAgICAgPGVudHJ5PgogICAgICAgICAgICAgICAgICAgICAgICA8SW5uZXJLZXk+Zml6ejwvSW5uZXJLZXk+"
      "CiAgICAgICAgICAgICAgICAgICAgICAgIDxJbm5lclZhbHVlPkJ1eno8L0lubmVyVmFsdWU+"
      "CiAgICAgICAgICAgICAgICAgICAgPC9lbnRyeT4KICAgICAgICAgICAgICAgIDwvdmFsdWU+CiAgICAgICAgICAgIDwvZW50cnk+"
      "CiAgICAgICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgICAgIDxPdXRlcktleT5xdXg8L091dGVyS2V5PgogICAgICAgICAgICAgICAgPHZhbHVlPgogICAgICAgICAgICAg"
      "ICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgICAgICAgICAgICAgPElubmVyS2V5PmZvb2JhcjwvSW5uZXJLZXk+"
      "CiAgICAgICAgICAgICAgICAgICAgICAgIDxJbm5lclZhbHVlPkJhcjwvSW5uZXJWYWx1ZT4KICAgICAgICAgICAgICAgICAgICA8L2VudHJ5PgogICAgICAgICAgICAgICAg"
      "ICAgIDxlbnRyeT4KICAgICAgICAgICAgICAgICAgICAgICAgPElubmVyS2V5PmZpenpidXp6PC9Jbm5lcktleT4KICAgICAgICAgICAgICAgICAgICAgICAgPElubmVyVmFs"
      "dWU+"
      "QnV6ejwvSW5uZXJWYWx1ZT4KICAgICAgICAgICAgICAgICAgICA8L2VudHJ5PgogICAgICAgICAgICAgICAgPC92YWx1ZT4KICAgICAgICAgICAgPC9lbnRyeT4KICAgICAg"
      "ICA8L25lc3RlZFhtbE1hcFdpdGhYbWxOYW1lTWFwPgogICAgPC9OZXN0ZWRYbWxNYXBXaXRoWG1sTmFtZUlucHV0T3V0cHV0Pgo=";
  SetMockResponse(mockRs);

  NestedXmlMapWithXmlNameRequest request;

  auto outcome = client.NestedXmlMapWithXmlName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const NestedXmlMapWithXmlNameResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"nestedXmlMapWithXmlNameMap":{"foo":{"bar":"Baz","fizz":"Buzz"},"qux":{"foobar":"Bar","fizzbuzz":"Buzz"}}} )"
     */
    const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& resultNestedXmlMapWithXmlNameMap =
        result.GetNestedXmlMapWithXmlNameMap();
    EXPECT_EQ(2U, resultNestedXmlMapWithXmlNameMap.size());
    EXPECT_TRUE(resultNestedXmlMapWithXmlNameMap.find("foo") != resultNestedXmlMapWithXmlNameMap.end());
    {
      const Aws::Map<Aws::String, Aws::String>& resultNestedXmlMapWithXmlNameMapNestedMap = resultNestedXmlMapWithXmlNameMap.at("foo");
      EXPECT_EQ(2U, resultNestedXmlMapWithXmlNameMapNestedMap.size());
      EXPECT_TRUE(resultNestedXmlMapWithXmlNameMapNestedMap.find("bar") != resultNestedXmlMapWithXmlNameMapNestedMap.end());
      EXPECT_EQ(R"(Baz)", resultNestedXmlMapWithXmlNameMapNestedMap.at("bar"));
      EXPECT_TRUE(resultNestedXmlMapWithXmlNameMapNestedMap.find("fizz") != resultNestedXmlMapWithXmlNameMapNestedMap.end());
      EXPECT_EQ(R"(Buzz)", resultNestedXmlMapWithXmlNameMapNestedMap.at("fizz"));
    }
    EXPECT_TRUE(resultNestedXmlMapWithXmlNameMap.find("qux") != resultNestedXmlMapWithXmlNameMap.end());
    {
      const Aws::Map<Aws::String, Aws::String>& resultNestedXmlMapWithXmlNameMapNestedMap = resultNestedXmlMapWithXmlNameMap.at("qux");
      EXPECT_EQ(2U, resultNestedXmlMapWithXmlNameMapNestedMap.size());
      EXPECT_TRUE(resultNestedXmlMapWithXmlNameMapNestedMap.find("foobar") != resultNestedXmlMapWithXmlNameMapNestedMap.end());
      EXPECT_EQ(R"(Bar)", resultNestedXmlMapWithXmlNameMapNestedMap.at("foobar"));
      EXPECT_TRUE(resultNestedXmlMapWithXmlNameMapNestedMap.find("fizzbuzz") != resultNestedXmlMapWithXmlNameMapNestedMap.end());
      EXPECT_EQ(R"(Buzz)", resultNestedXmlMapWithXmlNameMapNestedMap.at("fizzbuzz"));
    }
  });
}
