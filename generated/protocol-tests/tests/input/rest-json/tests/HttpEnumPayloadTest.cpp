/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpEnumPayloadRequest.h>

using HttpEnumPayload = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpEnumPayload, RestJsonEnumPayloadRequest) {
  RestJsonProtocolClient client;
  HttpEnumPayloadRequest request;
  request.SetPayload(StringEnumMapper::GetStringEnumForName(R"e(enumvalue)e"));

  auto outcome = client.HttpEnumPayload(request);
  AWS_ASSERT_SUCCESS(outcome);
}
