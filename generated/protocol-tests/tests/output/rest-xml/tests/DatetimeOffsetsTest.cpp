/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using DatetimeOffsets = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(DatetimeOffsets, RestXmlDateTimeWithNegativeOffset) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PERhdGV0aW1lT2Zmc2V0c091dHB1dD4KICAgIDxkYXRldGltZT4yMDE5LTEyLTE2VDIyOjQ4OjE4LTAxOjAwPC9kYXRldGltZT4KPC9EYXRldGltZU9mZnNldHNPdXRwdXQ+"
      "Cg==";
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

AWS_PROTOCOL_TEST(DatetimeOffsets, RestXmlDateTimeWithPositiveOffset) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PERhdGV0aW1lT2Zmc2V0c091dHB1dD4KICAgIDxkYXRldGltZT4yMDE5LTEyLTE3VDAwOjQ4OjE4KzAxOjAwPC9kYXRldGltZT4KPC9EYXRldGltZU9mZnNldHNPdXRwdXQ+"
      "Cg==";
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
