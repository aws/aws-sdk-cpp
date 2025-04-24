/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/PlaybackInterruptionEvent.h>
#include <aws/lexv2-runtime/model/TranscriptEvent.h>
#include <aws/lexv2-runtime/model/IntentResultEvent.h>
#include <aws/lexv2-runtime/model/TextResponseEvent.h>
#include <aws/lexv2-runtime/model/AudioResponseEvent.h>
#include <aws/lexv2-runtime/model/HeartbeatEvent.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>Represents a stream of events between Amazon Lex V2 and your
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/StartConversationResponseEventStream">AWS
   * API Reference</a></p>
   */
  class StartConversationResponseEventStream
  {
  public:
    AWS_LEXRUNTIMEV2_API StartConversationResponseEventStream() = default;
    AWS_LEXRUNTIMEV2_API StartConversationResponseEventStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API StartConversationResponseEventStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const PlaybackInterruptionEvent& GetPlaybackInterruptionEvent() const { return m_playbackInterruptionEvent; }
    inline bool PlaybackInterruptionEventHasBeenSet() const { return m_playbackInterruptionEventHasBeenSet; }
    template<typename PlaybackInterruptionEventT = PlaybackInterruptionEvent>
    void SetPlaybackInterruptionEvent(PlaybackInterruptionEventT&& value) { m_playbackInterruptionEventHasBeenSet = true; m_playbackInterruptionEvent = std::forward<PlaybackInterruptionEventT>(value); }
    template<typename PlaybackInterruptionEventT = PlaybackInterruptionEvent>
    StartConversationResponseEventStream& WithPlaybackInterruptionEvent(PlaybackInterruptionEventT&& value) { SetPlaybackInterruptionEvent(std::forward<PlaybackInterruptionEventT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TranscriptEvent& GetTranscriptEvent() const { return m_transcriptEvent; }
    inline bool TranscriptEventHasBeenSet() const { return m_transcriptEventHasBeenSet; }
    template<typename TranscriptEventT = TranscriptEvent>
    void SetTranscriptEvent(TranscriptEventT&& value) { m_transcriptEventHasBeenSet = true; m_transcriptEvent = std::forward<TranscriptEventT>(value); }
    template<typename TranscriptEventT = TranscriptEvent>
    StartConversationResponseEventStream& WithTranscriptEvent(TranscriptEventT&& value) { SetTranscriptEvent(std::forward<TranscriptEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event sent from Amazon Lex V2 to the client application containing the
     * current state of the conversation between the user and Amazon Lex V2.</p>
     */
    inline const IntentResultEvent& GetIntentResultEvent() const { return m_intentResultEvent; }
    inline bool IntentResultEventHasBeenSet() const { return m_intentResultEventHasBeenSet; }
    template<typename IntentResultEventT = IntentResultEvent>
    void SetIntentResultEvent(IntentResultEventT&& value) { m_intentResultEventHasBeenSet = true; m_intentResultEvent = std::forward<IntentResultEventT>(value); }
    template<typename IntentResultEventT = IntentResultEvent>
    StartConversationResponseEventStream& WithIntentResultEvent(IntentResultEventT&& value) { SetIntentResultEvent(std::forward<IntentResultEventT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TextResponseEvent& GetTextResponseEvent() const { return m_textResponseEvent; }
    inline bool TextResponseEventHasBeenSet() const { return m_textResponseEventHasBeenSet; }
    template<typename TextResponseEventT = TextResponseEvent>
    void SetTextResponseEvent(TextResponseEventT&& value) { m_textResponseEventHasBeenSet = true; m_textResponseEvent = std::forward<TextResponseEventT>(value); }
    template<typename TextResponseEventT = TextResponseEvent>
    StartConversationResponseEventStream& WithTextResponseEvent(TextResponseEventT&& value) { SetTextResponseEvent(std::forward<TextResponseEventT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AudioResponseEvent& GetAudioResponseEvent() const { return m_audioResponseEvent; }
    inline bool AudioResponseEventHasBeenSet() const { return m_audioResponseEventHasBeenSet; }
    template<typename AudioResponseEventT = AudioResponseEvent>
    void SetAudioResponseEvent(AudioResponseEventT&& value) { m_audioResponseEventHasBeenSet = true; m_audioResponseEvent = std::forward<AudioResponseEventT>(value); }
    template<typename AudioResponseEventT = AudioResponseEvent>
    StartConversationResponseEventStream& WithAudioResponseEvent(AudioResponseEventT&& value) { SetAudioResponseEvent(std::forward<AudioResponseEventT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HeartbeatEvent& GetHeartbeatEvent() const { return m_heartbeatEvent; }
    inline bool HeartbeatEventHasBeenSet() const { return m_heartbeatEventHasBeenSet; }
    template<typename HeartbeatEventT = HeartbeatEvent>
    void SetHeartbeatEvent(HeartbeatEventT&& value) { m_heartbeatEventHasBeenSet = true; m_heartbeatEvent = std::forward<HeartbeatEventT>(value); }
    template<typename HeartbeatEventT = HeartbeatEvent>
    StartConversationResponseEventStream& WithHeartbeatEvent(HeartbeatEventT&& value) { SetHeartbeatEvent(std::forward<HeartbeatEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exception thrown when the credentials passed with the request are invalid or
     * expired. Also thrown when the credentials in the request do not have permission
     * to access the <code>StartConversation</code> operation.</p>
     */
    inline const LexRuntimeV2Error& GetAccessDeniedException() const { return m_accessDeniedException; }
    inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
    template<typename AccessDeniedExceptionT = LexRuntimeV2Error>
    void SetAccessDeniedException(AccessDeniedExceptionT&& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = std::forward<AccessDeniedExceptionT>(value); }
    template<typename AccessDeniedExceptionT = LexRuntimeV2Error>
    StartConversationResponseEventStream& WithAccessDeniedException(AccessDeniedExceptionT&& value) { SetAccessDeniedException(std::forward<AccessDeniedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exception thrown if one of the input parameters points to a resource that
     * does not exist. For example, if the bot ID specified does not exist.</p>
     */
    inline const LexRuntimeV2Error& GetResourceNotFoundException() const { return m_resourceNotFoundException; }
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
    template<typename ResourceNotFoundExceptionT = LexRuntimeV2Error>
    void SetResourceNotFoundException(ResourceNotFoundExceptionT&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::forward<ResourceNotFoundExceptionT>(value); }
    template<typename ResourceNotFoundExceptionT = LexRuntimeV2Error>
    StartConversationResponseEventStream& WithResourceNotFoundException(ResourceNotFoundExceptionT&& value) { SetResourceNotFoundException(std::forward<ResourceNotFoundExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exception thrown when one or more parameters could not be validated. The
     * <code>message</code> contains the name of the field that isn't valid.</p>
     */
    inline const LexRuntimeV2Error& GetValidationException() const { return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    template<typename ValidationExceptionT = LexRuntimeV2Error>
    void SetValidationException(ValidationExceptionT&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::forward<ValidationExceptionT>(value); }
    template<typename ValidationExceptionT = LexRuntimeV2Error>
    StartConversationResponseEventStream& WithValidationException(ValidationExceptionT&& value) { SetValidationException(std::forward<ValidationExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exception thrown when your application exceeds the maximum number of
     * concurrent requests. </p>
     */
    inline const LexRuntimeV2Error& GetThrottlingException() const { return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    template<typename ThrottlingExceptionT = LexRuntimeV2Error>
    void SetThrottlingException(ThrottlingExceptionT&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::forward<ThrottlingExceptionT>(value); }
    template<typename ThrottlingExceptionT = LexRuntimeV2Error>
    StartConversationResponseEventStream& WithThrottlingException(ThrottlingExceptionT&& value) { SetThrottlingException(std::forward<ThrottlingExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error occurred with Amazon Lex V2.</p>
     */
    inline const LexRuntimeV2Error& GetInternalServerException() const { return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    template<typename InternalServerExceptionT = LexRuntimeV2Error>
    void SetInternalServerException(InternalServerExceptionT&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::forward<InternalServerExceptionT>(value); }
    template<typename InternalServerExceptionT = LexRuntimeV2Error>
    StartConversationResponseEventStream& WithInternalServerException(InternalServerExceptionT&& value) { SetInternalServerException(std::forward<InternalServerExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exception thrown when two clients are using the same AWS account, Amazon Lex
     * V2 bot, and session ID.</p>
     */
    inline const LexRuntimeV2Error& GetConflictException() const { return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    template<typename ConflictExceptionT = LexRuntimeV2Error>
    void SetConflictException(ConflictExceptionT&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::forward<ConflictExceptionT>(value); }
    template<typename ConflictExceptionT = LexRuntimeV2Error>
    StartConversationResponseEventStream& WithConflictException(ConflictExceptionT&& value) { SetConflictException(std::forward<ConflictExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LexRuntimeV2Error& GetDependencyFailedException() const { return m_dependencyFailedException; }
    inline bool DependencyFailedExceptionHasBeenSet() const { return m_dependencyFailedExceptionHasBeenSet; }
    template<typename DependencyFailedExceptionT = LexRuntimeV2Error>
    void SetDependencyFailedException(DependencyFailedExceptionT&& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = std::forward<DependencyFailedExceptionT>(value); }
    template<typename DependencyFailedExceptionT = LexRuntimeV2Error>
    StartConversationResponseEventStream& WithDependencyFailedException(DependencyFailedExceptionT&& value) { SetDependencyFailedException(std::forward<DependencyFailedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LexRuntimeV2Error& GetBadGatewayException() const { return m_badGatewayException; }
    inline bool BadGatewayExceptionHasBeenSet() const { return m_badGatewayExceptionHasBeenSet; }
    template<typename BadGatewayExceptionT = LexRuntimeV2Error>
    void SetBadGatewayException(BadGatewayExceptionT&& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = std::forward<BadGatewayExceptionT>(value); }
    template<typename BadGatewayExceptionT = LexRuntimeV2Error>
    StartConversationResponseEventStream& WithBadGatewayException(BadGatewayExceptionT&& value) { SetBadGatewayException(std::forward<BadGatewayExceptionT>(value)); return *this;}
    ///@}
  private:

    PlaybackInterruptionEvent m_playbackInterruptionEvent;
    bool m_playbackInterruptionEventHasBeenSet = false;

    TranscriptEvent m_transcriptEvent;
    bool m_transcriptEventHasBeenSet = false;

    IntentResultEvent m_intentResultEvent;
    bool m_intentResultEventHasBeenSet = false;

    TextResponseEvent m_textResponseEvent;
    bool m_textResponseEventHasBeenSet = false;

    AudioResponseEvent m_audioResponseEvent;
    bool m_audioResponseEventHasBeenSet = false;

    HeartbeatEvent m_heartbeatEvent;
    bool m_heartbeatEventHasBeenSet = false;

    LexRuntimeV2Error m_accessDeniedException;
    bool m_accessDeniedExceptionHasBeenSet = false;

    LexRuntimeV2Error m_resourceNotFoundException;
    bool m_resourceNotFoundExceptionHasBeenSet = false;

    LexRuntimeV2Error m_validationException;
    bool m_validationExceptionHasBeenSet = false;

    LexRuntimeV2Error m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    LexRuntimeV2Error m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    LexRuntimeV2Error m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    LexRuntimeV2Error m_dependencyFailedException;
    bool m_dependencyFailedExceptionHasBeenSet = false;

    LexRuntimeV2Error m_badGatewayException;
    bool m_badGatewayExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
