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

#include <aws/bedrock-agent-runtime/model/OptimizePromptInitialResponse.h>
#include <aws/bedrock-agent-runtime/model/AnalyzePromptEvent.h>
#include <aws/bedrock-agent-runtime/model/OptimizedPromptEvent.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
    enum class OptimizePromptEventType
    {
        INITIAL_RESPONSE,
        ANALYZEPROMPTEVENT,
        OPTIMIZEDPROMPTEVENT,
        UNKNOWN
    };

    class OptimizePromptHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const OptimizePromptInitialResponse&)> OptimizePromptInitialResponseCallback;
        typedef std::function<void(const OptimizePromptInitialResponse&, const Utils::Event::InitialResponseType)> OptimizePromptInitialResponseCallbackEx;
        typedef std::function<void(const AnalyzePromptEvent&)> AnalyzePromptEventCallback;
        typedef std::function<void(const OptimizedPromptEvent&)> OptimizedPromptEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<BedrockAgentRuntimeErrors>& error)> ErrorCallback;

    public:
        AWS_BEDROCKAGENTRUNTIME_API OptimizePromptHandler();
        AWS_BEDROCKAGENTRUNTIME_API OptimizePromptHandler& operator=(const OptimizePromptHandler&) = default;
        AWS_BEDROCKAGENTRUNTIME_API OptimizePromptHandler(const OptimizePromptHandler&) = default;

        AWS_BEDROCKAGENTRUNTIME_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial OptimizePrompt Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const OptimizePromptInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const OptimizePromptInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const OptimizePromptInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetAnalyzePromptEventCallback(const AnalyzePromptEventCallback& callback) { m_onAnalyzePromptEvent = callback; }
        inline void SetOptimizedPromptEventCallback(const OptimizedPromptEventCallback& callback) { m_onOptimizedPromptEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline OptimizePromptInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_BEDROCKAGENTRUNTIME_API void HandleEventInMessage();
        AWS_BEDROCKAGENTRUNTIME_API void HandleErrorInMessage();
        AWS_BEDROCKAGENTRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        OptimizePromptInitialResponseCallbackEx m_onInitialResponse;
        AnalyzePromptEventCallback m_onAnalyzePromptEvent;
        OptimizedPromptEventCallback m_onOptimizedPromptEvent;
        ErrorCallback m_onError;
    };

namespace OptimizePromptEventMapper
{
    AWS_BEDROCKAGENTRUNTIME_API OptimizePromptEventType GetOptimizePromptEventTypeForName(const Aws::String& name);

    AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForOptimizePromptEventType(OptimizePromptEventType value);
} // namespace OptimizePromptEventMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
