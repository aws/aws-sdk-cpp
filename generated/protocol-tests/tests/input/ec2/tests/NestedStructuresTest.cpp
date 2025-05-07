/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/NestedStructuresRequest.h>

using NestedStructures = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(NestedStructures, Ec2NestedStructures) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  NestedStructuresRequest request;
  {
    StructArg requestNested;
    requestNested.SetStringArg(R"(foo)");
    requestNested.SetOtherArg(true);
    {
      StructArg requestNestedRecursiveArg;
      requestNestedRecursiveArg.SetStringArg(R"(baz)");
      requestNested.SetRecursiveArg(requestNestedRecursiveArg);
    }
    request.SetNested(requestNested);
  }

  auto outcome = client.NestedStructures(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPU5lc3RlZFN0cnVjdHVyZXMmVmVyc2lvbj0yMDIwLTAxLTA4Jk5lc3RlZC5TdHJpbmdBcmc9Zm9vJk5lc3RlZC5PdGhlckFyZz10cnVlJk5lc3RlZC5SZWN1cnNpdmVBcmcuU3RyaW5nQXJnPWJheg==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
}
