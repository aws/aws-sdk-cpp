/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/JsonUnionsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonUnions = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeStringUnionValue) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJzdHJpbmdWYWx1ZSI6ICJmb28iCiAgICB9Cn0=";
  SetMockResponse(mockRs);

  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"stringValue":"foo"}} )" */
    {
      const MyUnion& resultContents = result.GetContents();
      EXPECT_EQ(R"(foo)", resultContents.GetStringValue());
    }
  });
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeBooleanUnionValue) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJib29sZWFuVmFsdWUiOiB0cnVlCiAgICB9Cn0=";
  SetMockResponse(mockRs);

  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"booleanValue":true}} )" */
    {
      const MyUnion& resultContents = result.GetContents();
      EXPECT_EQ(true, resultContents.GetBooleanValue());
    }
  });
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeNumberUnionValue) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJudW1iZXJWYWx1ZSI6IDEKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"numberValue":1}} )" */
    {
      const MyUnion& resultContents = result.GetContents();
      EXPECT_EQ(1, resultContents.GetNumberValue());
    }
  });
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeBlobUnionValue) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJibG9iVmFsdWUiOiAiWm05diIKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"blobValue":"foo"}} )" */
    {
      const MyUnion& resultContents = result.GetContents();
      EXPECT_EQ(Aws::Utils::ByteBuffer(R"(foo)"), resultContents.GetBlobValue());
    }
  });
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeTimestampUnionValue) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJ0aW1lc3RhbXBWYWx1ZSI6IDEzOTg3OTYyMzgKICAgIH0KfQ==";
  SetMockResponse(mockRs);

  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"timestampValue":1398796238}} )" */
    {
      const MyUnion& resultContents = result.GetContents();
      EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)), resultContents.GetTimestampValue());
    }
  });
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeEnumUnionValue) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJlbnVtVmFsdWUiOiAiRm9vIgogICAgfQp9";
  SetMockResponse(mockRs);

  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"enumValue":"Foo"}} )" */
    {
      const MyUnion& resultContents = result.GetContents();
      EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), resultContents.GetEnumValue());
    }
  });
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeListUnionValue) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJsaXN0VmFsdWUiOiBbImZvbyIsICJiYXIiXQogICAgfQp9";
  SetMockResponse(mockRs);

  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"listValue":["foo","bar"]}} )" */
    {
      const MyUnion& resultContents = result.GetContents();
      const Aws::Vector<Aws::String>& resultContentsListValueItem = resultContents.GetListValue();
      EXPECT_EQ(2U, resultContentsListValueItem.size());
      EXPECT_EQ(R"(foo)", resultContentsListValueItem.at(0));
      EXPECT_EQ(R"(bar)", resultContentsListValueItem.at(1));
    }
  });
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeMapUnionValue) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body =
      "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJtYXBWYWx1ZSI6IHsKICAgICAgICAgICAgImZvbyI6ICJiYXIiLAogICAgICAgICAgICAic3BhbSI6ICJlZ2dzIgogICAg"
      "ICAgIH0KICAgIH0KfQ==";
  SetMockResponse(mockRs);

  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"mapValue":{"foo":"bar","spam":"eggs"}}} )" */
    {
      const MyUnion& resultContents = result.GetContents();
      const Aws::Map<Aws::String, Aws::String>& resultContentsMapValue = resultContents.GetMapValue();
      EXPECT_EQ(2U, resultContentsMapValue.size());
      EXPECT_TRUE(resultContentsMapValue.find("foo") != resultContentsMapValue.end());
      EXPECT_EQ(R"(bar)", resultContentsMapValue.at("foo"));
      EXPECT_TRUE(resultContentsMapValue.find("spam") != resultContentsMapValue.end());
      EXPECT_EQ(R"(eggs)", resultContentsMapValue.at("spam"));
    }
  });
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeStructureUnionValue) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body =
      "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJzdHJ1Y3R1cmVWYWx1ZSI6IHsKICAgICAgICAgICAgImhpIjogImhlbGxvIgogICAgICAgIH0KICAgIH0KfQ==";
  SetMockResponse(mockRs);

  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"structureValue":{"hi":"hello"}}} )" */
    {
      const MyUnion& resultContents = result.GetContents();
      {
        const GreetingStruct& resultContentsStructureValue = resultContents.GetStructureValue();
        EXPECT_EQ(R"(hello)", resultContentsStructureValue.GetHi());
      }
    }
  });
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11DeserializeIgnoreType) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body =
      "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJfX3R5cGUiOiAiYXdzLnByb3RvY29sdGVzdHMuanNvbjEwI015VW5pb24iLAogICAgICAgICJzdHJ1Y3R1cmVWYWx1ZSI6"
      "IHsKICAgICAgICAgICAgImhpIjogImhlbGxvIgogICAgICAgIH0KICAgIH0KfQ==";
  SetMockResponse(mockRs);

  JsonUnionsRequest request;

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonUnionsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"contents":{"structureValue":{"hi":"hello"}}} )" */
    {
      const MyUnion& resultContents = result.GetContents();
      {
        const GreetingStruct& resultContentsStructureValue = resultContents.GetStructureValue();
        EXPECT_EQ(R"(hello)", resultContentsStructureValue.GetHi());
      }
    }
  });
}
