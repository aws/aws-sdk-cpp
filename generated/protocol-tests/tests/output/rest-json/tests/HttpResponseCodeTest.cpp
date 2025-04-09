/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpResponseCodeRequest.h>

using HttpResponseCode = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpResponseCode, RestJsonHttpResponseCode) {
  RestJsonProtocolClient client;
  HttpResponseCodeRequest request;

  auto outcome = client.HttpResponseCode(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(HttpResponseCode, RestJsonHttpResponseCodeWithNoPayload) {
  RestJsonProtocolClient client;
  HttpResponseCodeRequest request;

  auto outcome = client.HttpResponseCode(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
