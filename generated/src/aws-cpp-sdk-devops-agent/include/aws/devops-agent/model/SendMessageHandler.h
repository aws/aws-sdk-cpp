/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/devops-agent/DevOpsAgentErrors.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/SendMessageContentBlockDeltaEvent.h>
#include <aws/devops-agent/model/SendMessageContentBlockStartEvent.h>
#include <aws/devops-agent/model/SendMessageContentBlockStopEvent.h>
#include <aws/devops-agent/model/SendMessageInitialResponse.h>
#include <aws/devops-agent/model/SendMessageResponseCompletedEvent.h>
#include <aws/devops-agent/model/SendMessageResponseCreatedEvent.h>
#include <aws/devops-agent/model/SendMessageResponseFailedEvent.h>
#include <aws/devops-agent/model/SendMessageResponseInProgressEvent.h>
#include <aws/devops-agent/model/SendMessageSummaryEvent.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {
enum class SendMessageEventType {
  INITIAL_RESPONSE,
  RESPONSECREATED,
  RESPONSEINPROGRESS,
  RESPONSECOMPLETED,
  RESPONSEFAILED,
  SUMMARY,
  HEARTBEAT,
  CONTENTBLOCKSTART,
  CONTENTBLOCKDELTA,
  CONTENTBLOCKSTOP,
  UNKNOWN
};

class SendMessageHandler : public Aws::Utils::Event::EventStreamHandler {
  typedef std::function<void(const SendMessageInitialResponse&)> SendMessageInitialResponseCallback;
  typedef std::function<void(const SendMessageInitialResponse&, const Utils::Event::InitialResponseType)>
      SendMessageInitialResponseCallbackEx;
  typedef std::function<void(const SendMessageResponseCreatedEvent&)> SendMessageResponseCreatedEventCallback;
  typedef std::function<void(const SendMessageResponseInProgressEvent&)> SendMessageResponseInProgressEventCallback;
  typedef std::function<void(const SendMessageResponseCompletedEvent&)> SendMessageResponseCompletedEventCallback;
  typedef std::function<void(const SendMessageResponseFailedEvent&)> SendMessageResponseFailedEventCallback;
  typedef std::function<void(const SendMessageSummaryEvent&)> SendMessageSummaryEventCallback;
  typedef std::function<void()> SendMessageHeartbeatEventCallback;
  typedef std::function<void(const SendMessageContentBlockStartEvent&)> SendMessageContentBlockStartEventCallback;
  typedef std::function<void(const SendMessageContentBlockDeltaEvent&)> SendMessageContentBlockDeltaEventCallback;
  typedef std::function<void(const SendMessageContentBlockStopEvent&)> SendMessageContentBlockStopEventCallback;
  typedef std::function<void(const Aws::Client::AWSError<DevOpsAgentErrors>& error)> ErrorCallback;

 public:
  AWS_DEVOPSAGENT_API SendMessageHandler();
  AWS_DEVOPSAGENT_API SendMessageHandler& operator=(const SendMessageHandler&) = default;
  AWS_DEVOPSAGENT_API SendMessageHandler(const SendMessageHandler&) = default;

  AWS_DEVOPSAGENT_API virtual void OnEvent() override;

  ///@{
  /**
   * Sets an initial response callback. This callback gets called on the initial SendMessage Operation response.
   *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
   *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
   * @param callback
   */
  inline void SetInitialResponseCallbackEx(const SendMessageInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
  /**
   * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
   */
  inline void SetInitialResponseCallback(const SendMessageInitialResponseCallback& noArgCallback) {
    m_onInitialResponse = [noArgCallback](const SendMessageInitialResponse& rs, const Utils::Event::InitialResponseType) {
      return noArgCallback(rs);
    };
  }
  ///@}
  inline void SetSendMessageResponseCreatedEventCallback(const SendMessageResponseCreatedEventCallback& callback) {
    m_onSendMessageResponseCreatedEvent = callback;
  }
  inline void SetSendMessageResponseInProgressEventCallback(const SendMessageResponseInProgressEventCallback& callback) {
    m_onSendMessageResponseInProgressEvent = callback;
  }
  inline void SetSendMessageResponseCompletedEventCallback(const SendMessageResponseCompletedEventCallback& callback) {
    m_onSendMessageResponseCompletedEvent = callback;
  }
  inline void SetSendMessageResponseFailedEventCallback(const SendMessageResponseFailedEventCallback& callback) {
    m_onSendMessageResponseFailedEvent = callback;
  }
  inline void SetSendMessageSummaryEventCallback(const SendMessageSummaryEventCallback& callback) {
    m_onSendMessageSummaryEvent = callback;
  }
  inline void SetSendMessageHeartbeatEventCallback(const SendMessageHeartbeatEventCallback& callback) {
    m_onSendMessageHeartbeatEvent = callback;
  }
  inline void SetSendMessageContentBlockStartEventCallback(const SendMessageContentBlockStartEventCallback& callback) {
    m_onSendMessageContentBlockStartEvent = callback;
  }
  inline void SetSendMessageContentBlockDeltaEventCallback(const SendMessageContentBlockDeltaEventCallback& callback) {
    m_onSendMessageContentBlockDeltaEvent = callback;
  }
  inline void SetSendMessageContentBlockStopEventCallback(const SendMessageContentBlockStopEventCallback& callback) {
    m_onSendMessageContentBlockStopEvent = callback;
  }
  inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

  inline SendMessageInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

 private:
  AWS_DEVOPSAGENT_API void HandleEventInMessage();
  AWS_DEVOPSAGENT_API void HandleErrorInMessage();
  AWS_DEVOPSAGENT_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

  SendMessageInitialResponseCallbackEx m_onInitialResponse;
  SendMessageResponseCreatedEventCallback m_onSendMessageResponseCreatedEvent;
  SendMessageResponseInProgressEventCallback m_onSendMessageResponseInProgressEvent;
  SendMessageResponseCompletedEventCallback m_onSendMessageResponseCompletedEvent;
  SendMessageResponseFailedEventCallback m_onSendMessageResponseFailedEvent;
  SendMessageSummaryEventCallback m_onSendMessageSummaryEvent;
  SendMessageHeartbeatEventCallback m_onSendMessageHeartbeatEvent;
  SendMessageContentBlockStartEventCallback m_onSendMessageContentBlockStartEvent;
  SendMessageContentBlockDeltaEventCallback m_onSendMessageContentBlockDeltaEvent;
  SendMessageContentBlockStopEventCallback m_onSendMessageContentBlockStopEvent;
  ErrorCallback m_onError;
};

namespace SendMessageEventMapper {
AWS_DEVOPSAGENT_API SendMessageEventType GetSendMessageEventTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForSendMessageEventType(SendMessageEventType value);
}  // namespace SendMessageEventMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
