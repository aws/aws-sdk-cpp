/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeErrors.h>

#include <aws/bedrock-agent-runtime/model/InvokeFlowInitialResponse.h>
#include <aws/bedrock-agent-runtime/model/FlowCompletionEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowMultiTurnInputRequestEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowOutputEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceEvent.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
    enum class InvokeFlowEventType
    {
        INITIAL_RESPONSE,
        FLOWCOMPLETIONEVENT,
        FLOWMULTITURNINPUTREQUESTEVENT,
        FLOWOUTPUTEVENT,
        FLOWTRACEEVENT,
        UNKNOWN
    };

    class InvokeFlowHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const InvokeFlowInitialResponse&)> InvokeFlowInitialResponseCallback;
        typedef std::function<void(const InvokeFlowInitialResponse&, const Utils::Event::InitialResponseType)> InvokeFlowInitialResponseCallbackEx;
        typedef std::function<void(const FlowCompletionEvent&)> FlowCompletionEventCallback;
        typedef std::function<void(const FlowMultiTurnInputRequestEvent&)> FlowMultiTurnInputRequestEventCallback;
        typedef std::function<void(const FlowOutputEvent&)> FlowOutputEventCallback;
        typedef std::function<void(const FlowTraceEvent&)> FlowTraceEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<BedrockAgentRuntimeErrors>& error)> ErrorCallback;

    public:
        AWS_BEDROCKAGENTRUNTIME_API InvokeFlowHandler();
        AWS_BEDROCKAGENTRUNTIME_API InvokeFlowHandler& operator=(const InvokeFlowHandler&) = default;
        AWS_BEDROCKAGENTRUNTIME_API InvokeFlowHandler(const InvokeFlowHandler&) = default;

        AWS_BEDROCKAGENTRUNTIME_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial InvokeFlow Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const InvokeFlowInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const InvokeFlowInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const InvokeFlowInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetFlowCompletionEventCallback(const FlowCompletionEventCallback& callback) { m_onFlowCompletionEvent = callback; }
        inline void SetFlowMultiTurnInputRequestEventCallback(const FlowMultiTurnInputRequestEventCallback& callback) { m_onFlowMultiTurnInputRequestEvent = callback; }
        inline void SetFlowOutputEventCallback(const FlowOutputEventCallback& callback) { m_onFlowOutputEvent = callback; }
        inline void SetFlowTraceEventCallback(const FlowTraceEventCallback& callback) { m_onFlowTraceEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline InvokeFlowInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_BEDROCKAGENTRUNTIME_API void HandleEventInMessage();
        AWS_BEDROCKAGENTRUNTIME_API void HandleErrorInMessage();
        AWS_BEDROCKAGENTRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        InvokeFlowInitialResponseCallbackEx m_onInitialResponse;
        FlowCompletionEventCallback m_onFlowCompletionEvent;
        FlowMultiTurnInputRequestEventCallback m_onFlowMultiTurnInputRequestEvent;
        FlowOutputEventCallback m_onFlowOutputEvent;
        FlowTraceEventCallback m_onFlowTraceEvent;
        ErrorCallback m_onError;
    };

namespace InvokeFlowEventMapper
{
    AWS_BEDROCKAGENTRUNTIME_API InvokeFlowEventType GetInvokeFlowEventTypeForName(const Aws::String& name);

    AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForInvokeFlowEventType(InvokeFlowEventType value);
} // namespace InvokeFlowEventMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
