﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpRequestWithLabelsAndTimestampFormatRequest.h>

using HttpRequestWithLabelsAndTimestampFormat = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpRequestWithLabelsAndTimestampFormat, HttpRequestWithLabelsAndTimestampFormat) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  HttpRequestWithLabelsAndTimestampFormatRequest request;
  request.SetMemberEpochSeconds(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));
  request.SetMemberHttpDate(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));
  request.SetMemberDateTime(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));
  request.SetDefaultFormat(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));
  request.SetTargetEpochSeconds(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));
  request.SetTargetHttpDate(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));
  request.SetTargetDateTime(Aws::Utils::DateTime(static_cast<int64_t>(1576540098)));

  auto outcome = client.HttpRequestWithLabelsAndTimestampFormat(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/HttpRequestWithLabelsAndTimestampFormat/1576540098/Mon%2C%2016%20Dec%202019%2023%3A48%3A18%20GMT/2019-12-16T23%3A48%3A18Z/2019-12-16T23%3A48%3A18Z/1576540098/Mon%2C%2016%20Dec%202019%2023%3A48%3A18%20GMT/2019-12-16T23%3A48%3A18Z";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
