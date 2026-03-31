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

AWS_PROTOCOL_TEST(SparseNullsOperation, AwsJson11SparseMapsSerializeNullValues) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SparseNullsOperationRequest request;
  request.AddSparseStringMap("foo", Aws::Crt::Optional<Aws::String>{});

  auto outcome = client.SparseNullsOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgInNwYXJzZVN0cmluZ01hcCI6IHsKICAgICAgICAiZm9vIjogbnVsbAogICAgfQp9";
  expectedRq.uri = "/";
  expectedRq.headers = {{"X-Amz-Target", R"(JsonProtocol.SparseNullsOperation)"}, {"Content-Type", R"(application/x-amz-json-1.1)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SparseNullsOperation, AwsJson11SparseListsSerializeNull) {
  JsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SparseNullsOperationRequest request;
  request.AddSparseStringList(Aws::Crt::Optional<Aws::String>{});

  auto outcome = client.SparseNullsOperation(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgInNwYXJzZVN0cmluZ0xpc3QiOiBbCiAgICAgICAgbnVsbAogICAgXQp9";
  expectedRq.uri = "/";
  expectedRq.headers = {{"X-Amz-Target", R"(JsonProtocol.SparseNullsOperation)"}, {"Content-Type", R"(application/x-amz-json-1.1)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
