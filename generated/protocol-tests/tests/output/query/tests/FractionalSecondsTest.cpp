/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/FractionalSecondsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using FractionalSeconds = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(FractionalSeconds, AwsQueryDateTimeWithFractionalSeconds) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PEZyYWN0aW9uYWxTZWNvbmRzUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxGcmFjdGlvbmFsU2Vjb25kc1Jlc3VsdD4KICAgICAgICA8ZGF0"
      "ZXRpbWU+MjAwMC0wMS0wMlQyMDozNDo1Ni4xMjNaPC9kYXRldGltZT4KICAgIDwvRnJhY3Rpb25hbFNlY29uZHNSZXN1bHQ+"
      "CjwvRnJhY3Rpb25hbFNlY29uZHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  FractionalSecondsRequest request;

  auto outcome = client.FractionalSeconds(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const FractionalSecondsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"datetime":9.46845296123E8} )" */
    EXPECT_EQ(Aws::Utils::DateTime(9.46845296123E8), result.GetDatetime());
  });
}
