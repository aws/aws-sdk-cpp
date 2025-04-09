/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/DocumentTypeAsMapValueRequest.h>

using DocumentTypeAsMapValue = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(DocumentTypeAsMapValue, DocumentTypeAsMapValueOutput) {
  RestJsonProtocolClient client;
  DocumentTypeAsMapValueRequest request;

  auto outcome = client.DocumentTypeAsMapValue(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
