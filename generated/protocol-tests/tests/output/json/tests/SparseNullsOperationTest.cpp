/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/SparseNullsOperationRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SparseNullsOperation = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(SparseNullsOperation, AwsJson11SparseMapsDeserializeNullValues) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgInNwYXJzZVN0cmluZ01hcCI6IHsKICAgICAgICAiZm9vIjogbnVsbAogICAgfQp9";
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

AWS_PROTOCOL_TEST(SparseNullsOperation, AwsJson11SparseListsDeserializeNull) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.1)"}};
  mockRs.body = "ewogICAgInNwYXJzZVN0cmluZ0xpc3QiOiBbCiAgICAgICAgbnVsbAogICAgXQp9";
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
