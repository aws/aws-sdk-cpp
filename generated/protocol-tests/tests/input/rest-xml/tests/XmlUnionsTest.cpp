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
  {
    XmlUnionShape requestUnionValue;
    {
      XmlNestedUnionStruct requestUnionValueStructValue;
      requestUnionValueStructValue.SetStringValue(R"(string)");
      requestUnionValueStructValue.SetBooleanValue(true);
      requestUnionValueStructValue.SetByteValue(1);
      requestUnionValueStructValue.SetShortValue(2);
      requestUnionValueStructValue.SetIntegerValue(3);
      requestUnionValueStructValue.SetLongValue(4);
      requestUnionValueStructValue.SetFloatValue(5.5);
      requestUnionValueStructValue.SetDoubleValue(6.5);
      requestUnionValue.SetStructValue(requestUnionValueStructValue);
    }
    request.SetUnionValue(requestUnionValue);
  }

  auto outcome = client.XmlUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithStringMember) {
  RestXmlProtocolClient client;
  XmlUnionsRequest request;
  {
    XmlUnionShape requestUnionValue;
    requestUnionValue.SetStringValue(R"(some string)");
    request.SetUnionValue(requestUnionValue);
  }

  auto outcome = client.XmlUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithBooleanMember) {
  RestXmlProtocolClient client;
  XmlUnionsRequest request;
  {
    XmlUnionShape requestUnionValue;
    requestUnionValue.SetBooleanValue(true);
    request.SetUnionValue(requestUnionValue);
  }

  auto outcome = client.XmlUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithUnionMember) {
  RestXmlProtocolClient client;
  XmlUnionsRequest request;
  {
    XmlUnionShape requestUnionValue;
    {
      XmlUnionShape requestUnionValueUnionValue;
      requestUnionValueUnionValue.SetBooleanValue(true);
      requestUnionValue.SetUnionValue(requestUnionValueUnionValue);
    }
    request.SetUnionValue(requestUnionValue);
  }

  auto outcome = client.XmlUnions(request);
  AWS_ASSERT_SUCCESS(outcome);
}
