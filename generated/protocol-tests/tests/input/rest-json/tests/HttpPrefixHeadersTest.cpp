/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersRequest.h>

using HttpPrefixHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpPrefixHeaders, RestJsonHttpPrefixHeadersArePresent) {
  RestJsonProtocolClient client;
  HttpPrefixHeadersRequest request;
  request.SetFoo(R"(Foo)");
  request.SetFooMap({{"abc",  R"(Abc value)"}, {"def",  R"(Def value)"}});

  auto outcome = client.HttpPrefixHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(HttpPrefixHeaders, RestJsonHttpPrefixHeadersAreNotPresent) {
  RestJsonProtocolClient client;
  HttpPrefixHeadersRequest request;
  request.SetFoo(R"(Foo)");
  request.SetFooMap({});

  auto outcome = client.HttpPrefixHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(HttpPrefixHeaders, RestJsonHttpPrefixEmptyHeaders) {
  RestJsonProtocolClient client;
  HttpPrefixHeadersRequest request;
  request.SetFooMap({{"abc",  R"()"}});

  auto outcome = client.HttpPrefixHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}
