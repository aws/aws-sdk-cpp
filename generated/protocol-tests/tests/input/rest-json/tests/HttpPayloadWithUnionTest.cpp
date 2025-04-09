/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithUnionRequest.h>

using HttpPayloadWithUnion = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithUnion, RestJsonHttpPayloadWithUnion) {
  RestJsonProtocolClient client;
  HttpPayloadWithUnionRequest request;
  {
    UnionPayload requestNested;
    requestNested.SetGreeting(R"(hello)");
    request.SetNested(requestNested);
  }

  auto outcome = client.HttpPayloadWithUnion(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(HttpPayloadWithUnion, RestJsonHttpPayloadWithUnsetUnion) {
  RestJsonProtocolClient client;
  HttpPayloadWithUnionRequest request;

  auto outcome = client.HttpPayloadWithUnion(request);
  AWS_ASSERT_SUCCESS(outcome);
}
