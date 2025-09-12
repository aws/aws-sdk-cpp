/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using GreetingWithErrors0 = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(GreetingWithErrors0, Ec2InvalidGreetingError) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 400;
  mockRs.headers = {{"Content-Type", R"(text/xml;charset=UTF-8)"}};
  mockRs.body =
      "PFJlc3BvbnNlPgogICAgPEVycm9ycz4KICAgICAgICA8RXJyb3I+"
      "CiAgICAgICAgICAgIDxDb2RlPkludmFsaWRHcmVldGluZzwvQ29kZT4KICAgICAgICAgICAgPE1lc3NhZ2U+SGk8L01lc3NhZ2U+"
      "CiAgICAgICAgPC9FcnJvcj4KICAgIDwvRXJyb3JzPgogICAgPFJlcXVlc3RJRD5mb28taWQ8L1JlcXVlc3RJRD4KPC9SZXNwb25zZT4K";
  SetMockResponse(mockRs);

  GreetingWithErrorsRequest request;

  auto outcome = client.GreetingWithErrors(request);
  ASSERT_FALSE(outcome.IsSuccess());
}
