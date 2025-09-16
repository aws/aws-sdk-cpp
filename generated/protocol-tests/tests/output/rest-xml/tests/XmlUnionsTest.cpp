/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlUnionsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlUnions = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithStructMember) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFhtbFVuaW9uc1Jlc3BvbnNlPgogICAgPHVuaW9uVmFsdWU+CiAgICAgICA8c3RydWN0VmFsdWU+CiAgICAgICAgICA8c3RyaW5nVmFsdWU+"
      "c3RyaW5nPC9zdHJpbmdWYWx1ZT4KICAgICAgICAgIDxib29sZWFuVmFsdWU+dHJ1ZTwvYm9vbGVhblZhbHVlPgogICAgICAgICAgPGJ5dGVWYWx1ZT4xPC9ieXRlVmFsdWU+"
      "CiAgICAgICAgICA8c2hvcnRWYWx1ZT4yPC9zaG9ydFZhbHVlPgogICAgICAgICAgPGludGVnZXJWYWx1ZT4zPC9pbnRlZ2VyVmFsdWU+"
      "CiAgICAgICAgICA8bG9uZ1ZhbHVlPjQ8L2xvbmdWYWx1ZT4KICAgICAgICAgIDxmbG9hdFZhbHVlPjUuNTwvZmxvYXRWYWx1ZT4KICAgICAgICAgIDxkb3VibGVWYWx1ZT42"
      "LjU8L2RvdWJsZVZhbHVlPgogICAgICAgPC9zdHJ1Y3RWYWx1ZT4KICAgIDwvdW5pb25WYWx1ZT4KPC9YbWxVbmlvbnNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlUnionsRequest request;

  auto outcome = client.XmlUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"unionValue":{"structValue":{"stringValue":"string","booleanValue":true,"byteValue":1,"shortValue":2,"integerValue":3,"longValue":4,"floatValue":5.5,"doubleValue":6.5}}}
     * )" */
    {
      const XmlUnionShape& resultUnionValue = result.GetUnionValue();
      {
        const XmlNestedUnionStruct& resultUnionValueStructValue = resultUnionValue.GetStructValue();
        EXPECT_EQ(R"(string)", resultUnionValueStructValue.GetStringValue());
        EXPECT_EQ(true, resultUnionValueStructValue.GetBooleanValue());
        EXPECT_EQ(1, resultUnionValueStructValue.GetByteValue());
        EXPECT_EQ(2, resultUnionValueStructValue.GetShortValue());
        EXPECT_EQ(3, resultUnionValueStructValue.GetIntegerValue());
        EXPECT_EQ(4, resultUnionValueStructValue.GetLongValue());
        EXPECT_EQ(5.5, resultUnionValueStructValue.GetFloatValue());
        EXPECT_EQ(6.5, resultUnionValueStructValue.GetDoubleValue());
      }
    }
  });
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithStringMember) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFhtbFVuaW9uc1Jlc3BvbnNlPgogICA8dW5pb25WYWx1ZT4KICAgICAgPHN0cmluZ1ZhbHVlPnNvbWUgc3RyaW5nPC9zdHJpbmdWYWx1ZT4KICAgPC91bmlvblZhbHVlPgo8"
      "L1htbFVuaW9uc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlUnionsRequest request;

  auto outcome = client.XmlUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"unionValue":{"stringValue":"some string"}} )" */
    {
      const XmlUnionShape& resultUnionValue = result.GetUnionValue();
      EXPECT_EQ(R"(some string)", resultUnionValue.GetStringValue());
    }
  });
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithBooleanMember) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFhtbFVuaW9uc1Jlc3BvbnNlPgogICA8dW5pb25WYWx1ZT4KICAgICAgPGJvb2xlYW5WYWx1ZT50cnVlPC9ib29sZWFuVmFsdWU+"
      "CiAgIDwvdW5pb25WYWx1ZT4KPC9YbWxVbmlvbnNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlUnionsRequest request;

  auto outcome = client.XmlUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"unionValue":{"booleanValue":true}} )" */
    {
      const XmlUnionShape& resultUnionValue = result.GetUnionValue();
      EXPECT_EQ(true, resultUnionValue.GetBooleanValue());
    }
  });
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithUnionMember) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFhtbFVuaW9uc1Jlc3BvbnNlPgogICA8dW5pb25WYWx1ZT4KICAgICAgPHVuaW9uVmFsdWU+CiAgICAgICAgIDxib29sZWFuVmFsdWU+"
      "dHJ1ZTwvYm9vbGVhblZhbHVlPgogICAgICA8L3VuaW9uVmFsdWU+CiAgIDwvdW5pb25WYWx1ZT4KPC9YbWxVbmlvbnNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlUnionsRequest request;

  auto outcome = client.XmlUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"unionValue":{"unionValue":{"booleanValue":true}}} )" */
    {
      const XmlUnionShape& resultUnionValue = result.GetUnionValue();
      {
        const XmlUnionShape& resultUnionValueUnionValue = resultUnionValue.GetUnionValue();
        EXPECT_EQ(true, resultUnionValueUnionValue.GetBooleanValue());
      }
    }
  });
}
