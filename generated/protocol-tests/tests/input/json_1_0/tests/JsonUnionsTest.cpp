/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/model/JsonUnionsRequest.h>

using JsonUnions = AWS_PROTOCOL_TEST_SUITE;
using JSONRPC10Client = Aws::JSONRPC10::JSONRPC10Client;
using namespace Aws::JSONRPC10::Model;

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeStringUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetStringValue(R"(foo)");
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeBooleanUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetBooleanValue(true);
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeNumberUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetNumberValue(1);
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeBlobUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetBlobValue(R"(foo)");
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeTimestampUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetTimestampValue(Aws::Utils::DateTime(1398796238));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeEnumUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetEnumValue(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeIntEnumUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetIntEnumValue(1);
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeListUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetListValue({R"(foo)", R"(bar)"});
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeMapUnionValue) {
  JSONRPC10Client client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetMapValue({{"foo",  R"(bar)"}, {"spam",  R"(eggs)"}});
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson10SerializeStructureUnionValue) {
  JSONRPC10Client client;
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
  AWS_ASSERT_SUCCESS(outcome);
}
