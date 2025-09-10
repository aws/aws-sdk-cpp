/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPrefixHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpPrefixHeaders, RestJsonHttpPrefixHeadersArePresent) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpPrefixHeadersRequest request;
  request.SetFoo(R"(Foo)");
  request.SetFooMap({{"abc", R"(Abc value)"}, {"def", R"(Def value)"}});

  auto outcome = client.HttpPrefixHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/HttpPrefixHeaders";
  expectedRq.headers = {{"x-foo", R"(Foo)"}, {"x-foo-abc", R"(Abc value)"}, {"x-foo-def", R"(Def value)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(HttpPrefixHeaders, RestJsonHttpPrefixHeadersAreNotPresent) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpPrefixHeadersRequest request;
  request.SetFoo(R"(Foo)");
  request.SetFooMap({});

  auto outcome = client.HttpPrefixHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/HttpPrefixHeaders";
  expectedRq.headers = {{"x-foo", R"(Foo)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(HttpPrefixHeaders, RestJsonHttpPrefixEmptyHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpPrefixHeadersRequest request;
  request.SetFooMap({{"abc", R"()"}});

  auto outcome = client.HttpPrefixHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/HttpPrefixHeaders";
  expectedRq.headers = {{"x-foo-abc", R"()"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
