/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/TestPayloadBlobRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using TestPayloadBlob = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(TestPayloadBlob, RestJsonHttpWithEmptyBlobPayload) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestPayloadBlobRequest request;

  auto outcome = client.TestPayloadBlob(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/blob_payload";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(TestPayloadBlob, RestJsonTestPayloadBlob) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  TestPayloadBlobRequest request;
  request.SetContentType("image/jpg");
  request.SetBody(
      []() { return Aws::MakeShared<Aws::StringStream>("Test", Aws::String(R"(1234)"), std::ios_base::in | std::ios_base::binary); }());

  auto outcome = client.TestPayloadBlob(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "MTIzNA==";
  expectedRq.uri = "/blob_payload";
  expectedRq.headers = {{"Content-Type", R"(image/jpg)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
