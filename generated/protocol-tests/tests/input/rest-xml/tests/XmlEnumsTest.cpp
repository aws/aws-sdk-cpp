/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlEnumsRequest.h>

using XmlEnums = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlEnums, XmlEnums) {
  RestXmlProtocolClient client;
  XmlEnumsRequest request;
  request.SetFooEnum1(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));
  request.SetFooEnum2(FooEnumMapper::GetFooEnumForName(R"e(0)e"));
  request.SetFooEnum3(FooEnumMapper::GetFooEnumForName(R"e(1)e"));
  request.SetFooEnumList({FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), FooEnumMapper::GetFooEnumForName(R"e(0)e")});
  request.SetFooEnumSet({FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), FooEnumMapper::GetFooEnumForName(R"e(0)e")});
  request.SetFooEnumMap({{"hi",  FooEnumMapper::GetFooEnumForName(R"e(Foo)e")}, {"zero",  FooEnumMapper::GetFooEnumForName(R"e(0)e")}});

  auto outcome = client.XmlEnums(request);
  AWS_ASSERT_SUCCESS(outcome);
}
