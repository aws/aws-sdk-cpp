/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpChecksumRequiredRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using HttpChecksumRequired = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpChecksumRequired, RestJsonHttpChecksumRequired) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpChecksumRequiredRequest request;
  request.SetFoo(R"(base64 encoded md5 checksum)");

  auto outcome = client.HttpChecksumRequired(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgImZvbyI6ImJhc2U2NCBlbmNvZGVkIG1kNSBjaGVja3N1bSIKfQo=";
  expectedRq.uri = "/HttpChecksumRequired";
  expectedRq.headers = {{"Content-MD5", R"(iB0/3YSo7maijL0IGOgA9g==)"}, {"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
