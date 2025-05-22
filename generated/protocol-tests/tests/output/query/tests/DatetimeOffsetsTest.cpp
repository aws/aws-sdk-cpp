﻿/**
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
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PERhdGV0aW1lT2Zmc2V0c1Jlc3BvbnNlIHhtbG5zPSJodHRwczovL2V4YW1wbGUuY29tLyI+CiAgICA8RGF0ZXRpbWVPZmZzZXRzUmVzdWx0PgogICAgICAgIDxkYXRldGltZT4yMDE5LTEyLTE2VDIyOjQ4OjE4LTAxOjAwPC9kYXRldGltZT4KICAgIDwvRGF0ZXRpbWVPZmZzZXRzUmVzdWx0Pgo8L0RhdGV0aW1lT2Zmc2V0c1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DatetimeOffsetsResult& result = outcome.GetResult();
  /* expectedResult = R"( {"datetime":1576540098} )" */
  EXPECT_EQ(Aws::Utils::DateTime(1576540098L), result.GetDatetime());
}

AWS_PROTOCOL_TEST(DatetimeOffsets, AwsQueryDateTimeWithPositiveOffset) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PERhdGV0aW1lT2Zmc2V0c1Jlc3BvbnNlIHhtbG5zPSJodHRwczovL2V4YW1wbGUuY29tLyI+CiAgICA8RGF0ZXRpbWVPZmZzZXRzUmVzdWx0PgogICAgICAgIDxkYXRldGltZT4yMDE5LTEyLTE3VDAwOjQ4OjE4KzAxOjAwPC9kYXRldGltZT4KICAgIDwvRGF0ZXRpbWVPZmZzZXRzUmVzdWx0Pgo8L0RhdGV0aW1lT2Zmc2V0c1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DatetimeOffsetsResult& result = outcome.GetResult();
  /* expectedResult = R"( {"datetime":1576540098} )" */
  EXPECT_EQ(Aws::Utils::DateTime(1576540098L), result.GetDatetime());
}
