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

AWS_PROTOCOL_TEST(DocumentType, DocumentTypeInputWithObject) {
  RestJsonProtocolClient client;
  DocumentTypeRequest request;
  request.SetStringValue(R"(string)");
  {
    Aws::Utils::Document requestDocumentValue(R"j({"foo":"bar"})j");
    request.SetDocumentValue(requestDocumentValue);
  }

  auto outcome = client.DocumentType(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(DocumentType, DocumentInputWithString) {
  RestJsonProtocolClient client;
  DocumentTypeRequest request;
  request.SetStringValue(R"(string)");
  {
    Aws::Utils::Document requestDocumentValue(R"j("hello")j");
    request.SetDocumentValue(requestDocumentValue);
  }

  auto outcome = client.DocumentType(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(DocumentType, DocumentInputWithNumber) {
  RestJsonProtocolClient client;
  DocumentTypeRequest request;
  request.SetStringValue(R"(string)");
  {
    Aws::Utils::Document requestDocumentValue(R"j(10)j");
    request.SetDocumentValue(requestDocumentValue);
  }

  auto outcome = client.DocumentType(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(DocumentType, DocumentInputWithBoolean) {
  RestJsonProtocolClient client;
  DocumentTypeRequest request;
  request.SetStringValue(R"(string)");
  {
    Aws::Utils::Document requestDocumentValue(R"j(true)j");
    request.SetDocumentValue(requestDocumentValue);
  }

  auto outcome = client.DocumentType(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(DocumentType, DocumentInputWithList) {
  RestJsonProtocolClient client;
  DocumentTypeRequest request;
  request.SetStringValue(R"(string)");
  {
    Aws::Utils::Document requestDocumentValue(R"j([true,"hi",[1,2],{"foo":{"baz":[3,4]}}])j");
    request.SetDocumentValue(requestDocumentValue);
  }

  auto outcome = client.DocumentType(request);
  AWS_ASSERT_SUCCESS(outcome);
}
