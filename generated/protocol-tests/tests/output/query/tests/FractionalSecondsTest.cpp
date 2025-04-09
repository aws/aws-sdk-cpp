/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/FractionalSecondsRequest.h>

using FractionalSeconds = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(FractionalSeconds, AwsQueryDateTimeWithFractionalSeconds) {
  QueryProtocolClient client;
  FractionalSecondsRequest request;

  auto outcome = client.FractionalSeconds(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
