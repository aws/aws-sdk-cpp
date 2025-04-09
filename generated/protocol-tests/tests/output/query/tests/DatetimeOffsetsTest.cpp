/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/DatetimeOffsetsRequest.h>

using DatetimeOffsets = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(DatetimeOffsets, AwsQueryDateTimeWithNegativeOffset) {
  QueryProtocolClient client;
  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(DatetimeOffsets, AwsQueryDateTimeWithPositiveOffset) {
  QueryProtocolClient client;
  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
