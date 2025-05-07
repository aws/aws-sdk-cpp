﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/FractionalSecondsRequest.h>

using FractionalSeconds = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(FractionalSeconds, RestXmlDateTimeWithFractionalSeconds) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PEZyYWN0aW9uYWxTZWNvbmRzT3V0cHV0PgogICAgPGRhdGV0aW1lPjIwMDAtMDEtMDJUMjA6MzQ6NTYuMTIzWjwvZGF0ZXRpbWU+CjwvRnJhY3Rpb25hbFNlY29uZHNPdXRwdXQ+Cg==";
  SetMockResponse(mockRs);

  FractionalSecondsRequest request;

  auto outcome = client.FractionalSeconds(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
