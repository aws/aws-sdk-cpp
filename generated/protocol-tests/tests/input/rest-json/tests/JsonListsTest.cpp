/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonListsRequest.h>

using JsonLists = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonLists, RestJsonLists) {
  RestJsonProtocolClient client;
  JsonListsRequest request;
  request.SetStringList({R"(foo)", R"(bar)"});
  request.SetStringSet({R"(foo)", R"(bar)"});
  request.SetIntegerList({1, 2});
  request.SetBooleanList({true, false});
  request.SetTimestampList({Aws::Utils::DateTime(1398796238L), Aws::Utils::DateTime(1398796238L)});
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
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(JsonLists, RestJsonListsEmpty) {
  RestJsonProtocolClient client;
  JsonListsRequest request;
  request.SetStringList({});

  auto outcome = client.JsonLists(request);
  AWS_ASSERT_SUCCESS(outcome);
}
