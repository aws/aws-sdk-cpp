/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/LexRuntimeV2Errors.h>

#include <aws/lexv2-runtime/model/PlaybackInterruptionEvent.h>
#include <aws/lexv2-runtime/model/TranscriptEvent.h>
#include <aws/lexv2-runtime/model/IntentResultEvent.h>
#include <aws/lexv2-runtime/model/TextResponseEvent.h>
#include <aws/lexv2-runtime/model/AudioResponseEvent.h>
#include <aws/lexv2-runtime/model/HeartbeatEvent.h>

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{
    enum class StartConversationEventType
    {
        PLAYBACKINTERRUPTIONEVENT,
        TRANSCRIPTEVENT,
        INTENTRESULTEVENT,
        TEXTRESPONSEEVENT,
        AUDIORESPONSEEVENT,
        HEARTBEATEVENT,
        UNKNOWN
    };

    class StartConversationHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const PlaybackInterruptionEvent&)> PlaybackInterruptionEventCallback;
        typedef std::function<void(const TranscriptEvent&)> TranscriptEventCallback;
        typedef std::function<void(const IntentResultEvent&)> IntentResultEventCallback;
        typedef std::function<void(const TextResponseEvent&)> TextResponseEventCallback;
        typedef std::function<void(const AudioResponseEvent&)> AudioResponseEventCallback;
        typedef std::function<void(const HeartbeatEvent&)> HeartbeatEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<LexRuntimeV2Errors>& error)> ErrorCallback;

    public:
        AWS_LEXRUNTIMEV2_API StartConversationHandler();
        AWS_LEXRUNTIMEV2_API StartConversationHandler& operator=(const StartConversationHandler&) = default;

        AWS_LEXRUNTIMEV2_API virtual void OnEvent() override;

        inline void SetPlaybackInterruptionEventCallback(const PlaybackInterruptionEventCallback& callback) { m_onPlaybackInterruptionEvent = callback; }
        inline void SetTranscriptEventCallback(const TranscriptEventCallback& callback) { m_onTranscriptEvent = callback; }
        inline void SetIntentResultEventCallback(const IntentResultEventCallback& callback) { m_onIntentResultEvent = callback; }
        inline void SetTextResponseEventCallback(const TextResponseEventCallback& callback) { m_onTextResponseEvent = callback; }
        inline void SetAudioResponseEventCallback(const AudioResponseEventCallback& callback) { m_onAudioResponseEvent = callback; }
        inline void SetHeartbeatEventCallback(const HeartbeatEventCallback& callback) { m_onHeartbeatEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

    private:
        AWS_LEXRUNTIMEV2_API void HandleEventInMessage();
        AWS_LEXRUNTIMEV2_API void HandleErrorInMessage();
        AWS_LEXRUNTIMEV2_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        PlaybackInterruptionEventCallback m_onPlaybackInterruptionEvent;
        TranscriptEventCallback m_onTranscriptEvent;
        IntentResultEventCallback m_onIntentResultEvent;
        TextResponseEventCallback m_onTextResponseEvent;
        AudioResponseEventCallback m_onAudioResponseEvent;
        HeartbeatEventCallback m_onHeartbeatEvent;
        ErrorCallback m_onError;
    };

namespace StartConversationEventMapper
{
    AWS_LEXRUNTIMEV2_API StartConversationEventType GetStartConversationEventTypeForName(const Aws::String& name);

    AWS_LEXRUNTIMEV2_API Aws::String GetNameForStartConversationEventType(StartConversationEventType value);
} // namespace StartConversationEventMapper
} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
