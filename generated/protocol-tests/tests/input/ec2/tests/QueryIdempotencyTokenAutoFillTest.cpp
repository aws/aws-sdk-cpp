/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using QueryIdempotencyTokenAutoFill = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(QueryIdempotencyTokenAutoFill, Ec2ProtocolIdempotencyTokenAutoFill) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryIdempotencyTokenAutoFillRequest request;

  auto outcome = client.QueryIdempotencyTokenAutoFill(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5SWRlbXBvdGVuY3lUb2tlbkF1dG9GaWxsJlZlcnNpb249MjAyMC0wMS0wOCZUb2tlbj0wMDAwMDAwMC0wMDAwLTQwMDAtODAwMC0wMDAwMDAwMDAwMDA"
      "=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryIdempotencyTokenAutoFill, Ec2ProtocolIdempotencyTokenAutoFillIsSet) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryIdempotencyTokenAutoFillRequest request;
  request.SetToken(R"(00000000-0000-4000-8000-000000000123)");

  auto outcome = client.QueryIdempotencyTokenAutoFill(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5SWRlbXBvdGVuY3lUb2tlbkF1dG9GaWxsJlZlcnNpb249MjAyMC0wMS0wOCZUb2tlbj0wMDAwMDAwMC0wMDAwLTQwMDAtODAwMC0wMDAwMDAwMDAxMjM"
      "=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
