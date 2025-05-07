﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/DatetimeOffsetsRequest.h>

using DatetimeOffsets = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(DatetimeOffsets, RestJsonDateTimeWithNegativeOffset) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "ICAgICAgewogICAgICAgICAgImRhdGV0aW1lIjogIjIwMTktMTItMTZUMjI6NDg6MTgtMDE6MDAiCiAgICAgIH0K";
  SetMockResponse(mockRs);

  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(DatetimeOffsets, RestJsonDateTimeWithPositiveOffset) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "ICAgICAgewogICAgICAgICAgImRhdGV0aW1lIjogIjIwMTktMTItMTdUMDA6NDg6MTgrMDE6MDAiCiAgICAgIH0K";
  SetMockResponse(mockRs);

  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
