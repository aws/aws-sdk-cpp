/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpResponseCodeRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpResponseCode = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpResponseCode, RestXmlHttpResponseCode) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 201;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  SetMockResponse(mockRs);

  HttpResponseCodeRequest request;

  auto outcome = client.HttpResponseCode(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpResponseCodeResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"Status":201} )" */
    EXPECT_EQ(201, result.GetStatus());
  });
}
