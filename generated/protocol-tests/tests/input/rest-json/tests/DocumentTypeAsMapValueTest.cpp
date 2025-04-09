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

AWS_PROTOCOL_TEST(DocumentTypeAsMapValue, DocumentTypeAsMapValueInput) {
  RestJsonProtocolClient client;
  DocumentTypeAsMapValueRequest request;
  {
    Aws::Utils::Document requestDocValuedMapItem(R"j({"f":1,"o":2})j");
    request.AddDocValuedMap("foo", requestDocValuedMapItem);
  }
  {
    Aws::Utils::Document requestDocValuedMapItem(R"j(["b","a","r"])j");
    request.AddDocValuedMap("bar", requestDocValuedMapItem);
  }
  {
    Aws::Utils::Document requestDocValuedMapItem(R"j("BAZ")j");
    request.AddDocValuedMap("baz", requestDocValuedMapItem);
  }

  auto outcome = client.DocumentTypeAsMapValue(request);
  AWS_ASSERT_SUCCESS(outcome);
}
