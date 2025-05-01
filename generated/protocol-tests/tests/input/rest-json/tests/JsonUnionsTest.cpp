/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonUnionsRequest.h>

using JsonUnions = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeStringUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetStringValue(R"(foo)");
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeBooleanUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetBooleanValue(true);
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeNumberUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetNumberValue(1);
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeBlobUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetBlobValue(Aws::String(R"(foo)"));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeTimestampUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetTimestampValue(Aws::Utils::DateTime(1398796238L));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeEnumUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetEnumValue(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeListUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetListValue({R"(foo)", R"(bar)"});
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeMapUnionValue) {
  RestJsonProtocolClient client;
  JsonUnionsRequest request;
  {
    MyUnion requestContents;
    requestContents.SetMapValue({{"foo",  R"(bar)"}, {"spam",  R"(eggs)"}});
    request.SetContents(requestContents);
  }

  auto outcome = client.JsonUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeStructureUnionValue) {
  RestJsonProtocolClient client;
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

AWS_PROTOCOL_TEST(JsonUnions, RestJsonSerializeRenamedStructureUnionValue) {
  RestJsonProtocolClient client;
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
  AWS_ASSERT_SUCCESS(outcome);
}
