/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlEmptyListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEmptyLists = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyLists, QueryXmlEmptyLists) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFhtbEVtcHR5TGlzdHNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbEVtcHR5TGlzdHNSZXN1bHQ+"
      "CiAgICAgICAgPHN0cmluZ0xpc3QvPgogICAgICAgIDxzdHJpbmdTZXQ+PC9zdHJpbmdTZXQ+CiAgICA8L1htbEVtcHR5TGlzdHNSZXN1bHQ+"
      "CjwvWG1sRW1wdHlMaXN0c1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlEmptyListsRequest request;

  auto outcome = client.XmlEmptyLists(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlEmptyListsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"stringList":[],"stringSet":[]} )" */
    const Aws::Vector<Aws::String>& resultStringListItem = result.GetStringList();
    EXPECT_EQ(0U, resultStringListItem.size());
    const Aws::Vector<Aws::String>& resultStringSetItem = result.GetStringSet();
    EXPECT_EQ(0U, resultStringSetItem.size());
  });
}
