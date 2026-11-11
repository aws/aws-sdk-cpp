/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTestsClient.h>
#include <aws/rpcv2cborcorpustests/model/EventStreamResponseHandler.h>
#include <aws/rpcv2cborcorpustests/model/EventStreamResponseRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using EventStreamResponse = AWS_PROTOCOL_TEST_SUITE;
using RpcV2CborCorpusTestsClient = Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsClient;
using namespace Aws::RpcV2CborCorpusTests::Model;

AWS_PROTOCOL_TEST(EventStreamResponse, RpcV2CborEventStreamResponseEnvelope) {
  RpcV2CborCorpusTestsClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/vnd.amazon.eventstream)"}};
  mockRs.body = "";
  SetMockResponse(mockRs);

  Aws::Vector<EventStreamResponseInitialResponse> initialResponses;
  Aws::Vector<Aws::Client::AWSError<Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsErrors>> streamErrors;
  EventStreamResponseHandler handler;
  handler.SetInitialResponseCallbackEx(
      [&initialResponses](const EventStreamResponseInitialResponse& initialResponse, const Aws::Utils::Event::InitialResponseType type) {
        if (type == Aws::Utils::Event::InitialResponseType::ON_EVENT) {
          initialResponses.push_back(initialResponse);
        }
      });
  handler.SetOnErrorCallback([&streamErrors](const Aws::Client::AWSError<Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsErrors>& error) {
    streamErrors.push_back(error);
  });

  EventStreamResponseRequest request;
  request.SetEventStreamHandler(handler);
  auto outcome = client.EventStreamResponse(request);

  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/service/RpcV2CborCorpusTests/operation/EventStreamResponse";
  expectedRq.headers = {
      {"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/cbor)"}, {"Accept", R"(application/vnd.amazon.eventstream)"}};
  expectedRq.forbidHeaders = {"X-Amz-Target", "X-Amzn-Target"};
  ValidateRequestSent(expectedRq);

  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  EXPECT_TRUE(streamErrors.empty()) << (streamErrors.empty() ? Aws::String() : streamErrors.front().GetMessage());
}
