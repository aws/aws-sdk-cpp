/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlEmptyListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlEmptyLists = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlEmptyLists, XmlEmptyLists) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlEmptyListsRequest request;
  request.SetStringList({});
  request.SetStringSet({});

  auto outcome = client.XmlEmptyLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "PFhtbEVtcHR5TGlzdHNSZXF1ZXN0PgogICAgICAgIDxzdHJpbmdMaXN0Pjwvc3RyaW5nTGlzdD4KICAgICAgICA8c3RyaW5nU2V0Pjwvc3RyaW5nU2V0Pgo8L1htbEVtcHR5"
      "TGlzdHNSZXF1ZXN0Pgo=";
  expectedRq.uri = "/XmlEmptyLists";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
