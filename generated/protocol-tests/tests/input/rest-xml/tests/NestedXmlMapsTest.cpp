/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapsRequest.h>

using NestedXmlMaps = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(NestedXmlMaps, NestedXmlMapRequest) {
  RestXmlProtocolClient client;
  NestedXmlMapsRequest request;
  request.SetNestedMap({{"foo",  {{"bar",  FooEnumMapper::GetFooEnumForName(R"e(Bar)e")}}}});

  auto outcome = client.NestedXmlMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(NestedXmlMaps, FlatNestedXmlMapRequest) {
  RestXmlProtocolClient client;
  NestedXmlMapsRequest request;
  request.SetFlatNestedMap({{"foo",  {{"bar",  FooEnumMapper::GetFooEnumForName(R"e(Bar)e")}}}});

  auto outcome = client.NestedXmlMaps(request);
  AWS_ASSERT_SUCCESS(outcome);
}
