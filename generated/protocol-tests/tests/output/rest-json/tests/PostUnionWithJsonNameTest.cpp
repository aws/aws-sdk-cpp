/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/PostUnionWithJsonNameRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using PostUnionWithJsonName = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(PostUnionWithJsonName, PostUnionWithJsonNameResponse1) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInZhbHVlIjogewogICAgICAgICJGT08iOiAiaGkiCiAgICB9Cn0=";
  SetMockResponse(mockRs);

  PostUnionWithJsonNameRequest request;

  auto outcome = client.PostUnionWithJsonName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const PostUnionWithJsonNameResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"value":{"foo":"hi"}} )" */
    {
      const UnionWithJsonName& resultValue = result.GetValue();
      EXPECT_EQ(R"(hi)", resultValue.GetFoo());
    }
  });
}

AWS_PROTOCOL_TEST(PostUnionWithJsonName, PostUnionWithJsonNameResponse2) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInZhbHVlIjogewogICAgICAgICJfYmF6IjogImhpIgogICAgfQp9";
  SetMockResponse(mockRs);

  PostUnionWithJsonNameRequest request;

  auto outcome = client.PostUnionWithJsonName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const PostUnionWithJsonNameResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"value":{"baz":"hi"}} )" */
    {
      const UnionWithJsonName& resultValue = result.GetValue();
      EXPECT_EQ(R"(hi)", resultValue.GetBaz());
    }
  });
}

AWS_PROTOCOL_TEST(PostUnionWithJsonName, PostUnionWithJsonNameResponse3) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/json)"}};
  mockRs.body = "ewogICAgInZhbHVlIjogewogICAgICAgICJiYXIiOiAiaGkiCiAgICB9Cn0=";
  SetMockResponse(mockRs);

  PostUnionWithJsonNameRequest request;

  auto outcome = client.PostUnionWithJsonName(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const PostUnionWithJsonNameResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"value":{"bar":"hi"}} )" */
    {
      const UnionWithJsonName& resultValue = result.GetValue();
      EXPECT_EQ(R"(hi)", resultValue.GetBar());
    }
  });
}
