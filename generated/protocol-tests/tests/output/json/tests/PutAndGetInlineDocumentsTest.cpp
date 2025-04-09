/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/model/PutAndGetInlineDocumentsRequest.h>

using PutAndGetInlineDocuments = AWS_PROTOCOL_TEST_SUITE;
using JsonProtocolClient = Aws::JsonProtocol::JsonProtocolClient;
using namespace Aws::JsonProtocol::Model;

AWS_PROTOCOL_TEST(PutAndGetInlineDocuments, PutAndGetInlineDocumentsInput) {
  JsonProtocolClient client;
  PutAndGetInlineDocumentsRequest request;

  auto outcome = client.PutAndGetInlineDocuments(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
