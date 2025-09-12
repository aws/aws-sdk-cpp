/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlBlobsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlBlobs = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlBlobs, XmlBlobs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlBlobsRequest request;
  request.SetData(Aws::String(R"(value)"));

  auto outcome = client.XmlBlobs(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "PFhtbEJsb2JzUmVxdWVzdD4KICAgIDxkYXRhPmRtRnNkV1U9PC9kYXRhPgo8L1htbEJsb2JzUmVxdWVzdD4K";
  expectedRq.uri = "/XmlBlobs";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
