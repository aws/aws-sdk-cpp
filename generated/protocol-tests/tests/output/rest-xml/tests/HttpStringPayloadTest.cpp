/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpStringPayloadRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpStringPayload = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpStringPayload, RestXmlStringPayloadResponse) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/plain)"}};
  mockRs.body = "cmF3c3RyaW5n";
  SetMockResponse(mockRs);

  HttpStringPayloadRequest request;

  auto outcome = client.HttpStringPayload(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpStringPayloadResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"payload":"rawstring"} )" */
    const Aws::String resultPayload = [&result]() {
      Aws::StringStream ss;
      ss << result.GetPayload().rdbuf();
      return ss.str();
    }();
    EXPECT_STREQ(R"(rawstring)", resultPayload.c_str());
  });
}
