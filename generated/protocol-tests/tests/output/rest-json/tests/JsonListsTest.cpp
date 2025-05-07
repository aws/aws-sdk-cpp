/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/JsonListsRequest.h>

using JsonLists = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(JsonLists, RestJsonLists) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInN0cmluZ0xpc3QiOiBbCiAgICAgICAgImZvbyIsCiAgICAgICAgImJhciIKICAgIF0sCiAgICAic3RyaW5nU2V0IjogWwogICAgICAgICJmb28iLAogICAgICAgICJiYXIiCiAgICBdLAogICAgImludGVnZXJMaXN0IjogWwogICAgICAgIDEsCiAgICAgICAgMgogICAgXSwKICAgICJib29sZWFuTGlzdCI6IFsKICAgICAgICB0cnVlLAogICAgICAgIGZhbHNlCiAgICBdLAogICAgInRpbWVzdGFtcExpc3QiOiBbCiAgICAgICAgMTM5ODc5NjIzOCwKICAgICAgICAxMzk4Nzk2MjM4CiAgICBdLAogICAgImVudW1MaXN0IjogWwogICAgICAgICJGb28iLAogICAgICAgICIwIgogICAgXSwKICAgICJpbnRFbnVtTGlzdCI6IFsKICAgICAgICAxLAogICAgICAgIDIKICAgIF0sCiAgICAibmVzdGVkU3RyaW5nTGlzdCI6IFsKICAgICAgICBbCiAgICAgICAgICAgICJmb28iLAogICAgICAgICAgICAiYmFyIgogICAgICAgIF0sCiAgICAgICAgWwogICAgICAgICAgICAiYmF6IiwKICAgICAgICAgICAgInF1eCIKICAgICAgICBdCiAgICBdLAogICAgIm15U3RydWN0dXJlTGlzdCI6IFsKICAgICAgICB7CiAgICAgICAgICAgICJ2YWx1ZSI6ICIxIiwKICAgICAgICAgICAgIm90aGVyIjogIjIiCiAgICAgICAgfSwKICAgICAgICB7CiAgICAgICAgICAgICJ2YWx1ZSI6ICIzIiwKICAgICAgICAgICAgIm90aGVyIjogIjQiCiAgICAgICAgfQogICAgXQp9";
  SetMockResponse(mockRs);

  JsonListsRequest request;

  auto outcome = client.JsonLists(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(JsonLists, RestJsonListsEmpty) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInN0cmluZ0xpc3QiOiBbXQp9";
  SetMockResponse(mockRs);

  JsonListsRequest request;

  auto outcome = client.JsonLists(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
