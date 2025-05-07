/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/XmlEnumsRequest.h>

using XmlEnums = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(XmlEnums, Ec2XmlEnums) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body = "PFhtbEVudW1zUmVzcG9uc2UgeG1sbnM9Imh0dHBzOi8vZXhhbXBsZS5jb20vIj4KICAgIDxmb29FbnVtMT5Gb288L2Zvb0VudW0xPgogICAgPGZvb0VudW0yPjA8L2Zvb0VudW0yPgogICAgPGZvb0VudW0zPjE8L2Zvb0VudW0zPgogICAgPGZvb0VudW1MaXN0PgogICAgICAgIDxtZW1iZXI+Rm9vPC9tZW1iZXI+CiAgICAgICAgPG1lbWJlcj4wPC9tZW1iZXI+CiAgICA8L2Zvb0VudW1MaXN0PgogICAgPGZvb0VudW1TZXQ+CiAgICAgICAgPG1lbWJlcj5Gb288L21lbWJlcj4KICAgICAgICA8bWVtYmVyPjA8L21lbWJlcj4KICAgIDwvZm9vRW51bVNldD4KICAgIDxmb29FbnVtTWFwPgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPGtleT5oaTwva2V5PgogICAgICAgICAgICA8dmFsdWU+Rm9vPC92YWx1ZT4KICAgICAgICA8L2VudHJ5PgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPGtleT56ZXJvPC9rZXk+CiAgICAgICAgICAgIDx2YWx1ZT4wPC92YWx1ZT4KICAgICAgICA8L2VudHJ5PgogICAgPC9mb29FbnVtTWFwPgogICAgPHJlcXVlc3RJZD5yZXF1ZXN0aWQ8L3JlcXVlc3RJZD4KPC9YbWxFbnVtc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  XmlEnumsRequest request;

  auto outcome = client.XmlEnums(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
