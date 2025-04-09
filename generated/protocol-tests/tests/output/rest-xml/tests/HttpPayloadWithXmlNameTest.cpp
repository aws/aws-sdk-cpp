/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNameRequest.h>

using HttpPayloadWithXmlName = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithXmlName, HttpPayloadWithXmlName) {
  RestXmlProtocolClient client;
  HttpPayloadWithXmlNameRequest request;

  auto outcome = client.HttpPayloadWithXmlName(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
