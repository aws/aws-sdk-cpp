/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/QueryListsRequest.h>

using QueryLists = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(QueryLists, QueryLists) {
  QueryProtocolClient client;
  QueryListsRequest request;
  request.SetListArg({R"(foo)", R"(bar)", R"(baz)"});
  {
    GreetingStruct requestComplexListArgItem;
    requestComplexListArgItem.SetHi(R"(hello)");
    request.AddComplexListArg(requestComplexListArgItem);
  }
  {
    GreetingStruct requestComplexListArgItem;
    requestComplexListArgItem.SetHi(R"(hola)");
    request.AddComplexListArg(requestComplexListArgItem);
  }

  auto outcome = client.QueryLists(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryLists, EmptyQueryLists) {
  QueryProtocolClient client;
  QueryListsRequest request;
  request.SetListArg({});

  auto outcome = client.QueryLists(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryLists, FlattenedQueryLists) {
  QueryProtocolClient client;
  QueryListsRequest request;
  request.SetFlattenedListArg({R"(A)", R"(B)"});

  auto outcome = client.QueryLists(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryLists, QueryListArgWithXmlNameMember) {
  QueryProtocolClient client;
  QueryListsRequest request;
  request.SetListArgWithXmlNameMember({R"(A)", R"(B)"});

  auto outcome = client.QueryLists(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryLists, QueryFlattenedListArgWithXmlName) {
  QueryProtocolClient client;
  QueryListsRequest request;
  request.SetFlattenedListArgWithXmlName({R"(A)", R"(B)"});

  auto outcome = client.QueryLists(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryLists, QueryNestedStructWithList) {
  QueryProtocolClient client;
  QueryListsRequest request;
  {
    NestedStructWithList requestNestedWithList;
    requestNestedWithList.SetListArg({R"(A)", R"(B)"});
    request.SetNestedWithList(requestNestedWithList);
  }

  auto outcome = client.QueryLists(request);
  AWS_ASSERT_SUCCESS(outcome);
}
