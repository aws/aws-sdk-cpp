/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/DocumentTypeAsPayloadRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using DocumentTypeAsPayload = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(DocumentTypeAsPayload, DocumentTypeAsPayloadInput) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  DocumentTypeAsPayloadRequest request;
  {
    Aws::Utils::Document requestDocumentValue(R"j({"foo":"bar"})j");
    request.SetDocumentValue(requestDocumentValue);
  }

  auto outcome = client.DocumentTypeAsPayload(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ewogICAgImZvbyI6ICJiYXIiCn0=";
  expectedRq.uri = "/DocumentTypeAsPayload";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(DocumentTypeAsPayload, DocumentTypeAsPayloadInputString) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  DocumentTypeAsPayloadRequest request;
  {
    Aws::Utils::Document requestDocumentValue(R"j("hello")j");
    request.SetDocumentValue(requestDocumentValue);
  }

  auto outcome = client.DocumentTypeAsPayload(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body = "ImhlbGxvIg==";
  expectedRq.uri = "/DocumentTypeAsPayload";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
