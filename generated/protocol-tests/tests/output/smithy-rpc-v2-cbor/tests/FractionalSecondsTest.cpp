/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/model/FractionalSecondsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using FractionalSeconds = AWS_PROTOCOL_TEST_SUITE;
using RpcV2ProtocolClient = Aws::RpcV2Protocol::RpcV2ProtocolClient;
using namespace Aws::RpcV2Protocol::Model;

AWS_PROTOCOL_TEST(FractionalSeconds, RpcV2CborDateTimeWithFractionalSeconds) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "v2hkYXRldGltZcH7Qcw32zgPvnf/";
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
