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

  SetMockResponse();

  XmlNamespacesRequest request;
  {
    XmlNamespaceNested requestNested;
    requestNested.SetFoo(R"(Foo)");
    requestNested.SetValues({R"(Bar)", R"(Baz)"});
    request.SetNested(requestNested);
  }

  auto outcome = client.XmlNamespaces(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "PFhtbE5hbWVzcGFjZXNSZXF1ZXN0IHhtbG5zPSJodHRwOi8vZm9vLmNvbSI+CiAgICA8bmVzdGVkIHhtbG5zPSJodHRwOi8vZm9vLmNvbSI+"
      "CiAgICAgICAgPGZvbyB4bWxuczpiYXo9Imh0dHA6Ly9iYXouY29tIj5Gb288L2Zvbz4KICAgICAgICA8dmFsdWVzIHhtbG5zPSJodHRwOi8vcXV4LmNvbSI+"
      "CiAgICAgICAgICAgIDxtZW1iZXIgeG1sbnM9Imh0dHA6Ly9idXguY29tIj5CYXI8L21lbWJlcj4KICAgICAgICAgICAgPG1lbWJlciB4bWxucz0iaHR0cDovL2J1eC5jb20i"
      "PkJhejwvbWVtYmVyPgogICAgICAgIDwvdmFsdWVzPgogICAgPC9uZXN0ZWQ+CjwvWG1sTmFtZXNwYWNlc1JlcXVlc3Q+Cg==";
  expectedRq.uri = "/XmlNamespaces";
  expectedRq.headers = {{"Content-Type", R"(application/xml)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
