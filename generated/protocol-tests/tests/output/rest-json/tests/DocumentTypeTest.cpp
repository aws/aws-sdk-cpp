/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/DocumentTypeRequest.h>

using DocumentType = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(DocumentType, DocumentOutput) {
  RestJsonProtocolClient client;
  DocumentTypeRequest request;

  auto outcome = client.DocumentType(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(DocumentType, DocumentOutputString) {
  RestJsonProtocolClient client;
  DocumentTypeRequest request;

  auto outcome = client.DocumentType(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(DocumentType, DocumentOutputNumber) {
  RestJsonProtocolClient client;
  DocumentTypeRequest request;

  auto outcome = client.DocumentType(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(DocumentType, DocumentOutputBoolean) {
  RestJsonProtocolClient client;
  DocumentTypeRequest request;

  auto outcome = client.DocumentType(request);
  ASSERT_FALSE(outcome.IsSuccess());
}

AWS_PROTOCOL_TEST(DocumentType, DocumentOutputArray) {
  RestJsonProtocolClient client;
  DocumentTypeRequest request;

  auto outcome = client.DocumentType(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
