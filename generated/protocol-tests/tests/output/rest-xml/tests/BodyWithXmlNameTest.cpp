/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/BodyWithXmlNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using BodyWithXmlName = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(BodyWithXmlName, BodyWithXmlName) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PEFob3k+PG5lc3RlZD48bmFtZT5QaHJlZGR5PC9uYW1lPjwvbmVzdGVkPjwvQWhveT4=";
  SetMockResponse(mockRs);

  BodyWithXmlNameRequest request;

  auto outcome = client.BodyWithXmlName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const BodyWithXmlNameResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"nested":{"name":"Phreddy"}} )" */
    {
      const PayloadWithXmlName& resultNested = result.GetNested();
      EXPECT_EQ(R"(Phreddy)", resultNested.GetName());
    }
  });
}
