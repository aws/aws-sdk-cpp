/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlEmptyBlobsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEmptyBlobs = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyBlobs, QueryXmlEmptyBlobs) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFhtbEVtcHR5QmxvYnNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbEVtcHR5QmxvYnNSZXN1bHQ+CiAgICAgICAgPGRhdGE+"
      "PC9kYXRhPgogICAgPC9YbWxFbXB0eUJsb2JzUmVzdWx0Pgo8L1htbEVtcHR5QmxvYnNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlEmptyBlobsRequest request;

  auto outcome = client.XmlEmptyBlobs(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlEmptyBlobsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"data":""} )" */
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"()"), result.GetData());
  });
}

AWS_PROTOCOL_TEST(XmlEmptyBlobs, QueryXmlEmptySelfClosedBlobs) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body =
      "PFhtbEVtcHR5QmxvYnNSZXNwb25zZSB4bWxucz0iaHR0cHM6Ly9leGFtcGxlLmNvbS8iPgogICAgPFhtbEVtcHR5QmxvYnNSZXN1bHQ+"
      "CiAgICAgICAgPGRhdGEvPgogICAgPC9YbWxFbXB0eUJsb2JzUmVzdWx0Pgo8L1htbEVtcHR5QmxvYnNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlEmptyBlobsRequest request;

  auto outcome = client.XmlEmptyBlobs(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlEmptyBlobsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"data":""} )" */
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"()"), result.GetData());
  });
}
