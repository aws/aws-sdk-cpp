/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonUnionsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonUnions = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeStringUnionValue) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetStringValue(R"(foo)");
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJzdHJpbmdWYWx1ZSI6ICJmb28iCiAgICB9Cn0=";
  expectedRq.uri = "/JsonUnions";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeBooleanUnionValue) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetBooleanValue(true);
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJib29sZWFuVmFsdWUiOiB0cnVlCiAgICB9Cn0=";
  expectedRq.uri = "/JsonUnions";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeNumberUnionValue) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetNumberValue(1);
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJudW1iZXJWYWx1ZSI6IDEKICAgIH0KfQ==";
  expectedRq.uri = "/JsonUnions";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeBlobUnionValue) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetBlobValue(Aws::String(R"(foo)"));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJibG9iVmFsdWUiOiAiWm05diIKICAgIH0KfQ==";
  expectedRq.uri = "/JsonUnions";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeTimestampUnionValue) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetTimestampValue(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJ0aW1lc3RhbXBWYWx1ZSI6IDEzOTg3OTYyMzgKICAgIH0KfQ==";
  expectedRq.uri = "/JsonUnions";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeEnumUnionValue) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetEnumValue(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJlbnVtVmFsdWUiOiAiRm9vIgogICAgfQp9";
  expectedRq.uri = "/JsonUnions";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeListUnionValue) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetListValue({R"(foo)", R"(bar)"});
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJsaXN0VmFsdWUiOiBbImZvbyIsICJiYXIiXQogICAgfQp9";
  expectedRq.uri = "/JsonUnions";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeMapUnionValue) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetMapValue({{"foo", R"(bar)"}, {"spam", R"(eggs)"}});
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJtYXBWYWx1ZSI6IHsKICAgICAgICAgICAgImZvbyI6ICJiYXIiLAogICAgICAgICAgICAic3BhbSI6ICJlZ2dzIgogICAg"
      "ICAgIH0KICAgIH0KfQ==";
  expectedRq.uri = "/JsonUnions";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeStructureUnionValue) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

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
  expectedRq.method = "PUT";
  expectedRq.body =
      "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJzdHJ1Y3R1cmVWYWx1ZSI6IHsKICAgICAgICAgICAgImhpIjogImhlbGxvIgogICAgICAgIH0KICAgIH0KfQ==";
  expectedRq.uri = "/JsonUnions";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeRenamedStructureUnionValue) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    {
      RenamedGreeting requestContentsRenamedStructureValue;
      requestContentsRenamedStructureValue.SetSalutation(R"(hello!)");
      requestContents.SetRenamedStructureValue(requestContentsRenamedStructureValue);
    }
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "ewogICAgImNvbnRlbnRzIjogewogICAgICAgICJyZW5hbWVkU3RydWN0dXJlVmFsdWUiOiB7CiAgICAgICAgICAgICJzYWx1dGF0aW9uIjogImhlbGxvISIKICAgICAgICB9"
      "CiAgICB9Cn0=";
  expectedRq.uri = "/JsonUnions";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
