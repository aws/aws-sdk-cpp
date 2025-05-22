﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/TimestampFormatHeadersRequest.h>

using TimestampFormatHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(TimestampFormatHeaders, TimestampFormatHeaders) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-defaultFormat", R"(Mon, 16 Dec 2019 23:48:18 GMT)"}, {"X-memberDateTime", R"(2019-12-16T23:48:18Z)"}, {"X-memberEpochSeconds", R"(1576540098)"}, {"X-memberHttpDate", R"(Mon, 16 Dec 2019 23:48:18 GMT)"}, {"X-targetDateTime", R"(2019-12-16T23:48:18Z)"}, {"X-targetEpochSeconds", R"(1576540098)"}, {"X-targetHttpDate", R"(Mon, 16 Dec 2019 23:48:18 GMT)"}};
  SetMockResponse(mockRs);

  TimestampFormatHeadersRequest request;

  auto outcome = client.TimestampFormatHeaders(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const TimestampFormatHeadersResult& result = outcome.GetResult();
  /* expectedResult = R"( {"memberEpochSeconds":1576540098,"memberHttpDate":1576540098,"memberDateTime":1576540098,"defaultFormat":1576540098,"targetEpochSeconds":1576540098,"targetHttpDate":1576540098,"targetDateTime":1576540098} )" */
  EXPECT_EQ(Aws::Utils::DateTime(1576540098L), result.GetMemberEpochSeconds());
  EXPECT_EQ(Aws::Utils::DateTime(1576540098L), result.GetMemberHttpDate());
  EXPECT_EQ(Aws::Utils::DateTime(1576540098L), result.GetMemberDateTime());
  EXPECT_EQ(Aws::Utils::DateTime(1576540098L), result.GetDefaultFormat());
  EXPECT_EQ(Aws::Utils::DateTime(1576540098L), result.GetTargetEpochSeconds());
  EXPECT_EQ(Aws::Utils::DateTime(1576540098L), result.GetTargetHttpDate());
  EXPECT_EQ(Aws::Utils::DateTime(1576540098L), result.GetTargetDateTime());
}
