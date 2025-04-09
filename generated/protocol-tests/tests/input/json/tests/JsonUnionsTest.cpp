/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/JsonUnionsRequest.h>

using JsonUnions = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11SerializeStringUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetStringValue(R"(foo)");
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11SerializeBooleanUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetBooleanValue(true);
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11SerializeNumberUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetNumberValue(1);
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11SerializeBlobUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetBlobValue(R"(foo)");
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11SerializeTimestampUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetTimestampValue(Aws::Utils::DateTime(1398796238));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11SerializeEnumUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetEnumValue(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11SerializeListUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetListValue({R"(foo)", R"(bar)"});
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11SerializeMapUnionValue) {
  JsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetMapValue({{"foo",  R"(bar)"}, {"spam",  R"(eggs)"}});
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, AwsJson11SerializeStructureUnionValue) {
  JsonProtocolClient client;
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
