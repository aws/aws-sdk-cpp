/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpStringPayloadRequest.h>

using HttpStringPayload = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpStringPayload, RestJsonStringPayloadRequest) {
  RestJsonProtocolClient client;
  HttpStringPayloadRequest request;
  request.SetBody([](){ return Aws::MakeShared<Aws::StringStream>("Test", R"(rawstring)", std::ios_base::in | std::ios_base::binary); }() );

  auto outcome = client.HttpStringPayload(request);
  AWS_ASSERT_SUCCESS(outcome);
}
