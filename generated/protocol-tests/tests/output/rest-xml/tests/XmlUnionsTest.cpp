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
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbFVuaW9uc1Jlc3BvbnNlPgogICAgPHVuaW9uVmFsdWU+CiAgICAgICA8c3RydWN0VmFsdWU+CiAgICAgICAgICA8c3RyaW5nVmFsdWU+c3RyaW5nPC9zdHJpbmdWYWx1ZT4KICAgICAgICAgIDxib29sZWFuVmFsdWU+dHJ1ZTwvYm9vbGVhblZhbHVlPgogICAgICAgICAgPGJ5dGVWYWx1ZT4xPC9ieXRlVmFsdWU+CiAgICAgICAgICA8c2hvcnRWYWx1ZT4yPC9zaG9ydFZhbHVlPgogICAgICAgICAgPGludGVnZXJWYWx1ZT4zPC9pbnRlZ2VyVmFsdWU+CiAgICAgICAgICA8bG9uZ1ZhbHVlPjQ8L2xvbmdWYWx1ZT4KICAgICAgICAgIDxmbG9hdFZhbHVlPjUuNTwvZmxvYXRWYWx1ZT4KICAgICAgICAgIDxkb3VibGVWYWx1ZT42LjU8L2RvdWJsZVZhbHVlPgogICAgICAgPC9zdHJ1Y3RWYWx1ZT4KICAgIDwvdW5pb25WYWx1ZT4KPC9YbWxVbmlvbnNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlUnionsRequest request;

  auto outcome = client.XmlUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithStringMember) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbFVuaW9uc1Jlc3BvbnNlPgogICA8dW5pb25WYWx1ZT4KICAgICAgPHN0cmluZ1ZhbHVlPnNvbWUgc3RyaW5nPC9zdHJpbmdWYWx1ZT4KICAgPC91bmlvblZhbHVlPgo8L1htbFVuaW9uc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlUnionsRequest request;

  auto outcome = client.XmlUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithBooleanMember) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbFVuaW9uc1Jlc3BvbnNlPgogICA8dW5pb25WYWx1ZT4KICAgICAgPGJvb2xlYW5WYWx1ZT50cnVlPC9ib29sZWFuVmFsdWU+CiAgIDwvdW5pb25WYWx1ZT4KPC9YbWxVbmlvbnNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlUnionsRequest request;

  auto outcome = client.XmlUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlUnions, XmlUnionsWithUnionMember) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbFVuaW9uc1Jlc3BvbnNlPgogICA8dW5pb25WYWx1ZT4KICAgICAgPHVuaW9uVmFsdWU+CiAgICAgICAgIDxib29sZWFuVmFsdWU+dHJ1ZTwvYm9vbGVhblZhbHVlPgogICAgICA8L3VuaW9uVmFsdWU+CiAgIDwvdW5pb25WYWx1ZT4KPC9YbWxVbmlvbnNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlUnionsRequest request;

  auto outcome = client.XmlUnions(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
