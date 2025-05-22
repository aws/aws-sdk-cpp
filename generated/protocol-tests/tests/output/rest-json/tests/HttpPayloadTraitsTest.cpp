﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/HttpPayloadTraitsRequest.h>

using HttpPayloadTraits = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadTraits, RestJsonHttpPayloadTraitsWithBlob) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Foo", R"(Foo)"}};
  mockRs.body = "YmxvYmJ5IGJsb2IgYmxvYg==";
  SetMockResponse(mockRs);

  HttpPayloadTraitsRequest request;

  auto outcome = client.HttpPayloadTraits(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpPayloadTraitsResult& result = outcome.GetResult();
  /* expectedResult = R"( {"foo":"Foo","blob":"blobby blob blob"} )" */
  EXPECT_EQ(R"(Foo)", result.GetFoo());
  const Aws::String resultBlob = [&result](){Aws::StringStream ss; ss << result.GetBlob().rdbuf(); return ss.str();}();
  EXPECT_STREQ(R"(blobby blob blob)", resultBlob.c_str());
}

AWS_PROTOCOL_TEST(HttpPayloadTraits, RestJsonHttpPayloadTraitsWithNoBlobBody) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Foo", R"(Foo)"}};
  SetMockResponse(mockRs);

  HttpPayloadTraitsRequest request;

  auto outcome = client.HttpPayloadTraits(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpPayloadTraitsResult& result = outcome.GetResult();
  /* expectedResult = R"( {"foo":"Foo"} )" */
  EXPECT_EQ(R"(Foo)", result.GetFoo());
}
