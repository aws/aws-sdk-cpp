/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/model/JsonUnionsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonUnions = AWS_PROTOCOL_TEST_SUITE;
using JSONRPC10Client = Aws::JSONRPC10::JSONRPC10Client;
using namespace Aws::JSONRPC10::Model;

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeStringUnionValue) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetStringValue(R"(foo)");
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJzdHJpbmdWYWx1ZSI6ICJmb28iCiAgICB9Cn0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.JsonUnions)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeBooleanUnionValue) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetBooleanValue(true);
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJib29sZWFuVmFsdWUiOiB0cnVlCiAgICB9Cn0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.JsonUnions)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeNumberUnionValue) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetNumberValue(1);
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJudW1iZXJWYWx1ZSI6IDEKICAgIH0KfQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.JsonUnions)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeBlobUnionValue) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetBlobValue(Aws::String(R"(foo)"));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJibG9iVmFsdWUiOiAiWm05diIKICAgIH0KfQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.JsonUnions)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeTimestampUnionValue) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetTimestampValue(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJ0aW1lc3RhbXBWYWx1ZSI6IDEzOTg3OTYyMzgKICAgIH0KfQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.JsonUnions)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeEnumUnionValue) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetEnumValue(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJlbnVtVmFsdWUiOiAiRm9vIgogICAgfQp9";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.JsonUnions)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeIntEnumUnionValue) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetIntEnumValue(1);
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJpbnRFbnVtVmFsdWUiOiAxCiAgICB9Cn0=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.JsonUnions)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeListUnionValue) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetListValue({R"(foo)", R"(bar)"});
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJsaXN0VmFsdWUiOiBbImZvbyIsICJiYXIiXQogICAgfQp9";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.JsonUnions)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeMapUnionValue) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetMapValue({{"foo", R"(bar)"}, {"spam", R"(eggs)"}});
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJtYXBWYWx1ZSI6IHsKICAgICAgICAgICAgImZvbyI6ICJiYXIiLAogICAgICAgICAgICAic3BhbSI6ICJlZ2dzIgogICAg"
      "ICAgIH0KICAgIH0KfQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.JsonUnions)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeStructureUnionValue) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    {
      GreetingStruct requestContentsStructureValue;
      requestContentsStructureValue.SetHi(R"(hello)");
      requestContents.SetStructureValue(requestContentsStructureValue);
    }
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJzdHJ1Y3R1cmVWYWx1ZSI6IHsKICAgICAgICAgICAgImhpIjogImhlbGxvIgogICAgICAgIH0KICAgIH0KfQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}, {"X-Amz-Target", R"(JsonRpc10.JsonUnions)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
