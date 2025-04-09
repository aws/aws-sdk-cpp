/**
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
  RestXmlProtocolClient client;
  XmlEmptyListsRequest request;
  request.SetStringList({});
  request.SetStringSet({});

  auto outcome = client.XmlEmptyLists(request);
  AWS_ASSERT_SUCCESS(outcome);
}
