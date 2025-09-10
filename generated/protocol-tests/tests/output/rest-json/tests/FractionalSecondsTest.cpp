/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/FractionalSecondsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using FractionalSeconds = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(FractionalSeconds, RestJsonDateTimeWithFractionalSeconds) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "ICAgICAgewogICAgICAgICAgImRhdGV0aW1lIjogIjIwMDAtMDEtMDJUMjA6MzQ6NTYuMTIzWiIKICAgICAgfQo=";
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
