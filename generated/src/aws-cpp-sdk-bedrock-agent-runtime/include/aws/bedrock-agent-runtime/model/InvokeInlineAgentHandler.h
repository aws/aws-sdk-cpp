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

#include <aws/bedrock-agent-runtime/model/InvokeInlineAgentInitialResponse.h>
#include <aws/bedrock-agent-runtime/model/InlineAgentPayloadPart.h>
#include <aws/bedrock-agent-runtime/model/InlineAgentTracePart.h>
#include <aws/bedrock-agent-runtime/model/InlineAgentReturnControlPayload.h>
#include <aws/bedrock-agent-runtime/model/InlineAgentFilePart.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
    enum class InvokeInlineAgentEventType
    {
        INITIAL_RESPONSE,
        CHUNK,
        TRACE,
        RETURNCONTROL,
        FILES,
        UNKNOWN
    };

    class InvokeInlineAgentHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const InvokeInlineAgentInitialResponse&)> InvokeInlineAgentInitialResponseCallback;
        typedef std::function<void(const InvokeInlineAgentInitialResponse&, const Utils::Event::InitialResponseType)> InvokeInlineAgentInitialResponseCallbackEx;
        typedef std::function<void(const InlineAgentPayloadPart&)> InlineAgentPayloadPartCallback;
        typedef std::function<void(const InlineAgentTracePart&)> InlineAgentTracePartCallback;
        typedef std::function<void(const InlineAgentReturnControlPayload&)> InlineAgentReturnControlPayloadCallback;
        typedef std::function<void(const InlineAgentFilePart&)> InlineAgentFilePartCallback;
        typedef std::function<void(const Aws::Client::AWSError<BedrockAgentRuntimeErrors>& error)> ErrorCallback;

    public:
        AWS_BEDROCKAGENTRUNTIME_API InvokeInlineAgentHandler();
        AWS_BEDROCKAGENTRUNTIME_API InvokeInlineAgentHandler& operator=(const InvokeInlineAgentHandler&) = default;
        AWS_BEDROCKAGENTRUNTIME_API InvokeInlineAgentHandler(const InvokeInlineAgentHandler&) = default;

        AWS_BEDROCKAGENTRUNTIME_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial InvokeInlineAgent Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const InvokeInlineAgentInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const InvokeInlineAgentInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const InvokeInlineAgentInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetInlineAgentPayloadPartCallback(const InlineAgentPayloadPartCallback& callback) { m_onInlineAgentPayloadPart = callback; }
        inline void SetInlineAgentTracePartCallback(const InlineAgentTracePartCallback& callback) { m_onInlineAgentTracePart = callback; }
        inline void SetInlineAgentReturnControlPayloadCallback(const InlineAgentReturnControlPayloadCallback& callback) { m_onInlineAgentReturnControlPayload = callback; }
        inline void SetInlineAgentFilePartCallback(const InlineAgentFilePartCallback& callback) { m_onInlineAgentFilePart = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline InvokeInlineAgentInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_BEDROCKAGENTRUNTIME_API void HandleEventInMessage();
        AWS_BEDROCKAGENTRUNTIME_API void HandleErrorInMessage();
        AWS_BEDROCKAGENTRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        InvokeInlineAgentInitialResponseCallbackEx m_onInitialResponse;
        InlineAgentPayloadPartCallback m_onInlineAgentPayloadPart;
        InlineAgentTracePartCallback m_onInlineAgentTracePart;
        InlineAgentReturnControlPayloadCallback m_onInlineAgentReturnControlPayload;
        InlineAgentFilePartCallback m_onInlineAgentFilePart;
        ErrorCallback m_onError;
    };

namespace InvokeInlineAgentEventMapper
{
    AWS_BEDROCKAGENTRUNTIME_API InvokeInlineAgentEventType GetInvokeInlineAgentEventTypeForName(const Aws::String& name);

    AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForInvokeInlineAgentEventType(InvokeInlineAgentEventType value);
} // namespace InvokeInlineAgentEventMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
