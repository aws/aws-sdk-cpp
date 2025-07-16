/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreErrors.h>

#include <aws/bedrock-agentcore/model/InvokeCodeInterpreterInitialResponse.h>
#include <aws/bedrock-agentcore/model/CodeInterpreterResult.h>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{
    enum class InvokeCodeInterpreterEventType
    {
        INITIAL_RESPONSE,
        RESULT,
        UNKNOWN
    };

    class InvokeCodeInterpreterHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const InvokeCodeInterpreterInitialResponse&)> InvokeCodeInterpreterInitialResponseCallback;
        typedef std::function<void(const InvokeCodeInterpreterInitialResponse&, const Utils::Event::InitialResponseType)> InvokeCodeInterpreterInitialResponseCallbackEx;
        typedef std::function<void(const CodeInterpreterResult&)> CodeInterpreterResultCallback;
        typedef std::function<void(const Aws::Client::AWSError<BedrockAgentCoreErrors>& error)> ErrorCallback;

    public:
        AWS_BEDROCKAGENTCORE_API InvokeCodeInterpreterHandler();
        AWS_BEDROCKAGENTCORE_API InvokeCodeInterpreterHandler& operator=(const InvokeCodeInterpreterHandler&) = default;
        AWS_BEDROCKAGENTCORE_API InvokeCodeInterpreterHandler(const InvokeCodeInterpreterHandler&) = default;

        AWS_BEDROCKAGENTCORE_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial InvokeCodeInterpreter Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const InvokeCodeInterpreterInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const InvokeCodeInterpreterInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const InvokeCodeInterpreterInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetCodeInterpreterResultCallback(const CodeInterpreterResultCallback& callback) { m_onCodeInterpreterResult = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline InvokeCodeInterpreterInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_BEDROCKAGENTCORE_API void HandleEventInMessage();
        AWS_BEDROCKAGENTCORE_API void HandleErrorInMessage();
        AWS_BEDROCKAGENTCORE_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        InvokeCodeInterpreterInitialResponseCallbackEx m_onInitialResponse;
        CodeInterpreterResultCallback m_onCodeInterpreterResult;
        ErrorCallback m_onError;
    };

namespace InvokeCodeInterpreterEventMapper
{
    AWS_BEDROCKAGENTCORE_API InvokeCodeInterpreterEventType GetInvokeCodeInterpreterEventTypeForName(const Aws::String& name);

    AWS_BEDROCKAGENTCORE_API Aws::String GetNameForInvokeCodeInterpreterEventType(InvokeCodeInterpreterEventType value);
} // namespace InvokeCodeInterpreterEventMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
