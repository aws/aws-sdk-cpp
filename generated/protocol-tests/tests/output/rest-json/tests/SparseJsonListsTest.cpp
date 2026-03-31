/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/SparseJsonListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SparseJsonLists = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(SparseJsonLists, RestJsonSparseListsSerializeNull) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body =
      "ewogICAgInNwYXJzZVN0cmluZ0xpc3QiOiBbCiAgICAgICAgbnVsbCwKICAgICAgICAiaGkiCiAgICBdLAogICAgInNwYXJzZVNob3J0TGlzdCI6IFsKICAgICAgICBudWxs"
      "LAogICAgICAgIDIKICAgIF0KfQ==";
  SetMockResponse(mockRs);

  SparseJsonListsRequest request;

  auto outcome = client.SparseJsonLists(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SparseJsonListsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"sparseStringList":[null,"hi"],"sparseShortList":[null,2]} )" */
    const Aws::Vector<Aws::Crt::Optional<Aws::String>>& resultSparseStringListItem = result.GetSparseStringList();
    EXPECT_EQ(2U, resultSparseStringListItem.size());
    EXPECT_FALSE(resultSparseStringListItem.at(0).has_value());
    EXPECT_TRUE(resultSparseStringListItem.at(1).has_value());
    EXPECT_EQ(R"(hi)", *resultSparseStringListItem.at(1));
    const Aws::Vector<Aws::Crt::Optional<int>>& resultSparseShortListItem = result.GetSparseShortList();
    EXPECT_EQ(2U, resultSparseShortListItem.size());
    EXPECT_FALSE(resultSparseShortListItem.at(0).has_value());
    EXPECT_TRUE(resultSparseShortListItem.at(1).has_value());
    EXPECT_EQ(2, *resultSparseShortListItem.at(1));
  });
}
