/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/IgnoresWrappingXmlNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using IgnoresWrappingXmlName = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(IgnoresWrappingXmlName, QueryIgnoresWrappingXmlName) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PElnbm9yZXNXcmFwcGluZ1htbE5hbWVSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPElnbm9yZXNXcmFwcGluZ1htbE5hbWVSZXN1bHQ+"
      "CiAgICAgICAgPGZvbz5iYXI8L2Zvbz4KICAgIDwvSWdub3Jlc1dyYXBwaW5nWG1sTmFtZVJlc3VsdD4KPC9JZ25vcmVzV3JhcHBpbmdYbWxOYW1lUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  IgnoresWrappingXmlNameRequest request;

  auto outcome = client.IgnoresWrappingXmlName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const IgnoresWrappingXmlNameResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"foo":"bar"} )" */
    EXPECT_EQ(R"(bar)", result.GetFoo());
  });
}
