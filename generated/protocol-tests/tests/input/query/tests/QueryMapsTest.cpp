/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/QueryMapsRequest.h>

using QueryMaps = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(QueryMaps, QuerySimpleQueryMaps) {
  QueryProtocolClient client;
  QueryMapsRequest request;
  request.SetMapArg({{"bar",  R"(Bar)"}, {"foo",  R"(Foo)"}});

  auto outcome = client.QueryMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryMaps, QuerySimpleQueryMapsWithXmlName) {
  QueryProtocolClient client;
  QueryMapsRequest request;
  request.SetRenamedMapArg({{"foo",  R"(Foo)"}});

  auto outcome = client.QueryMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryMaps, QueryComplexQueryMaps) {
  QueryProtocolClient client;
  QueryMapsRequest request;
  {
    GreetingStruct requestComplexMapArgItem;
    requestComplexMapArgItem.SetHi(R"(Bar)");
    request.AddComplexMapArg("bar", requestComplexMapArgItem);
  }
  {
    GreetingStruct requestComplexMapArgItem;
    requestComplexMapArgItem.SetHi(R"(Foo)");
    request.AddComplexMapArg("foo", requestComplexMapArgItem);
  }

  auto outcome = client.QueryMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryMaps, QueryEmptyQueryMaps) {
  QueryProtocolClient client;
  QueryMapsRequest request;
  request.SetMapArg({});

  auto outcome = client.QueryMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryMaps, QueryQueryMapWithMemberXmlName) {
  QueryProtocolClient client;
  QueryMapsRequest request;
  request.SetMapWithXmlMemberName({{"bar",  R"(Bar)"}, {"foo",  R"(Foo)"}});

  auto outcome = client.QueryMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryMaps, QueryFlattenedQueryMaps) {
  QueryProtocolClient client;
  QueryMapsRequest request;
  request.SetFlattenedMap({{"bar",  R"(Bar)"}, {"foo",  R"(Foo)"}});

  auto outcome = client.QueryMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryMaps, QueryFlattenedQueryMapsWithXmlName) {
  QueryProtocolClient client;
  QueryMapsRequest request;
  request.SetFlattenedMapWithXmlName({{"bar",  R"(Bar)"}, {"foo",  R"(Foo)"}});

  auto outcome = client.QueryMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryMaps, QueryQueryMapOfLists) {
  QueryProtocolClient client;
  QueryMapsRequest request;
  request.SetMapOfLists({{"bar",  {R"(C)", R"(D)"}}, {"foo",  {R"(A)", R"(B)"}}});

  auto outcome = client.QueryMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryMaps, QueryNestedStructWithMap) {
  QueryProtocolClient client;
  QueryMapsRequest request;
  {
    NestedStructWithMap requestNestedStructWithMap;
    requestNestedStructWithMap.SetMapArg({{"bar",  R"(Bar)"}, {"foo",  R"(Foo)"}});
    request.SetNestedStructWithMap(requestNestedStructWithMap);
  }

  auto outcome = client.QueryMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}
