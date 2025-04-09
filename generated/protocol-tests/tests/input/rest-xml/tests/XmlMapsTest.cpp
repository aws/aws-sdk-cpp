/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlMapsRequest.h>

using XmlMaps = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlMaps, XmlMaps) {
  RestXmlProtocolClient client;
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
  AWS_ASSERT_SUCCESS(outcome);
}
