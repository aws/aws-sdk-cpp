/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SimpleScalarProperties = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarProperties) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}, {"X-Foo", R"(Foo)"}};
  mockRs.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXNwb25zZT4KICAgIDxzdHJpbmdWYWx1ZT5zdHJpbmc8L3N0cmluZ1ZhbHVlPgogICAgPHRydWVCb29sZWFuVmFsdWU+"
      "dHJ1ZTwvdHJ1ZUJvb2xlYW5WYWx1ZT4KICAgIDxmYWxzZUJvb2xlYW5WYWx1ZT5mYWxzZTwvZmFsc2VCb29sZWFuVmFsdWU+"
      "CiAgICA8Ynl0ZVZhbHVlPjE8L2J5dGVWYWx1ZT4KICAgIDxzaG9ydFZhbHVlPjI8L3Nob3J0VmFsdWU+"
      "CiAgICA8aW50ZWdlclZhbHVlPjM8L2ludGVnZXJWYWx1ZT4KICAgIDxsb25nVmFsdWU+NDwvbG9uZ1ZhbHVlPgogICAgPGZsb2F0VmFsdWU+"
      "NS41PC9mbG9hdFZhbHVlPgogICAgPERvdWJsZURyaWJibGU+Ni41PC9Eb3VibGVEcmliYmxlPgo8L1NpbXBsZVNjYWxhclByb3BlcnRpZXNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"foo":"Foo","stringValue":"string","trueBooleanValue":true,"falseBooleanValue":false,"byteValue":1,"shortValue":2,"integerValue":3,"longValue":4,"floatValue":5.5,"doubleValue":6.5}
     * )" */
    EXPECT_EQ(R"(Foo)", result.GetFoo());
    EXPECT_EQ(R"(string)", result.GetStringValue());
    EXPECT_EQ(true, result.GetTrueBooleanValue());
    EXPECT_EQ(false, result.GetFalseBooleanValue());
    EXPECT_EQ(1, result.GetByteValue());
    EXPECT_EQ(2, result.GetShortValue());
    EXPECT_EQ(3, result.GetIntegerValue());
    EXPECT_EQ(4, result.GetLongValue());
    EXPECT_EQ(5.5, result.GetFloatValue());
    EXPECT_EQ(6.5, result.GetDoubleValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesComplexEscapes) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}, {"X-Foo", R"(Foo)"}};
  mockRs.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXNwb25zZT4KICAgIDxzdHJpbmdWYWx1ZT5lc2NhcGVkIGRhdGE6ICZhbXA7bHQ7JiN4RDsmIzEwOzwvc3RyaW5nVmFsdWU+"
      "CjwvU2ltcGxlU2NhbGFyUHJvcGVydGllc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"foo":"Foo","stringValue":"escaped data: &lt;\r\n"} )" */
    EXPECT_EQ(R"(Foo)", result.GetFoo());
    EXPECT_EQ(R"(escaped data: &lt;
)",
              result.GetStringValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesWithEscapedCharacter) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}, {"X-Foo", R"(Foo)"}};
  mockRs.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXNwb25zZT4KICAgIDxzdHJpbmdWYWx1ZT4mbHQ7c3RyaW5nJmd0Ozwvc3RyaW5nVmFsdWU+"
      "CjwvU2ltcGxlU2NhbGFyUHJvcGVydGllc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"foo":"Foo","stringValue":"<string>"} )" */
    EXPECT_EQ(R"(Foo)", result.GetFoo());
    EXPECT_EQ(R"(<string>)", result.GetStringValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesWithXMLPreamble) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}, {"X-Foo", R"(Foo)"}};
  mockRs.body =
      "PD94bWwgdmVyc2lvbiA9ICIxLjAiIGVuY29kaW5nID0gIlVURi04Ij8+CjxTaW1wbGVTY2FsYXJQcm9wZXJ0aWVzUmVzcG9uc2U+"
      "CiAgICA8IVtDREFUQVtjaGFyYWN0ZXJzIHJlcHJlc2VudGluZyBDREFUQV1dPgogICAgPHN0cmluZ1ZhbHVlPnN0cmluZzwvc3RyaW5nVmFsdWU+"
      "CiAgICA8IS0teG1sIGNvbW1lbnQtLT4KPC9TaW1wbGVTY2FsYXJQcm9wZXJ0aWVzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"foo":"Foo","stringValue":"string"} )" */
    EXPECT_EQ(R"(Foo)", result.GetFoo());
    EXPECT_EQ(R"(string)", result.GetStringValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesWithWhiteSpace) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}, {"X-Foo", R"(Foo)"}};
  mockRs.body =
      "PD94bWwgdmVyc2lvbiA9ICIxLjAiIGVuY29kaW5nID0gIlVURi04Ij8+CjxTaW1wbGVTY2FsYXJQcm9wZXJ0aWVzUmVzcG9uc2U+CiAgICA8c3RyaW5nVmFsdWU+"
      "IHN0cmluZyB3aXRoIHdoaXRlICAgIHNwYWNlIDwvc3RyaW5nVmFsdWU+CjwvU2ltcGxlU2NhbGFyUHJvcGVydGllc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"foo":"Foo","stringValue":" string with white    space "} )" */
    EXPECT_EQ(R"(Foo)", result.GetFoo());
    EXPECT_EQ(R"( string with white    space )", result.GetStringValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, SimpleScalarPropertiesPureWhiteSpace) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}, {"X-Foo", R"(Foo)"}};
  mockRs.body =
      "PD94bWwgdmVyc2lvbiA9ICIxLjAiIGVuY29kaW5nID0gIlVURi04Ij8+CjxTaW1wbGVTY2FsYXJQcm9wZXJ0aWVzUmVzcG9uc2U+CiAgICA8c3RyaW5nVmFsdWU+"
      "ICA8L3N0cmluZ1ZhbHVlPgo8L1NpbXBsZVNjYWxhclByb3BlcnRpZXNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"foo":"Foo","stringValue":"  "} )" */
    EXPECT_EQ(R"(Foo)", result.GetFoo());
    EXPECT_EQ(R"(  )", result.GetStringValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestXmlSupportsNaNFloatOutputs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXNwb25zZT4KICAgIDxmbG9hdFZhbHVlPk5hTjwvZmxvYXRWYWx1ZT4KICAgIDxEb3VibGVEcmliYmxlPk5hTjwvRG91YmxlRHJp"
      "YmJsZT4KPC9TaW1wbGVTY2FsYXJQcm9wZXJ0aWVzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"floatValue":"NaN","doubleValue":"NaN"} )" */
    EXPECT_TRUE(std::isnan(result.GetFloatValue()));
    EXPECT_TRUE(std::isnan(result.GetDoubleValue()));
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestXmlSupportsInfinityFloatOutputs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXNwb25zZT4KICAgIDxmbG9hdFZhbHVlPkluZmluaXR5PC9mbG9hdFZhbHVlPgogICAgPERvdWJsZURyaWJibGU+"
      "SW5maW5pdHk8L0RvdWJsZURyaWJibGU+CjwvU2ltcGxlU2NhbGFyUHJvcGVydGllc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"floatValue":"Infinity","doubleValue":"Infinity"} )" */
    EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetFloatValue());
    EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetDoubleValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestXmlSupportsNegativeInfinityFloatOutputs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFNpbXBsZVNjYWxhclByb3BlcnRpZXNSZXNwb25zZT4KICAgIDxmbG9hdFZhbHVlPi1JbmZpbml0eTwvZmxvYXRWYWx1ZT4KICAgIDxEb3VibGVEcmliYmxlPi1JbmZpbml0"
      "eTwvRG91YmxlRHJpYmJsZT4KPC9TaW1wbGVTY2FsYXJQcm9wZXJ0aWVzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"floatValue":"-Infinity","doubleValue":"-Infinity"} )" */
    EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetFloatValue());
    EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetDoubleValue());
  });
}
