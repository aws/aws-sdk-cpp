/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlEmptyMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEmptyMaps = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyMaps, QueryXmlEmptyMaps) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFhtbEVtcHR5TWFwc1Jlc3BvbnNlIHhtbG5zPSJodHRwczovL2V4YW1wbGUuY29tLyI+"
      "CiAgICA8WG1sRW1wdHlNYXBzUmVzdWx0PgogICAgICAgIDxteU1hcD4KICAgICAgICA8L215TWFwPgogICAgPC9YbWxFbXB0eU1hcHNSZXN1bHQ+"
      "CjwvWG1sRW1wdHlNYXBzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlEmptyMapsRequest request;

  auto outcome = client.XmlEmptyMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlEmptyMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"myMap":{}} )" */
    const Aws::Map<Aws::String, GreetingStruct>& resultMyMap = result.GetMyMap();
    EXPECT_EQ(0U, resultMyMap.size());
  });
}

AWS_PROTOCOL_TEST(XmlEmptyMaps, QueryXmlEmptySelfClosedMaps) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFhtbEVtcHR5TWFwc1Jlc3BvbnNlIHhtbG5zPSJodHRwczovL2V4YW1wbGUuY29tLyI+CiAgICA8WG1sRW1wdHlNYXBzUmVzdWx0PgogICAgICAgIDxteU1hcC8+"
      "CiAgICA8L1htbEVtcHR5TWFwc1Jlc3VsdD4KPC9YbWxFbXB0eU1hcHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlEmptyMapsRequest request;

  auto outcome = client.XmlEmptyMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlEmptyMapsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"myMap":{}} )" */
    const Aws::Map<Aws::String, GreetingStruct>& resultMyMap = result.GetMyMap();
    EXPECT_EQ(0U, resultMyMap.size());
  });
}
