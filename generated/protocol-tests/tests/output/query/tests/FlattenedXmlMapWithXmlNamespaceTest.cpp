/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNamespaceRequest.h>

using FlattenedXmlMapWithXmlNamespace = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(FlattenedXmlMapWithXmlNamespace, QueryQueryFlattenedXmlMapWithXmlNamespace) {
  QueryProtocolClient client;
  FlattenedXmlMapWithXmlNamespaceRequest request;

  auto outcome = client.FlattenedXmlMapWithXmlNamespace(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
