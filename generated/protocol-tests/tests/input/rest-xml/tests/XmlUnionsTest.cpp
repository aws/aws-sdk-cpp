/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlUnionsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlUnions = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithStructMember) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

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
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFhtbFVuaW9uc1JlcXVlc3Q+"
      "CiAgICA8dW5pb25WYWx1ZT4KICAgICAgIDxzdHJ1Y3RWYWx1ZT4KICAgICAgICAgIDxzdHJpbmdWYWx1ZT5zdHJpbmc8L3N0cmluZ1ZhbHVlPgogICAgICAgICAgPGJvb2xl"
      "YW5WYWx1ZT50cnVlPC9ib29sZWFuVmFsdWU+CiAgICAgICAgICA8Ynl0ZVZhbHVlPjE8L2J5dGVWYWx1ZT4KICAgICAgICAgIDxzaG9ydFZhbHVlPjI8L3Nob3J0VmFsdWU+"
      "CiAgICAgICAgICA8aW50ZWdlclZhbHVlPjM8L2ludGVnZXJWYWx1ZT4KICAgICAgICAgIDxsb25nVmFsdWU+NDwvbG9uZ1ZhbHVlPgogICAgICAgICAgPGZsb2F0VmFsdWU+"
      "NS41PC9mbG9hdFZhbHVlPgogICAgICAgICAgPGRvdWJsZVZhbHVlPjYuNTwvZG91YmxlVmFsdWU+"
      "CiAgICAgICA8L3N0cnVjdFZhbHVlPgogICAgPC91bmlvblZhbHVlPgo8L1htbFVuaW9uc1JlcXVlc3Q+Cg==";
  expectedRq.uri = "/XmlUnions";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithStringMember) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlUnionsRequest request;
  {
    XmlUnionShape requestUnionValue;
    requestUnionValue.SetStringValue(R"(some string)");
    request.SetUnionValue(requestUnionValue);
  }

  auto outcome = client.XmlUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFhtbFVuaW9uc1JlcXVlc3Q+CiAgIDx1bmlvblZhbHVlPgogICAgICA8c3RyaW5nVmFsdWU+c29tZSBzdHJpbmc8L3N0cmluZ1ZhbHVlPgogICA8L3VuaW9uVmFsdWU+"
      "CjwvWG1sVW5pb25zUmVxdWVzdD4K";
  expectedRq.uri = "/XmlUnions";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithBooleanMember) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlUnionsRequest request;
  {
    XmlUnionShape requestUnionValue;
    requestUnionValue.SetBooleanValue(true);
    request.SetUnionValue(requestUnionValue);
  }

  auto outcome = client.XmlUnions(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFhtbFVuaW9uc1JlcXVlc3Q+"
      "CiAgIDx1bmlvblZhbHVlPgogICAgICA8Ym9vbGVhblZhbHVlPnRydWU8L2Jvb2xlYW5WYWx1ZT4KICAgPC91bmlvblZhbHVlPgo8L1htbFVuaW9uc1JlcXVlc3Q+Cg==";
  expectedRq.uri = "/XmlUnions";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithUnionMember) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

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
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFhtbFVuaW9uc1JlcXVlc3Q+CiAgIDx1bmlvblZhbHVlPgogICAgICA8dW5pb25WYWx1ZT4KICAgICAgICAgPGJvb2xlYW5WYWx1ZT50cnVlPC9ib29sZWFuVmFsdWU+"
      "CiAgICAgIDwvdW5pb25WYWx1ZT4KICAgPC91bmlvblZhbHVlPgo8L1htbFVuaW9uc1JlcXVlc3Q+Cg==";
  expectedRq.uri = "/XmlUnions";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
