/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlIntEnumsRequest.h>

using XmlIntEnums = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlIntEnums, XmlIntEnums) {
  RestXmlProtocolClient client;
  XmlIntEnumsRequest request;
  request.SetIntEnum1(1);
  request.SetIntEnum2(2);
  request.SetIntEnum3(3);
  request.SetIntEnumList({1, 2});
  request.SetIntEnumSet({1, 2});
  request.SetIntEnumMap({{"a",  1}, {"b",  2}});

  auto outcome = client.XmlIntEnums(request);
  AWS_ASSERT_SUCCESS(outcome);
}
