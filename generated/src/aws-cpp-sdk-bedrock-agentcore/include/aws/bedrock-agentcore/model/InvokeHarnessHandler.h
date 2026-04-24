/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreErrors.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessContentBlockDeltaEvent.h>
#include <aws/bedrock-agentcore/model/HarnessContentBlockStartEvent.h>
#include <aws/bedrock-agentcore/model/HarnessContentBlockStopEvent.h>
#include <aws/bedrock-agentcore/model/HarnessMessageStartEvent.h>
#include <aws/bedrock-agentcore/model/HarnessMessageStopEvent.h>
#include <aws/bedrock-agentcore/model/HarnessMetadataEvent.h>
#include <aws/bedrock-agentcore/model/InvokeHarnessInitialResponse.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class InvokeHarnessEventType {
  INITIAL_RESPONSE,
  MESSAGESTART,
  CONTENTBLOCKSTART,
  CONTENTBLOCKDELTA,
  CONTENTBLOCKSTOP,
  MESSAGESTOP,
  METADATA,
  UNKNOWN
};

class InvokeHarnessHandler : public Aws::Utils::Event::EventStreamHandler {
  typedef std::function<void(const InvokeHarnessInitialResponse&)> InvokeHarnessInitialResponseCallback;
  typedef std::function<void(const InvokeHarnessInitialResponse&, const Utils::Event::InitialResponseType)>
      InvokeHarnessInitialResponseCallbackEx;
  typedef std::function<void(const HarnessMessageStartEvent&)> HarnessMessageStartEventCallback;
  typedef std::function<void(const HarnessContentBlockStartEvent&)> HarnessContentBlockStartEventCallback;
  typedef std::function<void(const HarnessContentBlockDeltaEvent&)> HarnessContentBlockDeltaEventCallback;
  typedef std::function<void(const HarnessContentBlockStopEvent&)> HarnessContentBlockStopEventCallback;
  typedef std::function<void(const HarnessMessageStopEvent&)> HarnessMessageStopEventCallback;
  typedef std::function<void(const HarnessMetadataEvent&)> HarnessMetadataEventCallback;
  typedef std::function<void(const Aws::Client::AWSError<BedrockAgentCoreErrors>& error)> ErrorCallback;

 public:
  AWS_BEDROCKAGENTCORE_API InvokeHarnessHandler();
  AWS_BEDROCKAGENTCORE_API InvokeHarnessHandler& operator=(const InvokeHarnessHandler&) = default;
  AWS_BEDROCKAGENTCORE_API InvokeHarnessHandler(const InvokeHarnessHandler&) = default;

  AWS_BEDROCKAGENTCORE_API virtual void OnEvent() override;

  ///@{
  /**
   * Sets an initial response callback. This callback gets called on the initial InvokeHarness Operation response.
   *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
   *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
   * @param callback
   */
  inline void SetInitialResponseCallbackEx(const InvokeHarnessInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
  /**
   * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
   */
  inline void SetInitialResponseCallback(const InvokeHarnessInitialResponseCallback& noArgCallback) {
    m_onInitialResponse = [noArgCallback](const InvokeHarnessInitialResponse& rs, const Utils::Event::InitialResponseType) {
      return noArgCallback(rs);
    };
  }
  ///@}
  inline void SetHarnessMessageStartEventCallback(const HarnessMessageStartEventCallback& callback) {
    m_onHarnessMessageStartEvent = callback;
  }
  inline void SetHarnessContentBlockStartEventCallback(const HarnessContentBlockStartEventCallback& callback) {
    m_onHarnessContentBlockStartEvent = callback;
  }
  inline void SetHarnessContentBlockDeltaEventCallback(const HarnessContentBlockDeltaEventCallback& callback) {
    m_onHarnessContentBlockDeltaEvent = callback;
  }
  inline void SetHarnessContentBlockStopEventCallback(const HarnessContentBlockStopEventCallback& callback) {
    m_onHarnessContentBlockStopEvent = callback;
  }
  inline void SetHarnessMessageStopEventCallback(const HarnessMessageStopEventCallback& callback) {
    m_onHarnessMessageStopEvent = callback;
  }
  inline void SetHarnessMetadataEventCallback(const HarnessMetadataEventCallback& callback) { m_onHarnessMetadataEvent = callback; }
  inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

  inline InvokeHarnessInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

 private:
  AWS_BEDROCKAGENTCORE_API void HandleEventInMessage();
  AWS_BEDROCKAGENTCORE_API void HandleErrorInMessage();
  AWS_BEDROCKAGENTCORE_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

  InvokeHarnessInitialResponseCallbackEx m_onInitialResponse;
  HarnessMessageStartEventCallback m_onHarnessMessageStartEvent;
  HarnessContentBlockStartEventCallback m_onHarnessContentBlockStartEvent;
  HarnessContentBlockDeltaEventCallback m_onHarnessContentBlockDeltaEvent;
  HarnessContentBlockStopEventCallback m_onHarnessContentBlockStopEvent;
  HarnessMessageStopEventCallback m_onHarnessMessageStopEvent;
  HarnessMetadataEventCallback m_onHarnessMetadataEvent;
  ErrorCallback m_onError;
};

namespace InvokeHarnessEventMapper {
AWS_BEDROCKAGENTCORE_API InvokeHarnessEventType GetInvokeHarnessEventTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForInvokeHarnessEventType(InvokeHarnessEventType value);
}  // namespace InvokeHarnessEventMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
