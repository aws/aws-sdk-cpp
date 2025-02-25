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

#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateStreamInitialResponse.h>
#include <aws/bedrock-agent-runtime/model/CitationEvent.h>
#include <aws/bedrock-agent-runtime/model/GuardrailEvent.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateOutputEvent.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
    enum class RetrieveAndGenerateStreamEventType
    {
        INITIAL_RESPONSE,
        CITATION,
        GUARDRAIL,
        OUTPUT,
        UNKNOWN
    };

    class RetrieveAndGenerateStreamHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const RetrieveAndGenerateStreamInitialResponse&)> RetrieveAndGenerateStreamInitialResponseCallback;
        typedef std::function<void(const RetrieveAndGenerateStreamInitialResponse&, const Utils::Event::InitialResponseType)> RetrieveAndGenerateStreamInitialResponseCallbackEx;
        typedef std::function<void(const CitationEvent&)> CitationEventCallback;
        typedef std::function<void(const GuardrailEvent&)> GuardrailEventCallback;
        typedef std::function<void(const RetrieveAndGenerateOutputEvent&)> RetrieveAndGenerateOutputEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<BedrockAgentRuntimeErrors>& error)> ErrorCallback;

    public:
        AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateStreamHandler();
        AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateStreamHandler& operator=(const RetrieveAndGenerateStreamHandler&) = default;
        AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateStreamHandler(const RetrieveAndGenerateStreamHandler&) = default;

        AWS_BEDROCKAGENTRUNTIME_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial RetrieveAndGenerateStream Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const RetrieveAndGenerateStreamInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const RetrieveAndGenerateStreamInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const RetrieveAndGenerateStreamInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetCitationEventCallback(const CitationEventCallback& callback) { m_onCitationEvent = callback; }
        inline void SetGuardrailEventCallback(const GuardrailEventCallback& callback) { m_onGuardrailEvent = callback; }
        inline void SetRetrieveAndGenerateOutputEventCallback(const RetrieveAndGenerateOutputEventCallback& callback) { m_onRetrieveAndGenerateOutputEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline RetrieveAndGenerateStreamInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_BEDROCKAGENTRUNTIME_API void HandleEventInMessage();
        AWS_BEDROCKAGENTRUNTIME_API void HandleErrorInMessage();
        AWS_BEDROCKAGENTRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        RetrieveAndGenerateStreamInitialResponseCallbackEx m_onInitialResponse;
        CitationEventCallback m_onCitationEvent;
        GuardrailEventCallback m_onGuardrailEvent;
        RetrieveAndGenerateOutputEventCallback m_onRetrieveAndGenerateOutputEvent;
        ErrorCallback m_onError;
    };

namespace RetrieveAndGenerateStreamEventMapper
{
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateStreamEventType GetRetrieveAndGenerateStreamEventTypeForName(const Aws::String& name);

    AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForRetrieveAndGenerateStreamEventType(RetrieveAndGenerateStreamEventType value);
} // namespace RetrieveAndGenerateStreamEventMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
