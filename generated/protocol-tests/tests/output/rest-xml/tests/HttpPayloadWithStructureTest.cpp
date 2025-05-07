﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithStructureRequest.h>

using HttpPayloadWithStructure = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithStructure, HttpPayloadWithStructure) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PE5lc3RlZFBheWxvYWQ+CiAgICA8Z3JlZXRpbmc+aGVsbG88L2dyZWV0aW5nPgogICAgPG5hbWU+UGhyZWRkeTwvbmFtZT4KPC9OZXN0ZWRQYXlsb2FkPgo=";
  SetMockResponse(mockRs);

  HttpPayloadWithStructureRequest request;

  auto outcome = client.HttpPayloadWithStructure(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
