/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithMemberXmlNameRequest.h>

using HttpPayloadWithMemberXmlName = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithMemberXmlName, HttpPayloadWithMemberXmlName) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PEhvbGE+PG5hbWU+UGhyZWRkeTwvbmFtZT48L0hvbGE+";
  SetMockResponse(mockRs);

  HttpPayloadWithMemberXmlNameRequest request;

  auto outcome = client.HttpPayloadWithMemberXmlName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
