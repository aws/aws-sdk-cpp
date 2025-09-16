/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/TimestampFormatHeadersRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using TimestampFormatHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(TimestampFormatHeaders, TimestampFormatHeaders) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TimestampFormatHeadersRequest request;
  request.SetMemberEpochSeconds(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));
  request.SetMemberHttpDate(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));
  request.SetMemberDateTime(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));
  request.SetDefaultFormat(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));
  request.SetTargetEpochSeconds(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));
  request.SetTargetHttpDate(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));
  request.SetTargetDateTime(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));

  auto outcome = client.TimestampFormatHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/TimestampFormatHeaders";
  expectedRq.headers = {{"X-defaultFormat", R"(Mon, 16 Dec 2019 23:48:18 GMT)"},
                        {"X-memberDateTime", R"(2019-12-16T23:48:18Z)"},
                        {"X-memberEpochSeconds", R"(1576540098)"},
                        {"X-memberHttpDate", R"(Mon, 16 Dec 2019 23:48:18 GMT)"},
                        {"X-targetDateTime", R"(2019-12-16T23:48:18Z)"},
                        {"X-targetEpochSeconds", R"(1576540098)"},
                        {"X-targetHttpDate", R"(Mon, 16 Dec 2019 23:48:18 GMT)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
