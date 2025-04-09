/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>

using QueryIdempotencyTokenAutoFill = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(QueryIdempotencyTokenAutoFill, QueryProtocolIdempotencyTokenAutoFill) {
  QueryProtocolClient client;
  QueryIdempotencyTokenAutoFillRequest request;

  auto outcome = client.QueryIdempotencyTokenAutoFill(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(QueryIdempotencyTokenAutoFill, QueryProtocolIdempotencyTokenAutoFillIsSet) {
  QueryProtocolClient client;
  QueryIdempotencyTokenAutoFillRequest request;
  request.SetToken(R"(00000000-0000-4000-8000-000000000123)");

  auto outcome = client.QueryIdempotencyTokenAutoFill(request);
  AWS_ASSERT_SUCCESS(outcome);
}
