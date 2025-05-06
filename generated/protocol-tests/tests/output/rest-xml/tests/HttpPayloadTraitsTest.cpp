/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadTraitsRequest.h>

using HttpPayloadTraits = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadTraits, HttpPayloadTraitsWithBlob) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Foo", R"(Foo)"}};
  mockRs.body = "YmxvYmJ5IGJsb2IgYmxvYg==";
  SetMockResponse(mockRs);

  HttpPayloadTraitsRequest request;

  auto outcome = client.HttpPayloadTraits(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(HttpPayloadTraits, HttpPayloadTraitsWithNoBlobBody) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Foo", R"(Foo)"}};
  SetMockResponse(mockRs);

  HttpPayloadTraitsRequest request;

  auto outcome = client.HttpPayloadTraits(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
