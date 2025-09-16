/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/XmlNamespacesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using XmlNamespaces = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(XmlNamespaces, XmlNamespaces) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body =
      "PFhtbE5hbWVzcGFjZXNSZXNwb25zZSB4bWxucz0iaHR0cDovL2Zvby5jb20iPgogICAgPG5lc3RlZCB4bWxucz0iaHR0cDovL2Zvby5jb20iPgogICAgICAgIDxmb28geG1s"
      "bnM6YmF6PSJodHRwOi8vYmF6LmNvbSI+Rm9vPC9mb28+"
      "CiAgICAgICAgPHZhbHVlcyB4bWxucz0iaHR0cDovL3F1eC5jb20iPgogICAgICAgICAgICA8bWVtYmVyIHhtbG5zPSJodHRwOi8vYnV4LmNvbSI+QmFyPC9tZW1iZXI+"
      "CiAgICAgICAgICAgIDxtZW1iZXIgeG1sbnM9Imh0dHA6Ly9idXguY29tIj5CYXo8L21lbWJlcj4KICAgICAgICA8L3ZhbHVlcz4KICAgIDwvbmVzdGVkPgo8L1htbE5hbWVz"
      "cGFjZXNSZXNwb25zZT4K";
  SetMockResponse(mockRs);

  XmlNamespacesRequest request;

  auto outcome = client.XmlNamespaces(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const XmlNamespacesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"nested":{"foo":"Foo","values":["Bar","Baz"]}} )" */
    {
      const XmlNamespaceNested& resultNested = result.GetNested();
      EXPECT_EQ(R"(Foo)", resultNested.GetFoo());
      const Aws::Vector<Aws::String>& resultNestedValuesItem = resultNested.GetValues();
      EXPECT_EQ(2U, resultNestedValuesItem.size());
      EXPECT_EQ(R"(Bar)", resultNestedValuesItem.at(0));
      EXPECT_EQ(R"(Baz)", resultNestedValuesItem.at(1));
    }
  });
}
