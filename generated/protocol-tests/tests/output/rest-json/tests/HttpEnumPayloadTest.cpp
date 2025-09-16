/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpEnumPayloadRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpEnumPayload = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpEnumPayload, RestJsonEnumPayloadResponse) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/plain)"}};
  mockRs.body = "ZW51bXZhbHVl";
  SetMockResponse(mockRs);

  HttpEnumPayloadRequest request;

  auto outcome = client.HttpEnumPayload(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpEnumPayloadResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"payload":"enumvalue"} )" */
    EXPECT_EQ(StringEnumMapper::GetStringEnumForName(R"e(enumvalue)e"), result.GetPayload());
  });
}
