/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreErrors.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeCommandInitialResponse.h>
#include <aws/bedrock-agentcore/model/ResponseChunk.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class InvokeAgentRuntimeCommandEventType { INITIAL_RESPONSE, CHUNK, UNKNOWN };

class InvokeAgentRuntimeCommandHandler : public Aws::Utils::Event::EventStreamHandler {
  typedef std::function<void(const InvokeAgentRuntimeCommandInitialResponse&)> InvokeAgentRuntimeCommandInitialResponseCallback;
  typedef std::function<void(const InvokeAgentRuntimeCommandInitialResponse&, const Utils::Event::InitialResponseType)>
      InvokeAgentRuntimeCommandInitialResponseCallbackEx;
  typedef std::function<void(const ResponseChunk&)> ResponseChunkCallback;
  typedef std::function<void(const Aws::Client::AWSError<BedrockAgentCoreErrors>& error)> ErrorCallback;

 public:
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandHandler();
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandHandler& operator=(const InvokeAgentRuntimeCommandHandler&) = default;
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandHandler(const InvokeAgentRuntimeCommandHandler&) = default;

  AWS_BEDROCKAGENTCORE_API virtual void OnEvent() override;

  ///@{
  /**
   * Sets an initial response callback. This callback gets called on the initial InvokeAgentRuntimeCommand Operation response.
   *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
   *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
   * @param callback
   */
  inline void SetInitialResponseCallbackEx(const InvokeAgentRuntimeCommandInitialResponseCallbackEx& callback) {
    m_onInitialResponse = callback;
  }
  /**
   * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
   */
  inline void SetInitialResponseCallback(const InvokeAgentRuntimeCommandInitialResponseCallback& noArgCallback) {
    m_onInitialResponse = [noArgCallback](const InvokeAgentRuntimeCommandInitialResponse& rs, const Utils::Event::InitialResponseType) {
      return noArgCallback(rs);
    };
  }
  ///@}
  inline void SetResponseChunkCallback(const ResponseChunkCallback& callback) { m_onResponseChunk = callback; }
  inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

  inline InvokeAgentRuntimeCommandInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

 private:
  AWS_BEDROCKAGENTCORE_API void HandleEventInMessage();
  AWS_BEDROCKAGENTCORE_API void HandleErrorInMessage();
  AWS_BEDROCKAGENTCORE_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

  InvokeAgentRuntimeCommandInitialResponseCallbackEx m_onInitialResponse;
  ResponseChunkCallback m_onResponseChunk;
  ErrorCallback m_onError;
};

namespace InvokeAgentRuntimeCommandEventMapper {
AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandEventType GetInvokeAgentRuntimeCommandEventTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForInvokeAgentRuntimeCommandEventType(InvokeAgentRuntimeCommandEventType value);
}  // namespace InvokeAgentRuntimeCommandEventMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
