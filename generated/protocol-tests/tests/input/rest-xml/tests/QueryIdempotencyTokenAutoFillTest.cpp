/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using QueryIdempotencyTokenAutoFill = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(QueryIdempotencyTokenAutoFill, QueryIdempotencyTokenAutoFill) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryIdempotencyTokenAutoFillRequest request;

  auto outcome = client.QueryIdempotencyTokenAutoFill(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/QueryIdempotencyTokenAutoFill?token=00000000-0000-4000-8000-000000000000";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryIdempotencyTokenAutoFill, QueryIdempotencyTokenAutoFillIsSet) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryIdempotencyTokenAutoFillRequest request;
  request.SetToken(R"(00000000-0000-4000-8000-000000000000)");

  auto outcome = client.QueryIdempotencyTokenAutoFill(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/QueryIdempotencyTokenAutoFill?token=00000000-0000-4000-8000-000000000000";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
