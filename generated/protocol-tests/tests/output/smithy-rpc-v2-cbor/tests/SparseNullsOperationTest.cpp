/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/model/SparseNullsOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SparseNullsOperation = AWS_PROTOCOL_TEST_SUITE;
using RpcV2ProtocolClient = Aws::RpcV2Protocol::RpcV2ProtocolClient;
using namespace Aws::RpcV2Protocol::Model;

AWS_PROTOCOL_TEST(SparseNullsOperation, RpcV2CborSparseMapsDeserializeNullValues) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/cbor)"}};
  mockRs.body = "v29zcGFyc2VTdHJpbmdNYXC/Y2Zvb/b//w==";
  SetMockResponse(mockRs);

  SparseNullsOperationRequest request;

  auto outcome = client.SparseNullsOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SparseNullsOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"sparseStringMap":{"foo":null}} )" */
    const Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>& resultSparseStringMap = result.GetSparseStringMap();
    EXPECT_EQ(1U, resultSparseStringMap.size());
    EXPECT_TRUE(resultSparseStringMap.find("foo") != resultSparseStringMap.end());
    EXPECT_FALSE(resultSparseStringMap.at("foo").has_value());
  });
}

AWS_PROTOCOL_TEST(SparseNullsOperation, RpcV2CborSparseListsDeserializeNull) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/cbor)"}};
  mockRs.body = "v3BzcGFyc2VTdHJpbmdMaXN0n/b//w==";
  SetMockResponse(mockRs);

  SparseNullsOperationRequest request;

  auto outcome = client.SparseNullsOperation(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SparseNullsOperationResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"sparseStringList":[null]} )" */
    const Aws::Vector<Aws::Crt::Optional<Aws::String>>& resultSparseStringListItem = result.GetSparseStringList();
    EXPECT_EQ(1U, resultSparseStringListItem.size());
    EXPECT_FALSE(resultSparseStringListItem.at(0).has_value());
  });
}
