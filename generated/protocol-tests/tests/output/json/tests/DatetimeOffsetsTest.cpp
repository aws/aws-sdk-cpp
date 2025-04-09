/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/DatetimeOffsetsRequest.h>

using DatetimeOffsets = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(DatetimeOffsets, AwsJson11DateTimeWithNegativeOffset) {
  JsonProtocolClient client;
  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(DatetimeOffsets, AwsJson11DateTimeWithPositiveOffset) {
  JsonProtocolClient client;
  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
