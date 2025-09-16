/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlLists = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlLists, QueryXmlLists) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFhtbExpc3RzUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxYbWxMaXN0c1Jlc3VsdD4KICAgICAgICA8c3RyaW5nTGlzdD4KICAgICAgICAg"
      "ICAgPG1lbWJlcj5mb288L21lbWJlcj4KICAgICAgICAgICAgPG1lbWJlcj5iYXI8L21lbWJlcj4KICAgICAgICA8L3N0cmluZ0xpc3Q+"
      "CiAgICAgICAgPHN0cmluZ1NldD4KICAgICAgICAgICAgPG1lbWJlcj5mb288L21lbWJlcj4KICAgICAgICAgICAgPG1lbWJlcj5iYXI8L21lbWJlcj4KICAgICAgICA8L3N0"
      "cmluZ1NldD4KICAgICAgICA8aW50ZWdlckxpc3Q+CiAgICAgICAgICAgIDxtZW1iZXI+"
      "MTwvbWVtYmVyPgogICAgICAgICAgICA8bWVtYmVyPjI8L21lbWJlcj4KICAgICAgICA8L2ludGVnZXJMaXN0PgogICAgICAgIDxib29sZWFuTGlzdD4KICAgICAgICAgICAg"
      "PG1lbWJlcj50cnVlPC9tZW1iZXI+CiAgICAgICAgICAgIDxtZW1iZXI+"
      "ZmFsc2U8L21lbWJlcj4KICAgICAgICA8L2Jvb2xlYW5MaXN0PgogICAgICAgIDx0aW1lc3RhbXBMaXN0PgogICAgICAgICAgICA8bWVtYmVyPjIwMTQtMDQtMjlUMTg6MzA6"
      "MzhaPC9tZW1iZXI+CiAgICAgICAgICAgIDxtZW1iZXI+MjAxNC0wNC0yOVQxODozMDozOFo8L21lbWJlcj4KICAgICAgICA8L3RpbWVzdGFtcExpc3Q+"
      "CiAgICAgICAgPGVudW1MaXN0PgogICAgICAgICAgICA8bWVtYmVyPkZvbzwvbWVtYmVyPgogICAgICAgICAgICA8bWVtYmVyPjA8L21lbWJlcj4KICAgICAgICA8L2VudW1M"
      "aXN0PgogICAgICAgIDxpbnRFbnVtTGlzdD4KICAgICAgICAgICAgPG1lbWJlcj4xPC9tZW1iZXI+CiAgICAgICAgICAgIDxtZW1iZXI+"
      "MjwvbWVtYmVyPgogICAgICAgIDwvaW50RW51bUxpc3Q+CiAgICAgICAgPG5lc3RlZFN0cmluZ0xpc3Q+CiAgICAgICAgICAgIDxtZW1iZXI+"
      "CiAgICAgICAgICAgICAgICA8bWVtYmVyPmZvbzwvbWVtYmVyPgogICAgICAgICAgICAgICAgPG1lbWJlcj5iYXI8L21lbWJlcj4KICAgICAgICAgICAgPC9tZW1iZXI+"
      "CiAgICAgICAgICAgIDxtZW1iZXI+"
      "CiAgICAgICAgICAgICAgICA8bWVtYmVyPmJhejwvbWVtYmVyPgogICAgICAgICAgICAgICAgPG1lbWJlcj5xdXg8L21lbWJlcj4KICAgICAgICAgICAgPC9tZW1iZXI+"
      "CiAgICAgICAgPC9uZXN0ZWRTdHJpbmdMaXN0PgogICAgICAgIDxyZW5hbWVkPgogICAgICAgICAgICA8aXRlbT5mb288L2l0ZW0+"
      "CiAgICAgICAgICAgIDxpdGVtPmJhcjwvaXRlbT4KICAgICAgICA8L3JlbmFtZWQ+CiAgICAgICAgPGZsYXR0ZW5lZExpc3Q+aGk8L2ZsYXR0ZW5lZExpc3Q+"
      "CiAgICAgICAgPGZsYXR0ZW5lZExpc3Q+"
      "YnllPC9mbGF0dGVuZWRMaXN0PgogICAgICAgIDxjdXN0b21OYW1lPnllcDwvY3VzdG9tTmFtZT4KICAgICAgICA8Y3VzdG9tTmFtZT5ub3BlPC9jdXN0b21OYW1lPgogICAg"
      "ICAgIDxmbGF0dGVuZWRMaXN0V2l0aE1lbWJlck5hbWVzcGFjZSB4bWxucz0iaHR0cHM6Ly94bWwtbWVtYmVyLmV4YW1wbGUuY29tIj5hPC9mbGF0dGVuZWRMaXN0V2l0aE1l"
      "bWJlck5hbWVzcGFjZT4KICAgICAgICA8ZmxhdHRlbmVkTGlzdFdpdGhNZW1iZXJOYW1lc3BhY2UgeG1sbnM9Imh0dHBzOi8veG1sLW1lbWJlci5leGFtcGxlLmNvbSI+"
      "YjwvZmxhdHRlbmVkTGlzdFdpdGhNZW1iZXJOYW1lc3BhY2U+"
      "CiAgICAgICAgPGZsYXR0ZW5lZExpc3RXaXRoTmFtZXNwYWNlPmE8L2ZsYXR0ZW5lZExpc3RXaXRoTmFtZXNwYWNlPgogICAgICAgIDxmbGF0dGVuZWRMaXN0V2l0aE5hbWVz"
      "cGFjZT5iPC9mbGF0dGVuZWRMaXN0V2l0aE5hbWVzcGFjZT4KICAgICAgICA8bXlTdHJ1Y3R1cmVMaXN0PgogICAgICAgICAgICA8aXRlbT4KICAgICAgICAgICAgICAgIDx2"
      "YWx1ZT4xPC92YWx1ZT4KICAgICAgICAgICAgICAgIDxvdGhlcj4yPC9vdGhlcj4KICAgICAgICAgICAgPC9pdGVtPgogICAgICAgICAgICA8aXRlbT4KICAgICAgICAgICAg"
      "ICAgIDx2YWx1ZT4zPC92YWx1ZT4KICAgICAgICAgICAgICAgIDxvdGhlcj40PC9vdGhlcj4KICAgICAgICAgICAgPC9pdGVtPgogICAgICAgIDwvbXlTdHJ1Y3R1cmVMaXN0"
      "PgogICAgPC9YbWxMaXN0c1Jlc3VsdD4KPC9YbWxMaXN0c1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlListsRequest request;

  auto outcome = client.XmlLists(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlListsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"stringList":["foo","bar"],"stringSet":["foo","bar"],"integerList":[1,2],"booleanList":[true,false],"timestampList":[1398796238,1398796238],"enumList":["Foo","0"],"intEnumList":[1,2],"nestedStringList":[["foo","bar"],["baz","qux"]],"renamedListMembers":["foo","bar"],"flattenedList":["hi","bye"],"flattenedList2":["yep","nope"],"flattenedListWithMemberNamespace":["a","b"],"flattenedListWithNamespace":["a","b"],"structureList":[{"a":"1","b":"2"},{"a":"3","b":"4"}]}
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
    const Aws::Vector<Aws::String>& resultRenamedListMembersItem = result.GetRenamedListMembers();
    EXPECT_EQ(2U, resultRenamedListMembersItem.size());
    EXPECT_EQ(R"(foo)", resultRenamedListMembersItem.at(0));
    EXPECT_EQ(R"(bar)", resultRenamedListMembersItem.at(1));
    const Aws::Vector<Aws::String>& resultFlattenedListItem = result.GetFlattenedList();
    EXPECT_EQ(2U, resultFlattenedListItem.size());
    EXPECT_EQ(R"(hi)", resultFlattenedListItem.at(0));
    EXPECT_EQ(R"(bye)", resultFlattenedListItem.at(1));
    const Aws::Vector<Aws::String>& resultFlattenedList2Item = result.GetFlattenedList2();
    EXPECT_EQ(2U, resultFlattenedList2Item.size());
    EXPECT_EQ(R"(yep)", resultFlattenedList2Item.at(0));
    EXPECT_EQ(R"(nope)", resultFlattenedList2Item.at(1));
    const Aws::Vector<Aws::String>& resultFlattenedListWithMemberNamespaceItem = result.GetFlattenedListWithMemberNamespace();
    EXPECT_EQ(2U, resultFlattenedListWithMemberNamespaceItem.size());
    EXPECT_EQ(R"(a)", resultFlattenedListWithMemberNamespaceItem.at(0));
    EXPECT_EQ(R"(b)", resultFlattenedListWithMemberNamespaceItem.at(1));
    const Aws::Vector<Aws::String>& resultFlattenedListWithNamespaceItem = result.GetFlattenedListWithNamespace();
    EXPECT_EQ(2U, resultFlattenedListWithNamespaceItem.size());
    EXPECT_EQ(R"(a)", resultFlattenedListWithNamespaceItem.at(0));
    EXPECT_EQ(R"(b)", resultFlattenedListWithNamespaceItem.at(1));
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
