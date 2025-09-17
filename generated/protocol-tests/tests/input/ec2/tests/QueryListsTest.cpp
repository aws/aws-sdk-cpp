/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/model/QueryListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using QueryLists = AWS_PROTOCOL_TEST_SUITE;
using EC2ProtocolClient = Aws::EC2Protocol::EC2ProtocolClient;
using namespace Aws::EC2Protocol::Model;

AWS_PROTOCOL_TEST(QueryLists, Ec2Lists) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryListsRequest request;
  request.SetListArg({R"(foo)", R"(bar)", R"(baz)"});
  {
    GreetingStruct requestComplexListArgItem;
    requestComplexListArgItem.SetHi(R"(hello)");
    request.AddComplexListArg(requestComplexListArgItem);
  }
  {
    GreetingStruct requestComplexListArgItem;
    requestComplexListArgItem.SetHi(R"(hola)");
    request.AddComplexListArg(requestComplexListArgItem);
  }

  auto outcome = client.QueryLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5TGlzdHMmVmVyc2lvbj0yMDIwLTAxLTA4Jkxpc3RBcmcuMT1mb28mTGlzdEFyZy4yPWJhciZMaXN0QXJnLjM9YmF6JkNvbXBsZXhMaXN0QXJnLjEuSGk9"
      "aGVsbG8mQ29tcGxleExpc3RBcmcuMi5IaT1ob2xh";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryLists, Ec2EmptyQueryLists) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryListsRequest request;
  request.SetListArg({});

  auto outcome = client.QueryLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVF1ZXJ5TGlzdHMmVmVyc2lvbj0yMDIwLTAxLTA4";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryLists, Ec2ListArgWithXmlNameMember) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryListsRequest request;
  request.SetListArgWithXmlNameMember({R"(A)", R"(B)"});

  auto outcome = client.QueryLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5TGlzdHMmVmVyc2lvbj0yMDIwLTAxLTA4Jkxpc3RBcmdXaXRoWG1sTmFtZU1lbWJlci4xPUEmTGlzdEFyZ1dpdGhYbWxOYW1lTWVtYmVyLjI9Qg==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryLists, Ec2ListMemberWithXmlName) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryListsRequest request;
  request.SetListArgWithXmlName({R"(A)", R"(B)"});

  auto outcome = client.QueryLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVF1ZXJ5TGlzdHMmVmVyc2lvbj0yMDIwLTAxLTA4JkhpLjE9QSZIaS4yPUI=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(QueryLists, Ec2ListNestedStructWithList) {
  EC2ProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  QueryListsRequest request;
  {
    NestedStructWithList requestNestedWithList;
    requestNestedWithList.SetListArg({R"(A)", R"(B)"});
    request.SetNestedWithList(requestNestedWithList);
  }

  auto outcome = client.QueryLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "QWN0aW9uPVF1ZXJ5TGlzdHMmVmVyc2lvbj0yMDIwLTAxLTA4Jk5lc3RlZFdpdGhMaXN0Lkxpc3RBcmcuMT1BJk5lc3RlZFdpdGhMaXN0Lkxpc3RBcmcuMj1C";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
