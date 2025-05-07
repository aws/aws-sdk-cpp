﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesRequest.h>

using RecursiveXmlShapes = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(RecursiveXmlShapes, Ec2RecursiveShapes) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body = "PFJlY3Vyc2l2ZVhtbFNoYXBlc1Jlc3BvbnNlIHhtbG5zPSJodHRwczovL2V4YW1wbGUuY29tLyI+CiAgICA8bmVzdGVkPgogICAgICAgIDxmb28+Rm9vMTwvZm9vPgogICAgICAgIDxuZXN0ZWQ+CiAgICAgICAgICAgIDxiYXI+QmFyMTwvYmFyPgogICAgICAgICAgICA8cmVjdXJzaXZlTWVtYmVyPgogICAgICAgICAgICAgICAgPGZvbz5Gb28yPC9mb28+CiAgICAgICAgICAgICAgICA8bmVzdGVkPgogICAgICAgICAgICAgICAgICAgIDxiYXI+QmFyMjwvYmFyPgogICAgICAgICAgICAgICAgPC9uZXN0ZWQ+CiAgICAgICAgICAgIDwvcmVjdXJzaXZlTWVtYmVyPgogICAgICAgIDwvbmVzdGVkPgogICAgPC9uZXN0ZWQ+CiAgICA8cmVxdWVzdElkPnJlcXVlc3RpZDwvcmVxdWVzdElkPgo8L1JlY3Vyc2l2ZVhtbFNoYXBlc1Jlc3BvbnNlPgo=";
  SetMockResponse(mockRs);

  RecursiveXmlShapesRequest request;

  auto outcome = client.RecursiveXmlShapes(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
