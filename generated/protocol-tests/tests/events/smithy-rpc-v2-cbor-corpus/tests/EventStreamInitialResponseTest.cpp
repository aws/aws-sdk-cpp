/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTestsClient.h>
#include <aws/rpcv2cborcorpustests/model/EventStreamInitialResponseHandler.h>
#include <aws/rpcv2cborcorpustests/model/EventStreamInitialResponseRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using EventStreamInitialResponse = AWS_PROTOCOL_TEST_SUITE;
using RpcV2CborCorpusTestsClient = Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsClient;
using namespace Aws::RpcV2CborCorpusTests::Model;

AWS_PROTOCOL_TEST(EventStreamInitialResponse, RpcV2CborEventStreamInitialResponse) {
  RpcV2CborCorpusTestsClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"smithy-protocol", R"(rpc-v2-cbor)"}, {"Content-Type", R"(application/vnd.amazon.eventstream)"}};
  mockRs.body =
      "AAAAhwAAAFbk7EcqCzpldmVudC10eXBlBwAQaW5pdGlhbC1yZXNwb25zZQ06Y29udGVudC10eXBlBwAQYXBwbGljYXRpb24vY2Jvcg06bWVzc2FnZS10eXBlBwAFZXZlbnSi"
      "aXNlc3Npb25JZGtzZXNzaW9uNGEyZmd0aW1lb3V0GB50hqdMAAAAoAAAAFKQYHAnCzpldmVudC10eXBlBwAMc2NhbGFyc0V2ZW50DTpjb250ZW50LXR5cGUHABBhcHBsaWNh"
      "dGlvbi9jYm9yDTptZXNzYWdlLXR5cGUHAAVldmVudKJsc3RyaW5nTWVtYmVyeB5tZXNzYWdlIGFmdGVyIGluaXRpYWwgcmVzcG9uc2VtaW50ZWdlck1lbWJlchhNtWW8pQ="
      "=";
  SetMockResponse(mockRs);

  Aws::Vector<EventStreamInitialResponseInitialResponse> initialResponses;
  Aws::Vector<ScalarsEvent> scalarsEventEvents;
  Aws::Vector<Aws::Client::AWSError<Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsErrors>> streamErrors;
  EventStreamInitialResponseHandler handler;
  handler.SetInitialResponseCallbackEx([&initialResponses](const EventStreamInitialResponseInitialResponse& initialResponse,
                                                           const Aws::Utils::Event::InitialResponseType type) {
    if (type == Aws::Utils::Event::InitialResponseType::ON_EVENT) {
      initialResponses.push_back(initialResponse);
    }
  });
  handler.SetScalarsEventCallback([&scalarsEventEvents](const ScalarsEvent& event) { scalarsEventEvents.push_back(event); });
  handler.SetOnErrorCallback([&streamErrors](const Aws::Client::AWSError<Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsErrors>& error) {
    streamErrors.push_back(error);
  });

  EventStreamInitialResponseRequest request;
  request.SetEventStreamHandler(handler);
  auto outcome = client.EventStreamInitialResponse(request);

  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  EXPECT_TRUE(streamErrors.empty()) << (streamErrors.empty() ? Aws::String() : streamErrors.front().GetMessage());
  ASSERT_EQ(1u, initialResponses.size());
  const EventStreamInitialResponseInitialResponse& initialResponse = initialResponses.front();
  EXPECT_EQ(R"(session4a2f)", initialResponse.GetSessionId());
  EXPECT_EQ(30, initialResponse.GetTimeout());
  ASSERT_EQ(1u, scalarsEventEvents.size());
  {
    const ScalarsEvent& scalarsEventEvent = scalarsEventEvents[0];
    EXPECT_EQ(R"(message after initial response)", scalarsEventEvent.GetStringMember());
    EXPECT_EQ(77, scalarsEventEvent.GetIntegerMember());
  }
}
