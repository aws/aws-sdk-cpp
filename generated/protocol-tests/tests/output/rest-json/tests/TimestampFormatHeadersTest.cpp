/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TimestampFormatHeadersRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using TimestampFormatHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TimestampFormatHeaders, RestJsonTimestampFormatHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-defaultFormat", R"(Mon, 16 Dec 2019 23:48:18 GMT)"},
                    {"X-memberDateTime", R"(2019-12-16T23:48:18Z)"},
                    {"X-memberEpochSeconds", R"(1576540098)"},
                    {"X-memberHttpDate", R"(Mon, 16 Dec 2019 23:48:18 GMT)"},
                    {"X-targetDateTime", R"(2019-12-16T23:48:18Z)"},
                    {"X-targetEpochSeconds", R"(1576540098)"},
                    {"X-targetHttpDate", R"(Mon, 16 Dec 2019 23:48:18 GMT)"}};
  SetMockResponse(mockRs);

  TimestampFormatHeadersRequest request;

  auto outcome = client.TimestampFormatHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const TimestampFormatHeadersResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"memberEpochSeconds":1576540098,"memberHttpDate":1576540098,"memberDateTime":1576540098,"defaultFormat":1576540098,"targetEpochSeconds":1576540098,"targetHttpDate":1576540098,"targetDateTime":1576540098}
     * )" */
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)), result.GetMemberEpochSeconds());
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)), result.GetMemberHttpDate());
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)), result.GetMemberDateTime());
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)), result.GetDefaultFormat());
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)), result.GetTargetEpochSeconds());
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)), result.GetTargetHttpDate());
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)), result.GetTargetDateTime());
  });
}
