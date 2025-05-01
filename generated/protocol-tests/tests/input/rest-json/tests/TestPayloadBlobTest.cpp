/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TestPayloadBlobRequest.h>

using TestPayloadBlob = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TestPayloadBlob, RestJsonHttpWithEmptyBlobPayload) {
  RestJsonProtocolClient client;
  TestPayloadBlobRequest request;

  auto outcome = client.TestPayloadBlob(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(TestPayloadBlob, RestJsonTestPayloadBlob) {
  RestJsonProtocolClient client;
  TestPayloadBlobRequest request;
  request.SetContentType("image/jpg");
  request.SetBody([](){ return Aws::MakeShared<Aws::StringStream>("Test", Aws::String(R"(1234)"), std::ios_base::in | std::ios_base::binary); }() );

  auto outcome = client.TestPayloadBlob(request);
  AWS_ASSERT_SUCCESS(outcome);
}
