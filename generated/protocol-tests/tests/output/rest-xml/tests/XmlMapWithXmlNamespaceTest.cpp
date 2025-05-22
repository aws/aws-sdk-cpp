﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlMapWithXmlNamespaceRequest.h>

using XmlMapWithXmlNamespace = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlMapWithXmlNamespace, RestXmlXmlMapWithXmlNamespace) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbE1hcFdpdGhYbWxOYW1lc3BhY2VSZXNwb25zZT4KICAgIDxLVlAgeG1sbnM9Imh0dHBzOi8vdGhlLW1lbWJlci5leGFtcGxlLmNvbSI+CiAgICAgICAgPGVudHJ5PgogICAgICAgICAgICA8SyB4bWxucz0iaHR0cHM6Ly90aGUta2V5LmV4YW1wbGUuY29tIj5hPC9LPgogICAgICAgICAgICA8ViB4bWxucz0iaHR0cHM6Ly90aGUtdmFsdWUuZXhhbXBsZS5jb20iPkE8L1Y+CiAgICAgICAgPC9lbnRyeT4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxLIHhtbG5zPSJodHRwczovL3RoZS1rZXkuZXhhbXBsZS5jb20iPmI8L0s+CiAgICAgICAgICAgIDxWIHhtbG5zPSJodHRwczovL3RoZS12YWx1ZS5leGFtcGxlLmNvbSI+QjwvVj4KICAgICAgICA8L2VudHJ5PgogICAgPC9LVlA+CjwvWG1sTWFwV2l0aFhtbE5hbWVzcGFjZVJlc3BvbnNlPg==";
  SetMockResponse(mockRs);

  XmlMapWithXmlNamespaceRequest request;

  auto outcome = client.XmlMapWithXmlNamespace(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlMapWithXmlNamespaceResult& result = outcome.GetResult();
  /* expectedResult = R"( {"myMap":{"a":"A","b":"B"}} )" */
  const Aws::Map<Aws::String, Aws::String>& resultMyMap = result.GetMyMap();
  EXPECT_EQ(2U, resultMyMap.size());
  EXPECT_TRUE(resultMyMap.find("a") != resultMyMap.end());
  EXPECT_EQ(R"(A)", resultMyMap.at("a"));
  EXPECT_TRUE(resultMyMap.find("b") != resultMyMap.end());
  EXPECT_EQ(R"(B)", resultMyMap.at("b"));
}
