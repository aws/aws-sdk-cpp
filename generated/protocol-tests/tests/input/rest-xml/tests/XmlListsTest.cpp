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

  SetMockResponse();

  XmlListsRequest request;
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
  request.SetRenamedListMembers({R"(foo)", R"(bar)"});
  request.SetFlattenedList({R"(hi)", R"(bye)"});
  request.SetFlattenedList2({R"(yep)", R"(nope)"});
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
  {
    StructureListMember requestFlattenedStructureListItem;
    requestFlattenedStructureListItem.SetA(R"(5)");
    requestFlattenedStructureListItem.SetB(R"(6)");
    request.AddFlattenedStructureList(requestFlattenedStructureListItem);
  }
  {
    StructureListMember requestFlattenedStructureListItem;
    requestFlattenedStructureListItem.SetA(R"(7)");
    requestFlattenedStructureListItem.SetB(R"(8)");
    request.AddFlattenedStructureList(requestFlattenedStructureListItem);
  }

  auto outcome = client.XmlLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFhtbExpc3RzUmVxdWVzdD4KICAgIDxzdHJpbmdMaXN0PgogICAgICAgIDxtZW1iZXI+Zm9vPC9tZW1iZXI+"
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
      "CiAgICA8bXlTdHJ1Y3R1cmVMaXN0PgogICAgICAgIDxpdGVtPgogICAgICAgICAgICA8dmFsdWU+MTwvdmFsdWU+"
      "CiAgICAgICAgICAgIDxvdGhlcj4yPC9vdGhlcj4KICAgICAgICA8L2l0ZW0+CiAgICAgICAgPGl0ZW0+"
      "CiAgICAgICAgICAgIDx2YWx1ZT4zPC92YWx1ZT4KICAgICAgICAgICAgPG90aGVyPjQ8L290aGVyPgogICAgICAgIDwvaXRlbT4KICAgIDwvbXlTdHJ1Y3R1cmVMaXN0Pgog"
      "ICAgPGZsYXR0ZW5lZFN0cnVjdHVyZUxpc3Q+"
      "CiAgICAgICAgPHZhbHVlPjU8L3ZhbHVlPgogICAgICAgIDxvdGhlcj42PC9vdGhlcj4KICAgIDwvZmxhdHRlbmVkU3RydWN0dXJlTGlzdD4KICAgIDxmbGF0dGVuZWRTdHJ1"
      "Y3R1cmVMaXN0PgogICAgICAgIDx2YWx1ZT43PC92YWx1ZT4KICAgICAgICA8b3RoZXI+ODwvb3RoZXI+CiAgICA8L2ZsYXR0ZW5lZFN0cnVjdHVyZUxpc3Q+"
      "CjwvWG1sTGlzdHNSZXF1ZXN0Pgo=";
  expectedRq.uri = "/XmlLists";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
