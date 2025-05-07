﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/OmitsNullSerializesEmptyStringRequest.h>

using OmitsNullSerializesEmptyString = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(OmitsNullSerializesEmptyString, RestJsonOmitsNullQuery) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  OmitsNullSerializesEmptyStringRequest request;
  request.SetNullValue(R"(null)");

  auto outcome = client.OmitsNullSerializesEmptyString(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/OmitsNullSerializesEmptyString";
  ValidateRequestSent(expectedRq);
}

AWS_PROTOCOL_TEST(OmitsNullSerializesEmptyString, RestJsonSerializesEmptyQueryValue) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  OmitsNullSerializesEmptyStringRequest request;
  request.SetEmptyString(R"()");

  auto outcome = client.OmitsNullSerializesEmptyString(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/OmitsNullSerializesEmptyString?Empty=";
  ValidateRequestSent(expectedRq);
}
