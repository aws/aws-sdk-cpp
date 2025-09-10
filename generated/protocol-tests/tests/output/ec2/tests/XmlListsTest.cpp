/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/XmlListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlLists = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(XmlLists, Ec2XmlLists) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFhtbExpc3RzUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxzdHJpbmdMaXN0PgogICAgICAgIDxtZW1iZXI+Zm9vPC9tZW1iZXI+"
      "CiAgICAgICAgPG1lbWJlcj5iYXI8L21lbWJlcj4KICAgIDwvc3RyaW5nTGlzdD4KICAgIDxzdHJpbmdTZXQ+"
      "CiAgICAgICAgPG1lbWJlcj5mb288L21lbWJlcj4KICAgICAgICA8bWVtYmVyPmJhcjwvbWVtYmVyPgogICAgPC9zdHJpbmdTZXQ+CiAgICA8aW50ZWdlckxpc3Q+"
      "CiAgICAgICAgPG1lbWJlcj4xPC9tZW1iZXI+CiAgICAgICAgPG1lbWJlcj4yPC9tZW1iZXI+"
      "CiAgICA8L2ludGVnZXJMaXN0PgogICAgPGJvb2xlYW5MaXN0PgogICAgICAgIDxtZW1iZXI+dHJ1ZTwvbWVtYmVyPgogICAgICAgIDxtZW1iZXI+"
      "ZmFsc2U8L21lbWJlcj4KICAgIDwvYm9vbGVhbkxpc3Q+CiAgICA8dGltZXN0YW1wTGlzdD4KICAgICAgICA8bWVtYmVyPjIwMTQtMDQtMjlUMTg6MzA6MzhaPC9tZW1iZXI+"
      "CiAgICAgICAgPG1lbWJlcj4yMDE0LTA0LTI5VDE4OjMwOjM4WjwvbWVtYmVyPgogICAgPC90aW1lc3RhbXBMaXN0PgogICAgPGVudW1MaXN0PgogICAgICAgIDxtZW1iZXI+"
      "Rm9vPC9tZW1iZXI+CiAgICAgICAgPG1lbWJlcj4wPC9tZW1iZXI+CiAgICA8L2VudW1MaXN0PgogICAgPGludEVudW1MaXN0PgogICAgICAgIDxtZW1iZXI+"
      "MTwvbWVtYmVyPgogICAgICAgIDxtZW1iZXI+MjwvbWVtYmVyPgogICAgPC9pbnRFbnVtTGlzdD4KICAgIDxuZXN0ZWRTdHJpbmdMaXN0PgogICAgICAgIDxtZW1iZXI+"
      "CiAgICAgICAgICAgIDxtZW1iZXI+Zm9vPC9tZW1iZXI+CiAgICAgICAgICAgIDxtZW1iZXI+YmFyPC9tZW1iZXI+CiAgICAgICAgPC9tZW1iZXI+"
      "CiAgICAgICAgPG1lbWJlcj4KICAgICAgICAgICAgPG1lbWJlcj5iYXo8L21lbWJlcj4KICAgICAgICAgICAgPG1lbWJlcj5xdXg8L21lbWJlcj4KICAgICAgICA8L21lbWJl"
      "cj4KICAgIDwvbmVzdGVkU3RyaW5nTGlzdD4KICAgIDxyZW5hbWVkPgogICAgICAgIDxpdGVtPmZvbzwvaXRlbT4KICAgICAgICA8aXRlbT5iYXI8L2l0ZW0+"
      "CiAgICA8L3JlbmFtZWQ+"
      "CiAgICA8ZmxhdHRlbmVkTGlzdD5oaTwvZmxhdHRlbmVkTGlzdD4KICAgIDxmbGF0dGVuZWRMaXN0PmJ5ZTwvZmxhdHRlbmVkTGlzdD4KICAgIDxjdXN0b21OYW1lPnllcDwv"
      "Y3VzdG9tTmFtZT4KICAgIDxjdXN0b21OYW1lPm5vcGU8L2N1c3RvbU5hbWU+"
      "CiAgICA8ZmxhdHRlbmVkTGlzdFdpdGhNZW1iZXJOYW1lc3BhY2UgeG1sbnM9Imh0dHBzOi8veG1sLW1lbWJlci5leGFtcGxlLmNvbSI+"
      "YTwvZmxhdHRlbmVkTGlzdFdpdGhNZW1iZXJOYW1lc3BhY2U+"
      "CiAgICA8ZmxhdHRlbmVkTGlzdFdpdGhNZW1iZXJOYW1lc3BhY2UgeG1sbnM9Imh0dHBzOi8veG1sLW1lbWJlci5leGFtcGxlLmNvbSI+"
      "YjwvZmxhdHRlbmVkTGlzdFdpdGhNZW1iZXJOYW1lc3BhY2U+CiAgICA8ZmxhdHRlbmVkTGlzdFdpdGhOYW1lc3BhY2U+YTwvZmxhdHRlbmVkTGlzdFdpdGhOYW1lc3BhY2U+"
      "CiAgICA8ZmxhdHRlbmVkTGlzdFdpdGhOYW1lc3BhY2U+YjwvZmxhdHRlbmVkTGlzdFdpdGhOYW1lc3BhY2U+"
      "CiAgICA8bXlTdHJ1Y3R1cmVMaXN0PgogICAgICAgIDxpdGVtPgogICAgICAgICAgICA8dmFsdWU+MTwvdmFsdWU+"
      "CiAgICAgICAgICAgIDxvdGhlcj4yPC9vdGhlcj4KICAgICAgICA8L2l0ZW0+CiAgICAgICAgPGl0ZW0+"
      "CiAgICAgICAgICAgIDx2YWx1ZT4zPC92YWx1ZT4KICAgICAgICAgICAgPG90aGVyPjQ8L290aGVyPgogICAgICAgIDwvaXRlbT4KICAgIDwvbXlTdHJ1Y3R1cmVMaXN0Pgog"
      "ICAgPHJlcXVlc3RJZD5yZXF1ZXN0aWQ8L3JlcXVlc3RJZD4KPC9YbWxMaXN0c1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlListsRequest request;

  auto outcome = client.XmlLists(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlListsResponse& result = outcome.GetResult();
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
