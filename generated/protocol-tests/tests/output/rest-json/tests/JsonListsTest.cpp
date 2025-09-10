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

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body =
      "ewogICAgInN0cmluZ0xpc3QiOiBbCiAgICAgICAgImZvbyIsCiAgICAgICAgImJhciIKICAgIF0sCiAgICAic3RyaW5nU2V0IjogWwogICAgICAgICJmb28iLAogICAgICAg"
      "ICJiYXIiCiAgICBdLAogICAgImludGVnZXJMaXN0IjogWwogICAgICAgIDEsCiAgICAgICAgMgogICAgXSwKICAgICJib29sZWFuTGlzdCI6IFsKICAgICAgICB0cnVlLAog"
      "ICAgICAgIGZhbHNlCiAgICBdLAogICAgInRpbWVzdGFtcExpc3QiOiBbCiAgICAgICAgMTM5ODc5NjIzOCwKICAgICAgICAxMzk4Nzk2MjM4CiAgICBdLAogICAgImVudW1M"
      "aXN0IjogWwogICAgICAgICJGb28iLAogICAgICAgICIwIgogICAgXSwKICAgICJpbnRFbnVtTGlzdCI6IFsKICAgICAgICAxLAogICAgICAgIDIKICAgIF0sCiAgICAibmVz"
      "dGVkU3RyaW5nTGlzdCI6IFsKICAgICAgICBbCiAgICAgICAgICAgICJmb28iLAogICAgICAgICAgICAiYmFyIgogICAgICAgIF0sCiAgICAgICAgWwogICAgICAgICAgICAi"
      "YmF6IiwKICAgICAgICAgICAgInF1eCIKICAgICAgICBdCiAgICBdLAogICAgIm15U3RydWN0dXJlTGlzdCI6IFsKICAgICAgICB7CiAgICAgICAgICAgICJ2YWx1ZSI6ICIx"
      "IiwKICAgICAgICAgICAgIm90aGVyIjogIjIiCiAgICAgICAgfSwKICAgICAgICB7CiAgICAgICAgICAgICJ2YWx1ZSI6ICIzIiwKICAgICAgICAgICAgIm90aGVyIjogIjQi"
      "CiAgICAgICAgfQogICAgXQp9";
  SetMockResponse(mockRs);

  JsonListsRequest request;

  auto outcome = client.JsonLists(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonListsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"stringList":["foo","bar"],"stringSet":["foo","bar"],"integerList":[1,2],"booleanList":[true,false],"timestampList":[1398796238,1398796238],"enumList":["Foo","0"],"intEnumList":[1,2],"nestedStringList":[["foo","bar"],["baz","qux"]],"structureList":[{"a":"1","b":"2"},{"a":"3","b":"4"}]}
     * )" */
    const Aws::Vector<Aws::String>& resultStringListItem = result.GetStringList();
    EXPECT_EQ(2U, resultStringListItem.size());
    EXPECT_EQ(R"(foo)", resultStringListItem.at(0));
    EXPECT_EQ(R"(bar)", resultStringListItem.at(1));
    const Aws::Vector<Aws::String>& resultStringSetItem = result.GetStringSet();
    EXPECT_EQ(2U, resultStringSetItem.size());
    EXPECT_EQ(R"(foo)", resultStringSetItem.at(0));
    EXPECT_EQ(R"(bar)", resultStringSetItem.at(1));
    const Aws::Vector<int>& resultIntegerListItem = result.GetIntegerList();
    EXPECT_EQ(2U, resultIntegerListItem.size());
    EXPECT_EQ(1, resultIntegerListItem.at(0));
    EXPECT_EQ(2, resultIntegerListItem.at(1));
    const Aws::Vector<bool>& resultBooleanListItem = result.GetBooleanList();
    EXPECT_EQ(2U, resultBooleanListItem.size());
    EXPECT_EQ(true, resultBooleanListItem.at(0));
    EXPECT_EQ(false, resultBooleanListItem.at(1));
    const Aws::Vector<Aws::Utils::DateTime>& resultTimestampListItem = result.GetTimestampList();
    EXPECT_EQ(2U, resultTimestampListItem.size());
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)), resultTimestampListItem.at(0));
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1398796238)), resultTimestampListItem.at(1));
    const Aws::Vector<FooEnum>& resultEnumListItem = result.GetEnumList();
    EXPECT_EQ(2U, resultEnumListItem.size());
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), resultEnumListItem.at(0));
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(0)e"), resultEnumListItem.at(1));
    const Aws::Vector<int>& resultIntEnumListItem = result.GetIntEnumList();
    EXPECT_EQ(2U, resultIntEnumListItem.size());
    EXPECT_EQ(1, resultIntEnumListItem.at(0));
    EXPECT_EQ(2, resultIntEnumListItem.at(1));
    EXPECT_EQ(2U, result.GetNestedStringList().size());
    {
      const Aws::Vector<Aws::String>& resultNestedStringListItem = result.GetNestedStringList().at(0);
      EXPECT_EQ(2U, resultNestedStringListItem.size());
      EXPECT_EQ(R"(foo)", resultNestedStringListItem.at(0));
      EXPECT_EQ(R"(bar)", resultNestedStringListItem.at(1));
    }
    {
      const Aws::Vector<Aws::String>& resultNestedStringListItem = result.GetNestedStringList().at(1);
      EXPECT_EQ(2U, resultNestedStringListItem.size());
      EXPECT_EQ(R"(baz)", resultNestedStringListItem.at(0));
      EXPECT_EQ(R"(qux)", resultNestedStringListItem.at(1));
    }
    EXPECT_EQ(2U, result.GetStructureList().size());
    {
      const StructureListMember& resultStructureListItem = result.GetStructureList().at(0);
      EXPECT_EQ(R"(1)", resultStructureListItem.GetA());
      EXPECT_EQ(R"(2)", resultStructureListItem.GetB());
    }
    {
      const StructureListMember& resultStructureListItem = result.GetStructureList().at(1);
      EXPECT_EQ(R"(3)", resultStructureListItem.GetA());
      EXPECT_EQ(R"(4)", resultStructureListItem.GetB());
    }
  });
}

AWS_PROTOCOL_TEST(JsonLists, RestJsonListsEmpty) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInN0cmluZ0xpc3QiOiBbXQp9";
  SetMockResponse(mockRs);

  JsonListsRequest request;

  auto outcome = client.JsonLists(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const JsonListsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"stringList":[]} )" */
    const Aws::Vector<Aws::String>& resultStringListItem = result.GetStringList();
    EXPECT_EQ(0U, resultStringListItem.size());
  });
}
