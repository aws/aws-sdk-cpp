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

#include <aws/bedrock-runtime/model/ConverseStreamInitialResponse.h>
#include <aws/bedrock-runtime/model/MessageStartEvent.h>
#include <aws/bedrock-runtime/model/ContentBlockStartEvent.h>
#include <aws/bedrock-runtime/model/ContentBlockDeltaEvent.h>
#include <aws/bedrock-runtime/model/ContentBlockStopEvent.h>
#include <aws/bedrock-runtime/model/MessageStopEvent.h>
#include <aws/bedrock-runtime/model/ConverseStreamMetadataEvent.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{
    enum class ConverseStreamEventType
    {
        INITIAL_RESPONSE,
        MESSAGESTART,
        CONTENTBLOCKSTART,
        CONTENTBLOCKDELTA,
        CONTENTBLOCKSTOP,
        MESSAGESTOP,
        METADATA,
        UNKNOWN
    };

    class ConverseStreamHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const ConverseStreamInitialResponse&)> ConverseStreamInitialResponseCallback;
        typedef std::function<void(const ConverseStreamInitialResponse&, const Utils::Event::InitialResponseType)> ConverseStreamInitialResponseCallbackEx;
        typedef std::function<void(const MessageStartEvent&)> MessageStartEventCallback;
        typedef std::function<void(const ContentBlockStartEvent&)> ContentBlockStartEventCallback;
        typedef std::function<void(const ContentBlockDeltaEvent&)> ContentBlockDeltaEventCallback;
        typedef std::function<void(const ContentBlockStopEvent&)> ContentBlockStopEventCallback;
        typedef std::function<void(const MessageStopEvent&)> MessageStopEventCallback;
        typedef std::function<void(const ConverseStreamMetadataEvent&)> ConverseStreamMetadataEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<BedrockRuntimeErrors>& error)> ErrorCallback;

    public:
        AWS_BEDROCKRUNTIME_API ConverseStreamHandler();
        AWS_BEDROCKRUNTIME_API ConverseStreamHandler& operator=(const ConverseStreamHandler&) = default;
        AWS_BEDROCKRUNTIME_API ConverseStreamHandler(const ConverseStreamHandler&) = default;

        AWS_BEDROCKRUNTIME_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial ConverseStream Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const ConverseStreamInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const ConverseStreamInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const ConverseStreamInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetMessageStartEventCallback(const MessageStartEventCallback& callback) { m_onMessageStartEvent = callback; }
        inline void SetContentBlockStartEventCallback(const ContentBlockStartEventCallback& callback) { m_onContentBlockStartEvent = callback; }
        inline void SetContentBlockDeltaEventCallback(const ContentBlockDeltaEventCallback& callback) { m_onContentBlockDeltaEvent = callback; }
        inline void SetContentBlockStopEventCallback(const ContentBlockStopEventCallback& callback) { m_onContentBlockStopEvent = callback; }
        inline void SetMessageStopEventCallback(const MessageStopEventCallback& callback) { m_onMessageStopEvent = callback; }
        inline void SetConverseStreamMetadataEventCallback(const ConverseStreamMetadataEventCallback& callback) { m_onConverseStreamMetadataEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline ConverseStreamInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_BEDROCKRUNTIME_API void HandleEventInMessage();
        AWS_BEDROCKRUNTIME_API void HandleErrorInMessage();
        AWS_BEDROCKRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        ConverseStreamInitialResponseCallbackEx m_onInitialResponse;
        MessageStartEventCallback m_onMessageStartEvent;
        ContentBlockStartEventCallback m_onContentBlockStartEvent;
        ContentBlockDeltaEventCallback m_onContentBlockDeltaEvent;
        ContentBlockStopEventCallback m_onContentBlockStopEvent;
        MessageStopEventCallback m_onMessageStopEvent;
        ConverseStreamMetadataEventCallback m_onConverseStreamMetadataEvent;
        ErrorCallback m_onError;
    };

namespace ConverseStreamEventMapper
{
    AWS_BEDROCKRUNTIME_API ConverseStreamEventType GetConverseStreamEventTypeForName(const Aws::String& name);

    AWS_BEDROCKRUNTIME_API Aws::String GetNameForConverseStreamEventType(ConverseStreamEventType value);
} // namespace ConverseStreamEventMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
