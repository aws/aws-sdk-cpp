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
  request.SetNormal(Aws::Utils::DateTime(1398796238L));

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithDateTimeFormat) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;
  request.SetDateTime(Aws::Utils::DateTime(1398796238L));

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithDateTimeOnTargetFormat) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;
  request.SetDateTimeOnTarget(Aws::Utils::DateTime(1398796238L));

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithEpochSecondsFormat) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;
  request.SetEpochSeconds(Aws::Utils::DateTime(1398796238L));

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithEpochSecondsOnTargetFormat) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;
  request.SetEpochSecondsOnTarget(Aws::Utils::DateTime(1398796238L));

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithHttpDateFormat) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;
  request.SetHttpDate(Aws::Utils::DateTime(1398796238L));

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(XmlTimestamps, XmlTimestampsWithHttpDateOnTargetFormat) {
  RestXmlProtocolClient client;
  XmlTimestampsRequest request;
  request.SetHttpDateOnTarget(Aws::Utils::DateTime(1398796238L));

  auto outcome = client.XmlTimestamps(request);
  AWS_ASSERT_SUCCESS(outcome);
}
