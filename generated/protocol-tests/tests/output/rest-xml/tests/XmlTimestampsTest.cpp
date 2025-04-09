/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlTimestampsRequest.h>

using XmlTimestamps = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestamps) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithDateTimeFormat) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithDateTimeOnTargetFormat) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithEpochSecondsFormat) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithEpochSecondsOnTargetFormat) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithHttpDateFormat) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithHttpDateOnTargetFormat) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
