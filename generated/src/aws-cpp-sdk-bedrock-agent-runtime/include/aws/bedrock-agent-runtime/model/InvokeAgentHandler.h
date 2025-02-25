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

#include <aws/bedrock-agent-runtime/model/InvokeAgentInitialResponse.h>
#include <aws/bedrock-agent-runtime/model/PayloadPart.h>
#include <aws/bedrock-agent-runtime/model/FilePart.h>
#include <aws/bedrock-agent-runtime/model/ReturnControlPayload.h>
#include <aws/bedrock-agent-runtime/model/TracePart.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
    enum class InvokeAgentEventType
    {
        INITIAL_RESPONSE,
        CHUNK,
        FILES,
        RETURNCONTROL,
        TRACE,
        UNKNOWN
    };

    class InvokeAgentHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const InvokeAgentInitialResponse&)> InvokeAgentInitialResponseCallback;
        typedef std::function<void(const InvokeAgentInitialResponse&, const Utils::Event::InitialResponseType)> InvokeAgentInitialResponseCallbackEx;
        typedef std::function<void(const PayloadPart&)> PayloadPartCallback;
        typedef std::function<void(const FilePart&)> FilePartCallback;
        typedef std::function<void(const ReturnControlPayload&)> ReturnControlPayloadCallback;
        typedef std::function<void(const TracePart&)> TracePartCallback;
        typedef std::function<void(const Aws::Client::AWSError<BedrockAgentRuntimeErrors>& error)> ErrorCallback;

    public:
        AWS_BEDROCKAGENTRUNTIME_API InvokeAgentHandler();
        AWS_BEDROCKAGENTRUNTIME_API InvokeAgentHandler& operator=(const InvokeAgentHandler&) = default;
        AWS_BEDROCKAGENTRUNTIME_API InvokeAgentHandler(const InvokeAgentHandler&) = default;

        AWS_BEDROCKAGENTRUNTIME_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial InvokeAgent Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const InvokeAgentInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const InvokeAgentInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const InvokeAgentInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetPayloadPartCallback(const PayloadPartCallback& callback) { m_onPayloadPart = callback; }
        inline void SetFilePartCallback(const FilePartCallback& callback) { m_onFilePart = callback; }
        inline void SetReturnControlPayloadCallback(const ReturnControlPayloadCallback& callback) { m_onReturnControlPayload = callback; }
        inline void SetTracePartCallback(const TracePartCallback& callback) { m_onTracePart = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline InvokeAgentInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_BEDROCKAGENTRUNTIME_API void HandleEventInMessage();
        AWS_BEDROCKAGENTRUNTIME_API void HandleErrorInMessage();
        AWS_BEDROCKAGENTRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        InvokeAgentInitialResponseCallbackEx m_onInitialResponse;
        PayloadPartCallback m_onPayloadPart;
        FilePartCallback m_onFilePart;
        ReturnControlPayloadCallback m_onReturnControlPayload;
        TracePartCallback m_onTracePart;
        ErrorCallback m_onError;
    };

namespace InvokeAgentEventMapper
{
    AWS_BEDROCKAGENTRUNTIME_API InvokeAgentEventType GetInvokeAgentEventTypeForName(const Aws::String& name);

    AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForInvokeAgentEventType(InvokeAgentEventType value);
} // namespace InvokeAgentEventMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
