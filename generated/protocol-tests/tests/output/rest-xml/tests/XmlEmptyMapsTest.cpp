/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlEmptyMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEmptyMaps = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyMaps, XmlEmptyMaps) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbEVtcHR5TWFwc1Jlc3BvbnNlPgogICAgPG15TWFwPjwvbXlNYXA+CjwvWG1sRW1wdHlNYXBzUmVzcG9uc2U+Cg==";
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

AWS_PROTOCOL_TEST(XmlEmptyMaps, XmlEmptySelfClosedMaps) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbEVtcHR5TWFwc1Jlc3BvbnNlPgogICAgPG15TWFwLz4KPC9YbWxFbXB0eU1hcHNSZXNwb25zZT4K";
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
