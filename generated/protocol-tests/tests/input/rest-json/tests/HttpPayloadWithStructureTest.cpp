/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpPayloadWithStructureRequest.h>

using HttpPayloadWithStructure = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithStructure, RestJsonHttpPayloadWithStructure) {
  RestJsonProtocolClient client;
  HttpPayloadWithStructureRequest request;
  {
    NestedPayload requestNested;
    requestNested.SetGreeting(R"(hello)");
    requestNested.SetName(R"(Phreddy)");
    request.SetNested(requestNested);
  }

  auto outcome = client.HttpPayloadWithStructure(request);
  AWS_ASSERT_SUCCESS(outcome);
}
