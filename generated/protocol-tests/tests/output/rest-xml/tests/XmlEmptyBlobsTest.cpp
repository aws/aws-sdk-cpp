/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlEmptyBlobsRequest.h>

using XmlEmptyBlobs = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyBlobs, XmlEmptyBlobs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbEVtcHR5QmxvYnNSZXNwb25zZT4KICAgIDxkYXRhPjwvZGF0YT4KPC9YbWxFbXB0eUJsb2JzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlEmptyBlobsRequest request;

  auto outcome = client.XmlEmptyBlobs(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(XmlEmptyBlobs, XmlEmptySelfClosedBlobs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbEVtcHR5QmxvYnNSZXNwb25zZT4KICAgIDxkYXRhLz4KPC9YbWxFbXB0eUJsb2JzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlEmptyBlobsRequest request;

  auto outcome = client.XmlEmptyBlobs(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
