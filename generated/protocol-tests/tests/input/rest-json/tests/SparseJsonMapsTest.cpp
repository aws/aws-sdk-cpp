/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/SparseJsonMapsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SparseJsonMaps = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(SparseJsonMaps, RestJsonSparseJsonMaps) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SparseJsonMapsRequest request;
  {
    GreetingStruct requestSparseStructMapItem;
    requestSparseStructMapItem.SetHi(R"(there)");
    request.AddSparseStructMap("foo", requestSparseStructMapItem);
  }
  {
    GreetingStruct requestSparseStructMapItem;
    requestSparseStructMapItem.SetHi(R"(bye)");
    request.AddSparseStructMap("baz", requestSparseStructMapItem);
  }

  auto outcome = client.SparseJsonMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "ewogICAgInNwYXJzZVN0cnVjdE1hcCI6IHsKICAgICAgICAiZm9vIjogewogICAgICAgICAgICAiaGkiOiAidGhlcmUiCiAgICAgICAgfSwKICAgICAgICAiYmF6Ijogewog"
      "ICAgICAgICAgICAiaGkiOiAiYnllIgogICAgICAgIH0KICAgIH0KfQ==";
  expectedRq.uri = "/SparseJsonMaps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SparseJsonMaps, RestJsonSerializesSparseNullMapValues) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SparseJsonMapsRequest request;
  request.AddSparseBooleanMap("x", Aws::Crt::Optional<bool>{});
  request.AddSparseNumberMap("x", Aws::Crt::Optional<int>{});
  request.AddSparseStringMap("x", Aws::Crt::Optional<Aws::String>{});
  request.AddSparseStructMap("x", Aws::Crt::Optional<GreetingStruct>{});

  auto outcome = client.SparseJsonMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "ewogICAgInNwYXJzZUJvb2xlYW5NYXAiOiB7CiAgICAgICAgIngiOiBudWxsCiAgICB9LAogICAgInNwYXJzZU51bWJlck1hcCI6IHsKICAgICAgICAieCI6IG51bGwKICAg"
      "IH0sCiAgICAic3BhcnNlU3RyaW5nTWFwIjogewogICAgICAgICJ4IjogbnVsbAogICAgfSwKICAgICJzcGFyc2VTdHJ1Y3RNYXAiOiB7CiAgICAgICAgIngiOiBudWxsCiAg"
      "ICB9Cn0=";
  expectedRq.uri = "/SparseJsonMaps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SparseJsonMaps, RestJsonSerializesZeroValuesInSparseMaps) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SparseJsonMapsRequest request;
  request.AddSparseNumberMap("x", 0);
  request.AddSparseBooleanMap("x", false);

  auto outcome = client.SparseJsonMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "ewogICAgInNwYXJzZU51bWJlck1hcCI6IHsKICAgICAgICAieCI6IDAKICAgIH0sCiAgICAic3BhcnNlQm9vbGVhbk1hcCI6IHsKICAgICAgICAieCI6IGZhbHNlCiAgICB9"
      "Cn0=";
  expectedRq.uri = "/SparseJsonMaps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SparseJsonMaps, RestJsonSerializesSparseSetMap) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SparseJsonMapsRequest request;
  request.AddSparseSetMap("x", Aws::Vector<Aws::String>{});
  request.AddSparseSetMap("y", Aws::Vector<Aws::String>{R"(a)", R"(b)"});

  auto outcome = client.SparseJsonMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "ewogICAgInNwYXJzZVNldE1hcCI6IHsKICAgICAgICAieCI6IFtdLAogICAgICAgICJ5IjogWyJhIiwgImIiXQogICAgfQp9";
  expectedRq.uri = "/SparseJsonMaps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SparseJsonMaps, RestJsonSerializesSparseSetMapAndRetainsNull) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SparseJsonMapsRequest request;
  request.AddSparseSetMap("x", Aws::Vector<Aws::String>{});
  request.AddSparseSetMap("y", Aws::Vector<Aws::String>{R"(a)", R"(b)"});
  request.AddSparseSetMap("z", Aws::Crt::Optional<Aws::Vector<Aws::String>>{});

  auto outcome = client.SparseJsonMaps(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "ewogICAgInNwYXJzZVNldE1hcCI6IHsKICAgICAgICAieCI6IFtdLAogICAgICAgICJ5IjogWyJhIiwgImIiXSwKICAgICAgICAieiI6IG51bGwKICAgIH0KfQ==";
  expectedRq.uri = "/SparseJsonMaps";
  expectedRq.headers = {{"Content-Type", R"(application/json)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
