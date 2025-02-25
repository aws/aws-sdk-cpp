/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/BedrockRuntimeErrors.h>

#include <aws/bedrock-runtime/model/InvokeModelWithResponseStreamInitialResponse.h>
#include <aws/bedrock-runtime/model/PayloadPart.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{
    enum class InvokeModelWithResponseStreamEventType
    {
        INITIAL_RESPONSE,
        CHUNK,
        UNKNOWN
    };

    class InvokeModelWithResponseStreamHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const InvokeModelWithResponseStreamInitialResponse&)> InvokeModelWithResponseStreamInitialResponseCallback;
        typedef std::function<void(const InvokeModelWithResponseStreamInitialResponse&, const Utils::Event::InitialResponseType)> InvokeModelWithResponseStreamInitialResponseCallbackEx;
        typedef std::function<void(const PayloadPart&)> PayloadPartCallback;
        typedef std::function<void(const Aws::Client::AWSError<BedrockRuntimeErrors>& error)> ErrorCallback;

    public:
        AWS_BEDROCKRUNTIME_API InvokeModelWithResponseStreamHandler();
        AWS_BEDROCKRUNTIME_API InvokeModelWithResponseStreamHandler& operator=(const InvokeModelWithResponseStreamHandler&) = default;
        AWS_BEDROCKRUNTIME_API InvokeModelWithResponseStreamHandler(const InvokeModelWithResponseStreamHandler&) = default;

        AWS_BEDROCKRUNTIME_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial InvokeModelWithResponseStream Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const InvokeModelWithResponseStreamInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const InvokeModelWithResponseStreamInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const InvokeModelWithResponseStreamInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetPayloadPartCallback(const PayloadPartCallback& callback) { m_onPayloadPart = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline InvokeModelWithResponseStreamInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_BEDROCKRUNTIME_API void HandleEventInMessage();
        AWS_BEDROCKRUNTIME_API void HandleErrorInMessage();
        AWS_BEDROCKRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        InvokeModelWithResponseStreamInitialResponseCallbackEx m_onInitialResponse;
        PayloadPartCallback m_onPayloadPart;
        ErrorCallback m_onError;
    };

namespace InvokeModelWithResponseStreamEventMapper
{
    AWS_BEDROCKRUNTIME_API InvokeModelWithResponseStreamEventType GetInvokeModelWithResponseStreamEventTypeForName(const Aws::String& name);

    AWS_BEDROCKRUNTIME_API Aws::String GetNameForInvokeModelWithResponseStreamEventType(InvokeModelWithResponseStreamEventType value);
} // namespace InvokeModelWithResponseStreamEventMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
