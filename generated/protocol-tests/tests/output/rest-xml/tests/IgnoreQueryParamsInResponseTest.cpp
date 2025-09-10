/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/IgnoreQueryParamsInResponseRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using IgnoreQueryParamsInResponse = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(IgnoreQueryParamsInResponse, IgnoreQueryParamsInResponse) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PElnbm9yZVF1ZXJ5UGFyYW1zSW5SZXNwb25zZU91dHB1dD48YmF6PmJhbTwvYmF6PjwvSWdub3JlUXVlcnlQYXJhbXNJblJlc3BvbnNlT3V0cHV0Pg==";
  SetMockResponse(mockRs);

  IgnoreQueryParamsInResponseRequest request;

  auto outcome = client.IgnoreQueryParamsInResponse(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const IgnoreQueryParamsInResponseResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"baz":"bam"} )" */
    EXPECT_EQ(R"(bam)", result.GetBaz());
  });
}
