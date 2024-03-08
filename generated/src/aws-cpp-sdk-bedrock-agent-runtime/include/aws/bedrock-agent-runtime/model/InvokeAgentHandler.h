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
        TRACE,
        UNKNOWN
    };

    class InvokeAgentHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const InvokeAgentInitialResponse&)> InvokeAgentInitialResponseCallback;
        typedef std::function<void(const PayloadPart&)> PayloadPartCallback;
        typedef std::function<void(const TracePart&)> TracePartCallback;
        typedef std::function<void(const Aws::Client::AWSError<BedrockAgentRuntimeErrors>& error)> ErrorCallback;

    public:
        AWS_BEDROCKAGENTRUNTIME_API InvokeAgentHandler();
        AWS_BEDROCKAGENTRUNTIME_API InvokeAgentHandler& operator=(const InvokeAgentHandler&) = default;

        AWS_BEDROCKAGENTRUNTIME_API virtual void OnEvent() override;

        inline void SetInitialResponseCallback(const InvokeAgentInitialResponseCallback& callback) { m_onInitialResponse = callback; }
        inline void SetPayloadPartCallback(const PayloadPartCallback& callback) { m_onPayloadPart = callback; }
        inline void SetTracePartCallback(const TracePartCallback& callback) { m_onTracePart = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

    private:
        AWS_BEDROCKAGENTRUNTIME_API void HandleEventInMessage();
        AWS_BEDROCKAGENTRUNTIME_API void HandleErrorInMessage();
        AWS_BEDROCKAGENTRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        InvokeAgentInitialResponseCallback m_onInitialResponse;
        PayloadPartCallback m_onPayloadPart;
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
