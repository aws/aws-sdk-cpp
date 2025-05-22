﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TimestampFormatHeadersRequest.h>

using TimestampFormatHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TimestampFormatHeaders, RestJsonTimestampFormatHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TimestampFormatHeadersRequest request;
  request.SetMemberEpochSeconds(Aws::Utils::DateTime(1576540098L));
  request.SetMemberHttpDate(Aws::Utils::DateTime(1576540098L));
  request.SetMemberDateTime(Aws::Utils::DateTime(1576540098L));
  request.SetDefaultFormat(Aws::Utils::DateTime(1576540098L));
  request.SetTargetEpochSeconds(Aws::Utils::DateTime(1576540098L));
  request.SetTargetHttpDate(Aws::Utils::DateTime(1576540098L));
  request.SetTargetDateTime(Aws::Utils::DateTime(1576540098L));

  auto outcome = client.TimestampFormatHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/TimestampFormatHeaders";
  expectedRq.headers = {{"X-defaultFormat", R"(Mon, 16 Dec 2019 23:48:18 GMT)"}, {"X-memberDateTime", R"(2019-12-16T23:48:18Z)"}, {"X-memberEpochSeconds", R"(1576540098)"}, {"X-memberHttpDate", R"(Mon, 16 Dec 2019 23:48:18 GMT)"}, {"X-targetDateTime", R"(2019-12-16T23:48:18Z)"}, {"X-targetEpochSeconds", R"(1576540098)"}, {"X-targetHttpDate", R"(Mon, 16 Dec 2019 23:48:18 GMT)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
