/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/TimestampFormatHeadersRequest.h>

using TimestampFormatHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(TimestampFormatHeaders, TimestampFormatHeaders) {
  RestXmlProtocolClient client;
  TimestampFormatHeadersRequest request;
  request.SetMemberEpochSeconds(Aws::Utils::DateTime(1576540098));
  request.SetMemberHttpDate(Aws::Utils::DateTime(1576540098));
  request.SetMemberDateTime(Aws::Utils::DateTime(1576540098));
  request.SetDefaultFormat(Aws::Utils::DateTime(1576540098));
  request.SetTargetEpochSeconds(Aws::Utils::DateTime(1576540098));
  request.SetTargetHttpDate(Aws::Utils::DateTime(1576540098));
  request.SetTargetDateTime(Aws::Utils::DateTime(1576540098));

  auto outcome = client.TimestampFormatHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}
