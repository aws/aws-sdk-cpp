/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/DatetimeOffsetsRequest.h>

using DatetimeOffsets = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(DatetimeOffsets, RestXmlDateTimeWithNegativeOffset) {
  RestXmlProtocolClient client;
  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(DatetimeOffsets, RestXmlDateTimeWithPositiveOffset) {
  RestXmlProtocolClient client;
  DatetimeOffsetsRequest request;

  auto outcome = client.DatetimeOffsets(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
