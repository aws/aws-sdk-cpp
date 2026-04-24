/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using JsonLists = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonLists, RestJsonLists) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonListsRequest request;
  request.SetStringList({R"(foo)", R"(bar)"});
  request.SetStringSet({R"(foo)", R"(bar)"});
  request.SetIntegerList({1, 2});
  request.SetBooleanList({true, false});
  request.SetTimestampList(
      {Aws::Utils::DateTime(static_cast<int64_t>(1398796238)), Aws::Utils::DateTime(static_cast<int64_t>(1398796238))});
  request.SetEnumList({FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), FooEnumMapper::GetFooEnumForName(R"e(0)e")});
  request.SetIntEnumList({1, 2});
  {
    Aws::Vector<Aws::String> requestNestedStringListItem;
    requestNestedStringListItem.emplace_back(R"(foo)");
    requestNestedStringListItem.emplace_back(R"(bar)");
    request.AddNestedStringList(requestNestedStringListItem);
  }
  {
    Aws::Vector<Aws::String> requestNestedStringListItem;
    requestNestedStringListItem.emplace_back(R"(baz)");
    requestNestedStringListItem.emplace_back(R"(qux)");
    request.AddNestedStringList(requestNestedStringListItem);
  }
  {
    StructureListMember requestStructureListItem;
    requestStructureListItem.SetA(R"(1)");
    requestStructureListItem.SetB(R"(2)");
    request.AddStructureList(requestStructureListItem);
  }
  {
    StructureListMember requestStructureListItem;
    requestStructureListItem.SetA(R"(3)");
    requestStructureListItem.SetB(R"(4)");
    request.AddStructureList(requestStructureListItem);
  }

  auto outcome = client.JsonLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "ewogICAgInN0cmluZ0xpc3QiOiBbCiAgICAgICAgImZvbyIsCiAgICAgICAgImJhciIKICAgIF0sCiAgICAic3RyaW5nU2V0IjogWwogICAgICAgICJmb28iLAogICAgICAg"
      "ICJiYXIiCiAgICBdLAogICAgImludGVnZXJMaXN0IjogWwogICAgICAgIDEsCiAgICAgICAgMgogICAgXSwKICAgICJib29sZWFuTGlzdCI6IFsKICAgICAgICB0cnVlLAog"
      "ICAgICAgIGZhbHNlCiAgICBdLAogICAgInRpbWVzdGFtcExpc3QiOiBbCiAgICAgICAgMTM5ODc5NjIzOCwKICAgICAgICAxMzk4Nzk2MjM4CiAgICBdLAogICAgImVudW1M"
      "aXN0IjogWwogICAgICAgICJGb28iLAogICAgICAgICIwIgogICAgXSwKICAgICJpbnRFbnVtTGlzdCI6IFsKICAgICAgICAxLAogICAgICAgIDIKICAgIF0sCiAgICAibmVz"
      "dGVkU3RyaW5nTGlzdCI6IFsKICAgICAgICBbCiAgICAgICAgICAgICJmb28iLAogICAgICAgICAgICAiYmFyIgogICAgICAgIF0sCiAgICAgICAgWwogICAgICAgICAgICAi"
      "YmF6IiwKICAgICAgICAgICAgInF1eCIKICAgICAgICBdCiAgICBdLAogICAgIm15U3RydWN0dXJlTGlzdCI6IFsKICAgICAgICB7CiAgICAgICAgICAgICJ2YWx1ZSI6ICIx"
      "IiwKICAgICAgICAgICAgIm90aGVyIjogIjIiCiAgICAgICAgfSwKICAgICAgICB7CiAgICAgICAgICAgICJ2YWx1ZSI6ICIzIiwKICAgICAgICAgICAgIm90aGVyIjogIjQi"
      "CiAgICAgICAgfQogICAgXQp9";
  expectedRq.uri = "/JsonLists";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(JsonLists, RestJsonListsEmpty) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  JsonListsRequest request;
  request.SetStringList({});

  auto outcome = client.JsonLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgInN0cmluZ0xpc3QiOiBbXQp9";
  expectedRq.uri = "/JsonLists";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
