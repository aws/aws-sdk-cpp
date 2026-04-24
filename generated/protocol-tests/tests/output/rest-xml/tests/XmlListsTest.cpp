/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlLists = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlLists, XmlLists) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFhtbExpc3RzUmVzcG9uc2U+CiAgICA8c3RyaW5nTGlzdD4KICAgICAgICA8bWVtYmVyPmZvbzwvbWVtYmVyPgogICAgICAgIDxtZW1iZXI+YmFyPC9tZW1iZXI+"
      "CiAgICA8L3N0cmluZ0xpc3Q+CiAgICA8c3RyaW5nU2V0PgogICAgICAgIDxtZW1iZXI+Zm9vPC9tZW1iZXI+"
      "CiAgICAgICAgPG1lbWJlcj5iYXI8L21lbWJlcj4KICAgIDwvc3RyaW5nU2V0PgogICAgPGludGVnZXJMaXN0PgogICAgICAgIDxtZW1iZXI+"
      "MTwvbWVtYmVyPgogICAgICAgIDxtZW1iZXI+"
      "MjwvbWVtYmVyPgogICAgPC9pbnRlZ2VyTGlzdD4KICAgIDxib29sZWFuTGlzdD4KICAgICAgICA8bWVtYmVyPnRydWU8L21lbWJlcj4KICAgICAgICA8bWVtYmVyPmZhbHNl"
      "PC9tZW1iZXI+CiAgICA8L2Jvb2xlYW5MaXN0PgogICAgPHRpbWVzdGFtcExpc3Q+"
      "CiAgICAgICAgPG1lbWJlcj4yMDE0LTA0LTI5VDE4OjMwOjM4WjwvbWVtYmVyPgogICAgICAgIDxtZW1iZXI+"
      "MjAxNC0wNC0yOVQxODozMDozOFo8L21lbWJlcj4KICAgIDwvdGltZXN0YW1wTGlzdD4KICAgIDxlbnVtTGlzdD4KICAgICAgICA8bWVtYmVyPkZvbzwvbWVtYmVyPgogICAg"
      "ICAgIDxtZW1iZXI+"
      "MDwvbWVtYmVyPgogICAgPC9lbnVtTGlzdD4KICAgIDxpbnRFbnVtTGlzdD4KICAgICAgICA8bWVtYmVyPjE8L21lbWJlcj4KICAgICAgICA8bWVtYmVyPjI8L21lbWJlcj4K"
      "ICAgIDwvaW50RW51bUxpc3Q+"
      "CiAgICA8bmVzdGVkU3RyaW5nTGlzdD4KICAgICAgICA8bWVtYmVyPgogICAgICAgICAgICA8bWVtYmVyPmZvbzwvbWVtYmVyPgogICAgICAgICAgICA8bWVtYmVyPmJhcjwv"
      "bWVtYmVyPgogICAgICAgIDwvbWVtYmVyPgogICAgICAgIDxtZW1iZXI+CiAgICAgICAgICAgIDxtZW1iZXI+YmF6PC9tZW1iZXI+CiAgICAgICAgICAgIDxtZW1iZXI+"
      "cXV4PC9tZW1iZXI+CiAgICAgICAgPC9tZW1iZXI+CiAgICA8L25lc3RlZFN0cmluZ0xpc3Q+CiAgICA8cmVuYW1lZD4KICAgICAgICA8aXRlbT5mb288L2l0ZW0+"
      "CiAgICAgICAgPGl0ZW0+YmFyPC9pdGVtPgogICAgPC9yZW5hbWVkPgogICAgPGZsYXR0ZW5lZExpc3Q+aGk8L2ZsYXR0ZW5lZExpc3Q+"
      "CiAgICA8ZmxhdHRlbmVkTGlzdD5ieWU8L2ZsYXR0ZW5lZExpc3Q+CiAgICA8Y3VzdG9tTmFtZT55ZXA8L2N1c3RvbU5hbWU+"
      "CiAgICA8Y3VzdG9tTmFtZT5ub3BlPC9jdXN0b21OYW1lPgogICAgPGZsYXR0ZW5lZExpc3RXaXRoTWVtYmVyTmFtZXNwYWNlIHhtbG5zPSJodHRwczovL3htbC1tZW1iZXIu"
      "ZXhhbXBsZS5jb20iPmE8L2ZsYXR0ZW5lZExpc3RXaXRoTWVtYmVyTmFtZXNwYWNlPgogICAgPGZsYXR0ZW5lZExpc3RXaXRoTWVtYmVyTmFtZXNwYWNlIHhtbG5zPSJodHRw"
      "czovL3htbC1tZW1iZXIuZXhhbXBsZS5jb20iPmI8L2ZsYXR0ZW5lZExpc3RXaXRoTWVtYmVyTmFtZXNwYWNlPgogICAgPGZsYXR0ZW5lZExpc3RXaXRoTmFtZXNwYWNlPmE8"
      "L2ZsYXR0ZW5lZExpc3RXaXRoTmFtZXNwYWNlPgogICAgPGZsYXR0ZW5lZExpc3RXaXRoTmFtZXNwYWNlPmI8L2ZsYXR0ZW5lZExpc3RXaXRoTmFtZXNwYWNlPgogICAgPG15"
      "U3RydWN0dXJlTGlzdD4KICAgICAgICA8aXRlbT4KICAgICAgICAgICAgPHZhbHVlPjE8L3ZhbHVlPgogICAgICAgICAgICA8b3RoZXI+Mjwvb3RoZXI+"
      "CiAgICAgICAgPC9pdGVtPgogICAgICAgIDxpdGVtPgogICAgICAgICAgICA8dmFsdWU+MzwvdmFsdWU+"
      "CiAgICAgICAgICAgIDxvdGhlcj40PC9vdGhlcj4KICAgICAgICA8L2l0ZW0+"
      "CiAgICA8L215U3RydWN0dXJlTGlzdD4KICAgIDxmbGF0dGVuZWRTdHJ1Y3R1cmVMaXN0PgogICAgICAgIDx2YWx1ZT41PC92YWx1ZT4KICAgICAgICA8b3RoZXI+"
      "Njwvb3RoZXI+CiAgICA8L2ZsYXR0ZW5lZFN0cnVjdHVyZUxpc3Q+CiAgICA8ZmxhdHRlbmVkU3RydWN0dXJlTGlzdD4KICAgICAgICA8dmFsdWU+NzwvdmFsdWU+"
      "CiAgICAgICAgPG90aGVyPjg8L290aGVyPgogICAgPC9mbGF0dGVuZWRTdHJ1Y3R1cmVMaXN0Pgo8L1htbExpc3RzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlListsRequest request;

  auto outcome = client.XmlLists(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlListsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"stringList":["foo","bar"],"stringSet":["foo","bar"],"integerList":[1,2],"booleanList":[true,false],"timestampList":[1398796238,1398796238],"enumList":["Foo","0"],"intEnumList":[1,2],"nestedStringList":[["foo","bar"],["baz","qux"]],"renamedListMembers":["foo","bar"],"flattenedList":["hi","bye"],"flattenedList2":["yep","nope"],"flattenedListWithMemberNamespace":["a","b"],"flattenedListWithNamespace":["a","b"],"structureList":[{"a":"1","b":"2"},{"a":"3","b":"4"}],"flattenedStructureList":[{"a":"5","b":"6"},{"a":"7","b":"8"}]}
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
    EXPECT_EQ(2U, result.GetFlattenedStructureList().size());
    {
      const StructureListMember& resultFlattenedStructureListItem = result.GetFlattenedStructureList().at(0);
      EXPECT_EQ(R"(5)", resultFlattenedStructureListItem.GetA());
      EXPECT_EQ(R"(6)", resultFlattenedStructureListItem.GetB());
    }
    {
      const StructureListMember& resultFlattenedStructureListItem = result.GetFlattenedStructureList().at(1);
      EXPECT_EQ(R"(7)", resultFlattenedStructureListItem.GetA());
      EXPECT_EQ(R"(8)", resultFlattenedStructureListItem.GetB());
    }
  });
}
