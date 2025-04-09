/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/BodyWithXmlNameRequest.h>

using BodyWithXmlName = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(BodyWithXmlName, BodyWithXmlName) {
  RestXmlProtocolClient client;
  BodyWithXmlNameRequest request;

  auto outcome = client.BodyWithXmlName(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
