/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using DatetimeOffsets = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(DatetimeOffsets, AwsJson11DateTimeWithNegativeOffset) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ICAgICAgewogICAgICAgICAgImRhdGV0aW1lIjogIjIwMTktMTItMTZUMjI6NDg6MTgtMDE6MDAiCiAgICAgIH0K";
  SetMockResponse(mockRs);

  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DatetimeOffsetsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"datetime":1576540098} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)), result.GetDatetime());
  });
}

AWS_PROTOCOL_TEST(DatetimeOffsets, AwsJson11DateTimeWithPositiveOffset) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ICAgICAgewogICAgICAgICAgImRhdGV0aW1lIjogIjIwMTktMTItMTdUMDA6NDg6MTgrMDE6MDAiCiAgICAgIH0K";
  SetMockResponse(mockRs);

  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const DatetimeOffsetsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"datetime":1576540098} )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)), result.GetDatetime());
  });
}
