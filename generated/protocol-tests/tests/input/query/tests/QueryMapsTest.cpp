/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/QueryMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using QueryMaps = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(QueryMaps, QuerySimpleQueryMaps) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryMapsRequest request;
  request.SetMapArg({{"bar", R"(Bar)"}, {"foo", R"(Foo)"}});

  auto outcome = client.QueryMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5TWFwcyZWZXJzaW9uPTIwMjAtMDEtMDgmTWFwQXJnLmVudHJ5LjEua2V5PWJhciZNYXBBcmcuZW50cnkuMS52YWx1ZT1CYXImTWFwQXJnLmVudHJ5LjIu"
      "a2V5PWZvbyZNYXBBcmcuZW50cnkuMi52YWx1ZT1Gb28=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryMaps, QuerySimpleQueryMapsWithXmlName) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryMapsRequest request;
  request.SetRenamedMapArg({{"foo", R"(Foo)"}});

  auto outcome = client.QueryMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVF1ZXJ5TWFwcyZWZXJzaW9uPTIwMjAtMDEtMDgmRm9vLmVudHJ5LjEua2V5PWZvbyZGb28uZW50cnkuMS52YWx1ZT1Gb28=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryMaps, QueryComplexQueryMaps) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

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
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5TWFwcyZWZXJzaW9uPTIwMjAtMDEtMDgmQ29tcGxleE1hcEFyZy5lbnRyeS4xLmtleT1iYXImQ29tcGxleE1hcEFyZy5lbnRyeS4xLnZhbHVlLmhpPUJh"
      "ciZDb21wbGV4TWFwQXJnLmVudHJ5LjIua2V5PWZvbyZDb21wbGV4TWFwQXJnLmVudHJ5LjIudmFsdWUuaGk9Rm9v";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryMaps, QueryEmptyQueryMaps) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryMapsRequest request;
  request.SetMapArg({});

  auto outcome = client.QueryMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVF1ZXJ5TWFwcyZWZXJzaW9uPTIwMjAtMDEtMDg=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryMaps, QueryQueryMapWithMemberXmlName) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryMapsRequest request;
  request.SetMapWithXmlMemberName({{"bar", R"(Bar)"}, {"foo", R"(Foo)"}});

  auto outcome = client.QueryMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5TWFwcyZWZXJzaW9uPTIwMjAtMDEtMDgmTWFwV2l0aFhtbE1lbWJlck5hbWUuZW50cnkuMS5LPWJhciZNYXBXaXRoWG1sTWVtYmVyTmFtZS5lbnRyeS4x"
      "LlY9QmFyJk1hcFdpdGhYbWxNZW1iZXJOYW1lLmVudHJ5LjIuSz1mb28mTWFwV2l0aFhtbE1lbWJlck5hbWUuZW50cnkuMi5WPUZvbw==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryMaps, QueryFlattenedQueryMaps) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryMapsRequest request;
  request.SetFlattenedMap({{"bar", R"(Bar)"}, {"foo", R"(Foo)"}});

  auto outcome = client.QueryMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5TWFwcyZWZXJzaW9uPTIwMjAtMDEtMDgmRmxhdHRlbmVkTWFwLjEua2V5PWJhciZGbGF0dGVuZWRNYXAuMS52YWx1ZT1CYXImRmxhdHRlbmVkTWFwLjIu"
      "a2V5PWZvbyZGbGF0dGVuZWRNYXAuMi52YWx1ZT1Gb28=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryMaps, QueryFlattenedQueryMapsWithXmlName) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryMapsRequest request;
  request.SetFlattenedMapWithXmlName({{"bar", R"(Bar)"}, {"foo", R"(Foo)"}});

  auto outcome = client.QueryMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVF1ZXJ5TWFwcyZWZXJzaW9uPTIwMjAtMDEtMDgmSGkuMS5LPWJhciZIaS4xLlY9QmFyJkhpLjIuSz1mb28mSGkuMi5WPUZvbw==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryMaps, QueryQueryMapOfLists) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryMapsRequest request;
  request.SetMapOfLists({{"bar", {R"(C)", R"(D)"}}, {"foo", {R"(A)", R"(B)"}}});

  auto outcome = client.QueryMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5TWFwcyZWZXJzaW9uPTIwMjAtMDEtMDgmTWFwT2ZMaXN0cy5lbnRyeS4xLmtleT1iYXImTWFwT2ZMaXN0cy5lbnRyeS4xLnZhbHVlLm1lbWJlci4xPUMm"
      "TWFwT2ZMaXN0cy5lbnRyeS4xLnZhbHVlLm1lbWJlci4yPUQmTWFwT2ZMaXN0cy5lbnRyeS4yLmtleT1mb28mTWFwT2ZMaXN0cy5lbnRyeS4yLnZhbHVlLm1lbWJlci4xPUEm"
      "TWFwT2ZMaXN0cy5lbnRyeS4yLnZhbHVlLm1lbWJlci4yPUI=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryMaps, QueryNestedStructWithMap) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryMapsRequest request;
  {
    NestedStructWithMap requestNestedStructWithMap;
    requestNestedStructWithMap.SetMapArg({{"bar", R"(Bar)"}, {"foo", R"(Foo)"}});
    request.SetNestedStructWithMap(requestNestedStructWithMap);
  }

  auto outcome = client.QueryMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5TWFwcyZWZXJzaW9uPTIwMjAtMDEtMDgmTmVzdGVkU3RydWN0V2l0aE1hcC5NYXBBcmcuZW50cnkuMS5rZXk9YmFyJk5lc3RlZFN0cnVjdFdpdGhNYXAu"
      "TWFwQXJnLmVudHJ5LjEudmFsdWU9QmFyJk5lc3RlZFN0cnVjdFdpdGhNYXAuTWFwQXJnLmVudHJ5LjIua2V5PWZvbyZOZXN0ZWRTdHJ1Y3RXaXRoTWFwLk1hcEFyZy5lbnRy"
      "eS4yLnZhbHVlPUZvbw==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
