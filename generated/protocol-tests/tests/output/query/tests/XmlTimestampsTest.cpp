/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/XmlTimestampsRequest.h>

using XmlTimestamps = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestamps) {
  QueryProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestampsWithDateTimeFormat) {
  QueryProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestampsWithDateTimeOnTargetFormat) {
  QueryProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestampsWithEpochSecondsFormat) {
  QueryProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestampsWithEpochSecondsOnTargetFormat) {
  QueryProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestampsWithHttpDateFormat) {
  QueryProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(XmlTimestamps, QueryXmlTimestampsWithHttpDateOnTargetFormat) {
  QueryProtocolClient client;
  XmlTimestampsRequest request;

  auto outcome = client.XmlTimestamps(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
