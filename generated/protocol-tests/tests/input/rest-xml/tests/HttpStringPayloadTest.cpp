/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpStringPayloadRequest.h>

using HttpStringPayload = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpStringPayload, RestXmlStringPayloadRequest) {
  RestXmlProtocolClient client;
  HttpStringPayloadRequest request;
  request.SetBody([](){ return Aws::MakeShared<Aws::StringStream>("Test", R"(rawstring)", std::ios_base::in | std::ios_base::binary); }() );

  auto outcome = client.HttpStringPayload(request);
  AWS_ASSERT_SUCCESS(outcome);
}
