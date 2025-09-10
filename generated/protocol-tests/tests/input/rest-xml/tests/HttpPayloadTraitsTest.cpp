/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadTraitsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPayloadTraits = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadTraits, HttpPayloadTraitsWithBlob) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpPayloadTraitsRequest request;
  request.SetFoo(R"(Foo)");
  request.SetBody([]() {
    return Aws::MakeShared<Aws::StringStream>("Test", Aws::String(R"(blobby blob blob)"), std::ios_base::in | std::ios_base::binary);
  }());

  auto outcome = client.HttpPayloadTraits(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "YmxvYmJ5IGJsb2IgYmxvYg==";
  expectedRq.uri = "/HttpPayloadTraits";
  expectedRq.headers = {{"X-Foo", R"(Foo)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(HttpPayloadTraits, HttpPayloadTraitsWithNoBlobBody) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpPayloadTraitsRequest request;
  request.SetFoo(R"(Foo)");

  auto outcome = client.HttpPayloadTraits(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/HttpPayloadTraits";
  expectedRq.headers = {{"X-Foo", R"(Foo)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
