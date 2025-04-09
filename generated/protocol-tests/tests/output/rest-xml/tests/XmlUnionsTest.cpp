/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlUnionsRequest.h>

using XmlUnions = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithStructMember) {
  RestXmlProtocolClient client;
  XmlUnionsRequest request;

  auto outcome = client.XmlUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithStringMember) {
  RestXmlProtocolClient client;
  XmlUnionsRequest request;

  auto outcome = client.XmlUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithBooleanMember) {
  RestXmlProtocolClient client;
  XmlUnionsRequest request;

  auto outcome = client.XmlUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithUnionMember) {
  RestXmlProtocolClient client;
  XmlUnionsRequest request;

  auto outcome = client.XmlUnions(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
