/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeErrors.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveResponseEvent.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveResultEvent.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveStreamInitialResponse.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveTraceEvent.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
enum class AgenticRetrieveStreamEventType { INITIAL_RESPONSE, RESPONSEEVENT, RESULT, TRACEEVENT, UNKNOWN };

class AgenticRetrieveStreamHandler : public Aws::Utils::Event::EventStreamHandler {
  typedef std::function<void(const AgenticRetrieveStreamInitialResponse&)> AgenticRetrieveStreamInitialResponseCallback;
  typedef std::function<void(const AgenticRetrieveStreamInitialResponse&, const Utils::Event::InitialResponseType)>
      AgenticRetrieveStreamInitialResponseCallbackEx;
  typedef std::function<void(const AgenticRetrieveResponseEvent&)> AgenticRetrieveResponseEventCallback;
  typedef std::function<void(const AgenticRetrieveResultEvent&)> AgenticRetrieveResultEventCallback;
  typedef std::function<void(const AgenticRetrieveTraceEvent&)> AgenticRetrieveTraceEventCallback;
  typedef std::function<void(const Aws::Client::AWSError<BedrockAgentRuntimeErrors>& error)> ErrorCallback;

 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveStreamHandler();
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveStreamHandler& operator=(const AgenticRetrieveStreamHandler&) = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveStreamHandler(const AgenticRetrieveStreamHandler&) = default;

  AWS_BEDROCKAGENTRUNTIME_API virtual void OnEvent() override;

  ///@{
  /**
   * Sets an initial response callback. This callback gets called on the initial AgenticRetrieveStream Operation response.
   *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
   *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
   * @param callback
   */
  inline void SetInitialResponseCallbackEx(const AgenticRetrieveStreamInitialResponseCallbackEx& callback) {
    m_onInitialResponse = callback;
  }
  /**
   * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
   */
  inline void SetInitialResponseCallback(const AgenticRetrieveStreamInitialResponseCallback& noArgCallback) {
    m_onInitialResponse = [noArgCallback](const AgenticRetrieveStreamInitialResponse& rs, const Utils::Event::InitialResponseType) {
      return noArgCallback(rs);
    };
  }
  ///@}
  inline void SetAgenticRetrieveResponseEventCallback(const AgenticRetrieveResponseEventCallback& callback) {
    m_onAgenticRetrieveResponseEvent = callback;
  }
  inline void SetAgenticRetrieveResultEventCallback(const AgenticRetrieveResultEventCallback& callback) {
    m_onAgenticRetrieveResultEvent = callback;
  }
  inline void SetAgenticRetrieveTraceEventCallback(const AgenticRetrieveTraceEventCallback& callback) {
    m_onAgenticRetrieveTraceEvent = callback;
  }
  inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

  inline AgenticRetrieveStreamInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

 private:
  AWS_BEDROCKAGENTRUNTIME_API void HandleEventInMessage();
  AWS_BEDROCKAGENTRUNTIME_API void HandleErrorInMessage();
  AWS_BEDROCKAGENTRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

  AgenticRetrieveStreamInitialResponseCallbackEx m_onInitialResponse;
  AgenticRetrieveResponseEventCallback m_onAgenticRetrieveResponseEvent;
  AgenticRetrieveResultEventCallback m_onAgenticRetrieveResultEvent;
  AgenticRetrieveTraceEventCallback m_onAgenticRetrieveTraceEvent;
  ErrorCallback m_onError;
};

namespace AgenticRetrieveStreamEventMapper {
AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveStreamEventType GetAgenticRetrieveStreamEventTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForAgenticRetrieveStreamEventType(AgenticRetrieveStreamEventType value);
}  // namespace AgenticRetrieveStreamEventMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
