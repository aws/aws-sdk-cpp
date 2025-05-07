﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlAttributesOnPayloadRequest.h>

using XmlAttributesOnPayload = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlAttributesOnPayload, XmlAttributesOnPayload) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbEF0dHJpYnV0ZXNQYXlsb2FkUmVzcG9uc2UgdGVzdD0idGVzdCI+CiAgICA8Zm9vPmhpPC9mb28+CjwvWG1sQXR0cmlidXRlc1BheWxvYWRSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlAttributesOnPayloadRequest request;

  auto outcome = client.XmlAttributesOnPayload(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
