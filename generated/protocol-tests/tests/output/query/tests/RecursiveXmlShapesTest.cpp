﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/RecursiveXmlShapesRequest.h>

using RecursiveXmlShapes = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(RecursiveXmlShapes, QueryRecursiveShapes) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml)"}};
  mockRs.body = "PFJlY3Vyc2l2ZVhtbFNoYXBlc1Jlc3BvbnNlIHhtbG5zPSJodHRwczovL2V4YW1wbGUuY29tLyI+CiAgICA8UmVjdXJzaXZlWG1sU2hhcGVzUmVzdWx0PgogICAgICAgIDxuZXN0ZWQ+CiAgICAgICAgICAgIDxmb28+Rm9vMTwvZm9vPgogICAgICAgICAgICA8bmVzdGVkPgogICAgICAgICAgICAgICAgPGJhcj5CYXIxPC9iYXI+CiAgICAgICAgICAgICAgICA8cmVjdXJzaXZlTWVtYmVyPgogICAgICAgICAgICAgICAgICAgIDxmb28+Rm9vMjwvZm9vPgogICAgICAgICAgICAgICAgICAgIDxuZXN0ZWQ+CiAgICAgICAgICAgICAgICAgICAgICAgIDxiYXI+QmFyMjwvYmFyPgogICAgICAgICAgICAgICAgICAgIDwvbmVzdGVkPgogICAgICAgICAgICAgICAgPC9yZWN1cnNpdmVNZW1iZXI+CiAgICAgICAgICAgIDwvbmVzdGVkPgogICAgICAgIDwvbmVzdGVkPgogICAgPC9SZWN1cnNpdmVYbWxTaGFwZXNSZXN1bHQ+CjwvUmVjdXJzaXZlWG1sU2hhcGVzUmVzcG9uc2U+Cg==";
  SetMockResponse(mockRs);

  RecursiveXmlShapesRequest request;

  auto outcome = client.RecursiveXmlShapes(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
