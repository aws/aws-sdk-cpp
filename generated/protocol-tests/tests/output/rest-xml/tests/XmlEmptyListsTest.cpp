﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlEmptyListsRequest.h>

using XmlEmptyLists = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyLists, XmlEmptyLists) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbEVtcHR5TGlzdHNSZXNwb25zZT4KICAgICAgICA8c3RyaW5nTGlzdC8+CiAgICAgICAgPHN0cmluZ1NldD48L3N0cmluZ1NldD4KPC9YbWxFbXB0eUxpc3RzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  XmlEmptyListsRequest request;

  auto outcome = client.XmlEmptyLists(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
