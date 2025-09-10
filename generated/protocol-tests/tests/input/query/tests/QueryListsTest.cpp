/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/QueryListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using QueryLists = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(QueryLists, QueryLists) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

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
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5TGlzdHMmVmVyc2lvbj0yMDIwLTAxLTA4Jkxpc3RBcmcubWVtYmVyLjE9Zm9vJkxpc3RBcmcubWVtYmVyLjI9YmFyJkxpc3RBcmcubWVtYmVyLjM9YmF6"
      "JkNvbXBsZXhMaXN0QXJnLm1lbWJlci4xLmhpPWhlbGxvJkNvbXBsZXhMaXN0QXJnLm1lbWJlci4yLmhpPWhvbGE=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryLists, EmptyQueryLists) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryListsRequest request;
  request.SetListArg({});

  auto outcome = client.QueryLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVF1ZXJ5TGlzdHMmVmVyc2lvbj0yMDIwLTAxLTA4Jkxpc3RBcmc9";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryLists, FlattenedQueryLists) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryListsRequest request;
  request.SetFlattenedListArg({R"(A)", R"(B)"});

  auto outcome = client.QueryLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVF1ZXJ5TGlzdHMmVmVyc2lvbj0yMDIwLTAxLTA4JkZsYXR0ZW5lZExpc3RBcmcuMT1BJkZsYXR0ZW5lZExpc3RBcmcuMj1C";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryLists, QueryListArgWithXmlNameMember) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryListsRequest request;
  request.SetListArgWithXmlNameMember({R"(A)", R"(B)"});

  auto outcome = client.QueryLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5TGlzdHMmVmVyc2lvbj0yMDIwLTAxLTA4Jkxpc3RBcmdXaXRoWG1sTmFtZU1lbWJlci5pdGVtLjE9QSZMaXN0QXJnV2l0aFhtbE5hbWVNZW1iZXIuaXRl"
      "bS4yPUI=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryLists, QueryFlattenedListArgWithXmlName) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryListsRequest request;
  request.SetFlattenedListArgWithXmlName({R"(A)", R"(B)"});

  auto outcome = client.QueryLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVF1ZXJ5TGlzdHMmVmVyc2lvbj0yMDIwLTAxLTA4JkhpLjE9QSZIaS4yPUI=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryLists, QueryNestedStructWithList) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryListsRequest request;
  {
    NestedStructWithList requestNestedWithList;
    requestNestedWithList.SetListArg({R"(A)", R"(B)"});
    request.SetNestedWithList(requestNestedWithList);
  }

  auto outcome = client.QueryLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5TGlzdHMmVmVyc2lvbj0yMDIwLTAxLTA4Jk5lc3RlZFdpdGhMaXN0Lkxpc3RBcmcubWVtYmVyLjE9QSZOZXN0ZWRXaXRoTGlzdC5MaXN0QXJnLm1lbWJl"
      "ci4yPUI=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
