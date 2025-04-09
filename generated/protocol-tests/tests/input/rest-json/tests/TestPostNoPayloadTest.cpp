/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TestPostNoPayloadRequest.h>

using TestPostNoPayload = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TestPostNoPayload, RestJsonHttpPostWithNoModeledBody) {
  RestJsonProtocolClient client;
  TestPostNoPayloadRequest request;

  auto outcome = client.TestPostNoPayload(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(TestPostNoPayload, RestJsonHttpWithPostHeaderMemberNoModeledBody) {
  RestJsonProtocolClient client;
  TestPostNoPayloadRequest request;
  request.SetTestId(R"(t-12345)");

  auto outcome = client.TestPostNoPayload(request);
  AWS_ASSERT_SUCCESS(outcome);
}
