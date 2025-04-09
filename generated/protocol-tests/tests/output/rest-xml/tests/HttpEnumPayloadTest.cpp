/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpEnumPayloadRequest.h>

using HttpEnumPayload = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpEnumPayload, RestXmlEnumPayloadResponse) {
  RestXmlProtocolClient client;
  HttpEnumPayloadRequest request;

  auto outcome = client.HttpEnumPayload(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
