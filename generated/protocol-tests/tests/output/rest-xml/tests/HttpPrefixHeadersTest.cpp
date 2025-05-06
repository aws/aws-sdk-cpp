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
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"x-foo", R"(Foo)"}, {"x-foo-abc", R"(Abc value)"}, {"x-foo-def", R"(Def value)"}};
  SetMockResponse(mockRs);

  HttpPrefixHeadersRequest request;

  auto outcome = client.HttpPrefixHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(HttpPrefixHeaders, HttpPrefixHeadersAreNotPresent) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"x-foo", R"(Foo)"}};
  SetMockResponse(mockRs);

  HttpPrefixHeadersRequest request;

  auto outcome = client.HttpPrefixHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
