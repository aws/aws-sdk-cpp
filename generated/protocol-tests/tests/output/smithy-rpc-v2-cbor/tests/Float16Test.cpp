/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/model/Float16Request.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using Float16 = AWS_PROTOCOL_TEST_SUITE;
using RpcV2ProtocolClient = Aws::RpcV2Protocol::RpcV2ProtocolClient;
using namespace Aws::RpcV2Protocol::Model;

AWS_PROTOCOL_TEST(Float16, RpcV2CborFloat16Inf) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "oWV2YWx1Zfl8AA==";
  SetMockResponse(mockRs);

  Float16Request request;

  auto outcome = client.Float16(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const Float16Result& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"value":"Infinity"} )" */
    EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetValue());
  });
}

AWS_PROTOCOL_TEST(Float16, RpcV2CborFloat16NegInf) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "oWV2YWx1Zfn8AA==";
  SetMockResponse(mockRs);

  Float16Request request;

  auto outcome = client.Float16(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const Float16Result& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"value":"-Infinity"} )" */
    EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetValue());
  });
}

AWS_PROTOCOL_TEST(Float16, RpcV2CborFloat16LSBNaN) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "oWV2YWx1Zfl8AQ==";
  SetMockResponse(mockRs);

  Float16Request request;

  auto outcome = client.Float16(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const Float16Result& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"value":"NaN"} )" */
    EXPECT_TRUE(std::isnan(result.GetValue()));
  });
}

AWS_PROTOCOL_TEST(Float16, RpcV2CborFloat16MSBNaN) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "oWV2YWx1Zfl+AA==";
  SetMockResponse(mockRs);

  Float16Request request;

  auto outcome = client.Float16(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const Float16Result& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"value":"NaN"} )" */
    EXPECT_TRUE(std::isnan(result.GetValue()));
  });
}

AWS_PROTOCOL_TEST(Float16, RpcV2CborFloat16Subnormal) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "oWV2YWx1ZfkAUA==";
  SetMockResponse(mockRs);

  Float16Request request;

  auto outcome = client.Float16(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const Float16Result& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"value":4.76837158203125E-6} )" */
    EXPECT_EQ(4.76837158203125E-6, result.GetValue());
  });
}
