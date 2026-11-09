/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpEmptyPrefixHeadersRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpEmptyPrefixHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpEmptyPrefixHeaders, HttpEmptyPrefixHeadersRequestClient) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpEmptyPrefixHeadersRequest request;
  request.SetPrefixHeaders({{"x-foo", R"(Foo)"}, {"hello", R"(Hello)"}});
  request.SetSpecificHeader(R"(There)");

  auto outcome = client.HttpEmptyPrefixHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/HttpEmptyPrefixHeaders";
  expectedRq.headers = {{"x-foo", R"(Foo)"}, {"hello", R"(There)"}};
  ValidateRequestSent(expectedRq, ValidateXmlBody);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
