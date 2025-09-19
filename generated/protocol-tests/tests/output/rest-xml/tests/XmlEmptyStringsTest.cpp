/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlEmptyStringsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEmptyStrings = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyStrings, XmlEmptyStrings) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbEVtcHR5U3RyaW5nc1Jlc3BvbnNlPgogICAgPGVtcHR5U3RyaW5nPjwvZW1wdHlTdHJpbmc+CjwvWG1sRW1wdHlTdHJpbmdzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlEmptyStringsRequest request;

  auto outcome = client.XmlEmptyStrings(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlEmptyStringsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"emptyString":""} )" */
    EXPECT_EQ(R"()", result.GetEmptyString());
  });
}

AWS_PROTOCOL_TEST(XmlEmptyStrings, XmlEmptySelfClosedStrings) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbEVtcHR5U3RyaW5nc1Jlc3BvbnNlPgogICAgPGVtcHR5U3RyaW5nLz4KPC9YbWxFbXB0eVN0cmluZ3NSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlEmptyStringsRequest request;

  auto outcome = client.XmlEmptyStrings(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlEmptyStringsResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"emptyString":""} )" */
    EXPECT_EQ(R"()", result.GetEmptyString());
  });
}
