/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlMaps = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlMaps, XmlMaps) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  XmlMapsRequest request;
  {
    GreetingStruct requestMyMapItem;
    requestMyMapItem.SetHi(R"(there)");
    request.AddMyMap("foo", requestMyMapItem);
  }
  {
    GreetingStruct requestMyMapItem;
    requestMyMapItem.SetHi(R"(bye)");
    request.AddMyMap("baz", requestMyMapItem);
  }

  auto outcome = client.XmlMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PFhtbE1hcHNSZXF1ZXN0PgogICAgPG15TWFwPgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPGtleT5mb288L2tleT4KICAgICAgICAgICAgPHZhbHVlPgogICAgICAg"
      "ICAgICAgICAgPGhpPnRoZXJlPC9oaT4KICAgICAgICAgICAgPC92YWx1ZT4KICAgICAgICA8L2VudHJ5PgogICAgICAgIDxlbnRyeT4KICAgICAgICAgICAgPGtleT5iYXo8"
      "L2tleT4KICAgICAgICAgICAgPHZhbHVlPgogICAgICAgICAgICAgICAgPGhpPmJ5ZTwvaGk+CiAgICAgICAgICAgIDwvdmFsdWU+"
      "CiAgICAgICAgPC9lbnRyeT4KICAgIDwvbXlNYXA+CjwvWG1sTWFwc1JlcXVlc3Q+Cg==";
  expectedRq.uri = "/XmlMaps";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
