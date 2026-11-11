/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTestsErrors.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>
#include <aws/rpcv2cborcorpustests/model/EventStreamResponseInitialResponse.h>
#include <aws/rpcv2cborcorpustests/model/ListEvent.h>
#include <aws/rpcv2cborcorpustests/model/MapEvent.h>
#include <aws/rpcv2cborcorpustests/model/ScalarsEvent.h>
#include <aws/rpcv2cborcorpustests/model/StructEvent.h>
#include <aws/rpcv2cborcorpustests/model/UnionEvent.h>

namespace Aws {
namespace RpcV2CborCorpusTests {
namespace Model {
enum class EventStreamResponseEventType {
  INITIAL_RESPONSE,
  SCALARSEVENT,
  LISTEVENT,
  MAPEVENT,
  STRUCTEVENT,
  UNIONEVENT,
  HEARTBEATEVENT,
  UNKNOWN
};

class EventStreamResponseHandler : public Aws::Utils::Event::EventStreamHandler {
  typedef std::function<void(const EventStreamResponseInitialResponse&)> EventStreamResponseInitialResponseCallback;
  typedef std::function<void(const EventStreamResponseInitialResponse&, const Utils::Event::InitialResponseType)>
      EventStreamResponseInitialResponseCallbackEx;
  typedef std::function<void(const ScalarsEvent&)> ScalarsEventCallback;
  typedef std::function<void(const ListEvent&)> ListEventCallback;
  typedef std::function<void(const MapEvent&)> MapEventCallback;
  typedef std::function<void(const StructEvent&)> StructEventCallback;
  typedef std::function<void(const UnionEvent&)> UnionEventCallback;
  typedef std::function<void()> HeartbeatEventCallback;
  typedef std::function<void(const Aws::Client::AWSError<RpcV2CborCorpusTestsErrors>& error)> ErrorCallback;

 public:
  AWS_RPCV2CBORCORPUSTESTS_API EventStreamResponseHandler();
  AWS_RPCV2CBORCORPUSTESTS_API EventStreamResponseHandler& operator=(const EventStreamResponseHandler&) = default;
  AWS_RPCV2CBORCORPUSTESTS_API EventStreamResponseHandler(const EventStreamResponseHandler&) = default;

  AWS_RPCV2CBORCORPUSTESTS_API virtual void OnEvent() override;

  ///@{
  /**
   * Sets an initial response callback. This callback gets called on the initial EventStreamResponse Operation response.
   *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
   *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
   * @param callback
   */
  inline void SetInitialResponseCallbackEx(const EventStreamResponseInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
  /**
   * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
   */
  inline void SetInitialResponseCallback(const EventStreamResponseInitialResponseCallback& noArgCallback) {
    m_onInitialResponse = [noArgCallback](const EventStreamResponseInitialResponse& rs, const Utils::Event::InitialResponseType) {
      return noArgCallback(rs);
    };
  }
  ///@}
  inline void SetScalarsEventCallback(const ScalarsEventCallback& callback) { m_onScalarsEvent = callback; }
  inline void SetListEventCallback(const ListEventCallback& callback) { m_onListEvent = callback; }
  inline void SetMapEventCallback(const MapEventCallback& callback) { m_onMapEvent = callback; }
  inline void SetStructEventCallback(const StructEventCallback& callback) { m_onStructEvent = callback; }
  inline void SetUnionEventCallback(const UnionEventCallback& callback) { m_onUnionEvent = callback; }
  inline void SetHeartbeatEventCallback(const HeartbeatEventCallback& callback) { m_onHeartbeatEvent = callback; }
  inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

  inline EventStreamResponseInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

 private:
  AWS_RPCV2CBORCORPUSTESTS_API void HandleEventInMessage();
  AWS_RPCV2CBORCORPUSTESTS_API void HandleErrorInMessage();
  AWS_RPCV2CBORCORPUSTESTS_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

  EventStreamResponseInitialResponseCallbackEx m_onInitialResponse;
  ScalarsEventCallback m_onScalarsEvent;
  ListEventCallback m_onListEvent;
  MapEventCallback m_onMapEvent;
  StructEventCallback m_onStructEvent;
  UnionEventCallback m_onUnionEvent;
  HeartbeatEventCallback m_onHeartbeatEvent;
  ErrorCallback m_onError;
};

namespace EventStreamResponseEventMapper {
AWS_RPCV2CBORCORPUSTESTS_API EventStreamResponseEventType GetEventStreamResponseEventTypeForName(const Aws::String& name);

AWS_RPCV2CBORCORPUSTESTS_API Aws::String GetNameForEventStreamResponseEventType(EventStreamResponseEventType value);
}  // namespace EventStreamResponseEventMapper
}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
