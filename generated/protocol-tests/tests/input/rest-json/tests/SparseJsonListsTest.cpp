/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/SparseJsonListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SparseJsonLists = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(SparseJsonLists, RestJsonSparseListsSerializeNull) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SparseJsonListsRequest request;
  request.AddSparseStringList(Aws::Crt::Optional<Aws::String>{});
  request.AddSparseStringList(R"(hi)");
  request.AddSparseShortList(Aws::Crt::Optional<int>{});
  request.AddSparseShortList(2);

  auto outcome = client.SparseJsonLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "PUT";
  expectedRq.body =
      "ewogICAgInNwYXJzZVN0cmluZ0xpc3QiOiBbCiAgICAgICAgbnVsbCwKICAgICAgICAiaGkiCiAgICBdLAogICAgInNwYXJzZVNob3J0TGlzdCI6IFsKICAgICAgICBudWxs"
      "LAogICAgICAgIDIKICAgIF0KfQ==";
  expectedRq.uri = "/SparseJsonLists";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
