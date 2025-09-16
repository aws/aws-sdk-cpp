/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/XmlEmptyListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEmptyLists = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyLists, Ec2XmlEmptyLists) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFhtbEVtcHR5TGlzdHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogIDxzdHJpbmdMaXN0Lz4KICA8c3RyaW5nU2V0Pjwvc3RyaW5nU2V0Pgo8L1ht"
      "bEVtcHR5TGlzdHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlEmptyListsRequest request;

  auto outcome = client.XmlEmptyLists(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlEmptyListsResponse& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"stringList":[],"stringSet":[]} )" */
    const Aws::Vector<Aws::String>& resultStringListItem = result.GetStringList();
    EXPECT_EQ(0U, resultStringListItem.size());
    const Aws::Vector<Aws::String>& resultStringSetItem = result.GetStringSet();
    EXPECT_EQ(0U, resultStringSetItem.size());
  });
}
