/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpEnumPayloadRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpEnumPayload = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpEnumPayload, RestXmlEnumPayloadRequest) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpEnumPayloadRequest request;
  request.SetPayload(StringEnumMapper::GetStringEnumForName(R"e(enumvalue)e"));

  auto outcome = client.HttpEnumPayload(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ZW51bXZhbHVl";
  expectedRq.uri = "/EnumPayload";
  expectedRq.headers = {{"Content-Type", R"(text/plain)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
