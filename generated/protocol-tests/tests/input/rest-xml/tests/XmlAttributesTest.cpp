/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlAttributesRequest.h>

using XmlAttributes = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlAttributes, XmlAttributes) {
  RestXmlProtocolClient client;
  XmlAttributesRequest request;
  request.SetFoo(R"(hi)");
  request.SetAttr(R"(test)");

  auto outcome = client.XmlAttributes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(XmlAttributes, XmlAttributesWithEscaping) {
  RestXmlProtocolClient client;
  XmlAttributesRequest request;
  request.SetFoo(R"(hi)");
  request.SetAttr(R"(<test&mock>)");

  auto outcome = client.XmlAttributes(request);
  AWS_ASSERT_SUCCESS(outcome);
}
