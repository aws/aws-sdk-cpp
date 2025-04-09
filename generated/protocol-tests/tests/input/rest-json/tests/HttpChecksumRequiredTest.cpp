/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpChecksumRequiredRequest.h>

using HttpChecksumRequired = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpChecksumRequired, RestJsonHttpChecksumRequired) {
  RestJsonProtocolClient client;
  HttpChecksumRequiredRequest request;
  request.SetFoo(R"(base64 encoded md5 checksum)");

  auto outcome = client.HttpChecksumRequired(request);
  AWS_ASSERT_SUCCESS(outcome);
}
