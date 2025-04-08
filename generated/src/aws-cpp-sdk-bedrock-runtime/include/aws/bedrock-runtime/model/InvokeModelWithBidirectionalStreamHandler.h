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

#include <aws/bedrock-runtime/model/InvokeModelWithBidirectionalStreamInitialResponse.h>
#include <aws/bedrock-runtime/model/BidirectionalOutputPayloadPart.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{
    enum class InvokeModelWithBidirectionalStreamEventType
    {
        INITIAL_RESPONSE,
        CHUNK,
        UNKNOWN
    };

    class InvokeModelWithBidirectionalStreamHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const InvokeModelWithBidirectionalStreamInitialResponse&)> InvokeModelWithBidirectionalStreamInitialResponseCallback;
        typedef std::function<void(const InvokeModelWithBidirectionalStreamInitialResponse&, const Utils::Event::InitialResponseType)> InvokeModelWithBidirectionalStreamInitialResponseCallbackEx;
        typedef std::function<void(const BidirectionalOutputPayloadPart&)> BidirectionalOutputPayloadPartCallback;
        typedef std::function<void(const Aws::Client::AWSError<BedrockRuntimeErrors>& error)> ErrorCallback;

    public:
        AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamHandler();
        AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamHandler& operator=(const InvokeModelWithBidirectionalStreamHandler&) = default;
        AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamHandler(const InvokeModelWithBidirectionalStreamHandler&) = default;

        AWS_BEDROCKRUNTIME_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial InvokeModelWithBidirectionalStream Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const InvokeModelWithBidirectionalStreamInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const InvokeModelWithBidirectionalStreamInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const InvokeModelWithBidirectionalStreamInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetBidirectionalOutputPayloadPartCallback(const BidirectionalOutputPayloadPartCallback& callback) { m_onBidirectionalOutputPayloadPart = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline InvokeModelWithBidirectionalStreamInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_BEDROCKRUNTIME_API void HandleEventInMessage();
        AWS_BEDROCKRUNTIME_API void HandleErrorInMessage();
        AWS_BEDROCKRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        InvokeModelWithBidirectionalStreamInitialResponseCallbackEx m_onInitialResponse;
        BidirectionalOutputPayloadPartCallback m_onBidirectionalOutputPayloadPart;
        ErrorCallback m_onError;
    };

namespace InvokeModelWithBidirectionalStreamEventMapper
{
    AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamEventType GetInvokeModelWithBidirectionalStreamEventTypeForName(const Aws::String& name);

    AWS_BEDROCKRUNTIME_API Aws::String GetNameForInvokeModelWithBidirectionalStreamEventType(InvokeModelWithBidirectionalStreamEventType value);
} // namespace InvokeModelWithBidirectionalStreamEventMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
