/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPrefixHeadersRequest.h>

using HttpPrefixHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPrefixHeaders, HttpPrefixHeadersArePresent) {
  RestXmlProtocolClient client;
  HttpPrefixHeadersRequest request;
  request.SetFoo(R"(Foo)");
  request.SetFooMap({{"abc",  R"(Abc value)"}, {"def",  R"(Def value)"}});

  auto outcome = client.HttpPrefixHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(HttpPrefixHeaders, HttpPrefixHeadersAreNotPresent) {
  RestXmlProtocolClient client;
  HttpPrefixHeadersRequest request;
  request.SetFoo(R"(Foo)");
  request.SetFooMap({});

  auto outcome = client.HttpPrefixHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(HttpPrefixHeaders, HttpPrefixEmptyHeaders) {
  RestXmlProtocolClient client;
  HttpPrefixHeadersRequest request;
  request.SetFooMap({{"abc",  R"()"}});

  auto outcome = client.HttpPrefixHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}
