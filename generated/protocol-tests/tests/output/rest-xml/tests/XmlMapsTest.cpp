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
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFhtbE1hcHNSZXNwb25zZT4KICAgIDxteU1hcD4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxrZXk+Zm9vPC9rZXk+CiAgICAgICAgICAgIDx2YWx1ZT4KICAgICAgICAgICAgICAgIDxoaT50aGVyZTwvaGk+CiAgICAgICAgICAgIDwvdmFsdWU+CiAgICAgICAgPC9lbnRyeT4KICAgICAgICA8ZW50cnk+CiAgICAgICAgICAgIDxrZXk+YmF6PC9rZXk+CiAgICAgICAgICAgIDx2YWx1ZT4KICAgICAgICAgICAgICAgIDxoaT5ieWU8L2hpPgogICAgICAgICAgICA8L3ZhbHVlPgogICAgICAgIDwvZW50cnk+CiAgICA8L215TWFwPgo8L1htbE1hcHNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlMapsRequest request;

  auto outcome = client.XmlMaps(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
