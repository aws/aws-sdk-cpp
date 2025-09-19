/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpPayloadWithXmlNamespace = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithXmlNamespace, HttpPayloadWithXmlNamespace) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFBheWxvYWRXaXRoWG1sTmFtZXNwYWNlIHhtbG5zPSJodHRwOi8vZm9vLmNvbSI+"
      "CiAgICA8bmFtZT5QaHJlZGR5PC9uYW1lPgo8L1BheWxvYWRXaXRoWG1sTmFtZXNwYWNlPg==";
  SetMockResponse(mockRs);

  HttpPayloadWithXmlNamespaceRequest request;

  auto outcome = client.HttpPayloadWithXmlNamespace(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpPayloadWithXmlNamespaceResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"nested":{"name":"Phreddy"}} )" */
    {
      const PayloadWithXmlNamespace& resultNested = result.GetNested();
      EXPECT_EQ(R"(Phreddy)", resultNested.GetName());
    }
  });
}
