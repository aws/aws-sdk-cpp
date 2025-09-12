/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SimpleScalarProperties = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSimpleScalarProperties) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}, {"X-Foo", R"(Foo)"}};
  mockRs.body =
      "ewogICAgInN0cmluZ1ZhbHVlIjogInN0cmluZyIsCiAgICAidHJ1ZUJvb2xlYW5WYWx1ZSI6IHRydWUsCiAgICAiZmFsc2VCb29sZWFuVmFsdWUiOiBmYWxzZSwKICAgICJi"
      "eXRlVmFsdWUiOiAxLAogICAgInNob3J0VmFsdWUiOiAyLAogICAgImludGVnZXJWYWx1ZSI6IDMsCiAgICAibG9uZ1ZhbHVlIjogNCwKICAgICJmbG9hdFZhbHVlIjogNS41"
      "LAogICAgIkRvdWJsZURyaWJibGUiOiA2LjUKfQ==";
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

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonDoesntDeserializeNullStructureValues) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInN0cmluZ1ZhbHVlIjogbnVsbAp9";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent([](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSupportsNaNFloatInputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImZsb2F0VmFsdWUiOiAiTmFOIiwKICAgICJEb3VibGVEcmliYmxlIjogIk5hTiIKfQ==";
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

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSupportsInfinityFloatInputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImZsb2F0VmFsdWUiOiAiSW5maW5pdHkiLAogICAgIkRvdWJsZURyaWJibGUiOiAiSW5maW5pdHkiCn0=";
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

AWS_PROTOCOL_TEST(SimpleScalarProperties, RestJsonSupportsNegativeInfinityFloatInputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgImZsb2F0VmFsdWUiOiAiLUluZmluaXR5IiwKICAgICJEb3VibGVEcmliYmxlIjogIi1JbmZpbml0eSIKfQ==";
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
