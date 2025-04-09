/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlListsRequest.h>

using XmlLists = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlLists, XmlLists) {
  RestXmlProtocolClient client;
  XmlListsRequest request;
  request.SetStringList({R"(foo)", R"(bar)"});
  request.SetStringSet({R"(foo)", R"(bar)"});
  request.SetIntegerList({1, 2});
  request.SetBooleanList({true, false});
  request.SetTimestampList({Aws::Utils::DateTime(1398796238), Aws::Utils::DateTime(1398796238)});
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
  AWS_ASSERT_SUCCESS(outcome);
}
