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
#include <aws/lexv2-runtime/model/AccessDeniedException.h>
#include <aws/lexv2-runtime/model/ResourceNotFoundException.h>
#include <aws/lexv2-runtime/model/ValidationException.h>
#include <aws/lexv2-runtime/model/ThrottlingException.h>
#include <aws/lexv2-runtime/model/InternalServerException.h>
#include <aws/lexv2-runtime/model/ConflictException.h>
#include <aws/lexv2-runtime/model/DependencyFailedException.h>
#include <aws/lexv2-runtime/model/BadGatewayException.h>
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
    AWS_LEXRUNTIMEV2_API StartConversationResponseEventStream();
    AWS_LEXRUNTIMEV2_API StartConversationResponseEventStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API StartConversationResponseEventStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const PlaybackInterruptionEvent& GetPlaybackInterruptionEvent() const{ return m_playbackInterruptionEvent; }

    
    inline bool PlaybackInterruptionEventHasBeenSet() const { return m_playbackInterruptionEventHasBeenSet; }

    
    inline void SetPlaybackInterruptionEvent(const PlaybackInterruptionEvent& value) { m_playbackInterruptionEventHasBeenSet = true; m_playbackInterruptionEvent = value; }

    
    inline void SetPlaybackInterruptionEvent(PlaybackInterruptionEvent&& value) { m_playbackInterruptionEventHasBeenSet = true; m_playbackInterruptionEvent = std::move(value); }

    
    inline StartConversationResponseEventStream& WithPlaybackInterruptionEvent(const PlaybackInterruptionEvent& value) { SetPlaybackInterruptionEvent(value); return *this;}

    
    inline StartConversationResponseEventStream& WithPlaybackInterruptionEvent(PlaybackInterruptionEvent&& value) { SetPlaybackInterruptionEvent(std::move(value)); return *this;}


    
    inline const TranscriptEvent& GetTranscriptEvent() const{ return m_transcriptEvent; }

    
    inline bool TranscriptEventHasBeenSet() const { return m_transcriptEventHasBeenSet; }

    
    inline void SetTranscriptEvent(const TranscriptEvent& value) { m_transcriptEventHasBeenSet = true; m_transcriptEvent = value; }

    
    inline void SetTranscriptEvent(TranscriptEvent&& value) { m_transcriptEventHasBeenSet = true; m_transcriptEvent = std::move(value); }

    
    inline StartConversationResponseEventStream& WithTranscriptEvent(const TranscriptEvent& value) { SetTranscriptEvent(value); return *this;}

    
    inline StartConversationResponseEventStream& WithTranscriptEvent(TranscriptEvent&& value) { SetTranscriptEvent(std::move(value)); return *this;}


    /**
     * <p>Event sent from Amazon Lex V2 to the client application containing the
     * current state of the conversation between the user and Amazon Lex V2.</p>
     */
    inline const IntentResultEvent& GetIntentResultEvent() const{ return m_intentResultEvent; }

    /**
     * <p>Event sent from Amazon Lex V2 to the client application containing the
     * current state of the conversation between the user and Amazon Lex V2.</p>
     */
    inline bool IntentResultEventHasBeenSet() const { return m_intentResultEventHasBeenSet; }

    /**
     * <p>Event sent from Amazon Lex V2 to the client application containing the
     * current state of the conversation between the user and Amazon Lex V2.</p>
     */
    inline void SetIntentResultEvent(const IntentResultEvent& value) { m_intentResultEventHasBeenSet = true; m_intentResultEvent = value; }

    /**
     * <p>Event sent from Amazon Lex V2 to the client application containing the
     * current state of the conversation between the user and Amazon Lex V2.</p>
     */
    inline void SetIntentResultEvent(IntentResultEvent&& value) { m_intentResultEventHasBeenSet = true; m_intentResultEvent = std::move(value); }

    /**
     * <p>Event sent from Amazon Lex V2 to the client application containing the
     * current state of the conversation between the user and Amazon Lex V2.</p>
     */
    inline StartConversationResponseEventStream& WithIntentResultEvent(const IntentResultEvent& value) { SetIntentResultEvent(value); return *this;}

    /**
     * <p>Event sent from Amazon Lex V2 to the client application containing the
     * current state of the conversation between the user and Amazon Lex V2.</p>
     */
    inline StartConversationResponseEventStream& WithIntentResultEvent(IntentResultEvent&& value) { SetIntentResultEvent(std::move(value)); return *this;}


    
    inline const TextResponseEvent& GetTextResponseEvent() const{ return m_textResponseEvent; }

    
    inline bool TextResponseEventHasBeenSet() const { return m_textResponseEventHasBeenSet; }

    
    inline void SetTextResponseEvent(const TextResponseEvent& value) { m_textResponseEventHasBeenSet = true; m_textResponseEvent = value; }

    
    inline void SetTextResponseEvent(TextResponseEvent&& value) { m_textResponseEventHasBeenSet = true; m_textResponseEvent = std::move(value); }

    
    inline StartConversationResponseEventStream& WithTextResponseEvent(const TextResponseEvent& value) { SetTextResponseEvent(value); return *this;}

    
    inline StartConversationResponseEventStream& WithTextResponseEvent(TextResponseEvent&& value) { SetTextResponseEvent(std::move(value)); return *this;}


    
    inline const AudioResponseEvent& GetAudioResponseEvent() const{ return m_audioResponseEvent; }

    
    inline bool AudioResponseEventHasBeenSet() const { return m_audioResponseEventHasBeenSet; }

    
    inline void SetAudioResponseEvent(const AudioResponseEvent& value) { m_audioResponseEventHasBeenSet = true; m_audioResponseEvent = value; }

    
    inline void SetAudioResponseEvent(AudioResponseEvent&& value) { m_audioResponseEventHasBeenSet = true; m_audioResponseEvent = std::move(value); }

    
    inline StartConversationResponseEventStream& WithAudioResponseEvent(const AudioResponseEvent& value) { SetAudioResponseEvent(value); return *this;}

    
    inline StartConversationResponseEventStream& WithAudioResponseEvent(AudioResponseEvent&& value) { SetAudioResponseEvent(std::move(value)); return *this;}


    
    inline const HeartbeatEvent& GetHeartbeatEvent() const{ return m_heartbeatEvent; }

    
    inline bool HeartbeatEventHasBeenSet() const { return m_heartbeatEventHasBeenSet; }

    
    inline void SetHeartbeatEvent(const HeartbeatEvent& value) { m_heartbeatEventHasBeenSet = true; m_heartbeatEvent = value; }

    
    inline void SetHeartbeatEvent(HeartbeatEvent&& value) { m_heartbeatEventHasBeenSet = true; m_heartbeatEvent = std::move(value); }

    
    inline StartConversationResponseEventStream& WithHeartbeatEvent(const HeartbeatEvent& value) { SetHeartbeatEvent(value); return *this;}

    
    inline StartConversationResponseEventStream& WithHeartbeatEvent(HeartbeatEvent&& value) { SetHeartbeatEvent(std::move(value)); return *this;}


    /**
     * <p>Exception thrown when the credentials passed with the request are invalid or
     * expired. Also thrown when the credentials in the request do not have permission
     * to access the <code>StartConversation</code> operation.</p>
     */
    inline const AccessDeniedException& GetAccessDeniedException() const{ return m_accessDeniedException; }

    /**
     * <p>Exception thrown when the credentials passed with the request are invalid or
     * expired. Also thrown when the credentials in the request do not have permission
     * to access the <code>StartConversation</code> operation.</p>
     */
    inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }

    /**
     * <p>Exception thrown when the credentials passed with the request are invalid or
     * expired. Also thrown when the credentials in the request do not have permission
     * to access the <code>StartConversation</code> operation.</p>
     */
    inline void SetAccessDeniedException(const AccessDeniedException& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = value; }

    /**
     * <p>Exception thrown when the credentials passed with the request are invalid or
     * expired. Also thrown when the credentials in the request do not have permission
     * to access the <code>StartConversation</code> operation.</p>
     */
    inline void SetAccessDeniedException(AccessDeniedException&& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = std::move(value); }

    /**
     * <p>Exception thrown when the credentials passed with the request are invalid or
     * expired. Also thrown when the credentials in the request do not have permission
     * to access the <code>StartConversation</code> operation.</p>
     */
    inline StartConversationResponseEventStream& WithAccessDeniedException(const AccessDeniedException& value) { SetAccessDeniedException(value); return *this;}

    /**
     * <p>Exception thrown when the credentials passed with the request are invalid or
     * expired. Also thrown when the credentials in the request do not have permission
     * to access the <code>StartConversation</code> operation.</p>
     */
    inline StartConversationResponseEventStream& WithAccessDeniedException(AccessDeniedException&& value) { SetAccessDeniedException(std::move(value)); return *this;}


    /**
     * <p>Exception thrown if one of the input parameters points to a resource that
     * does not exist. For example, if the bot ID specified does not exist.</p>
     */
    inline const ResourceNotFoundException& GetResourceNotFoundException() const{ return m_resourceNotFoundException; }

    /**
     * <p>Exception thrown if one of the input parameters points to a resource that
     * does not exist. For example, if the bot ID specified does not exist.</p>
     */
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }

    /**
     * <p>Exception thrown if one of the input parameters points to a resource that
     * does not exist. For example, if the bot ID specified does not exist.</p>
     */
    inline void SetResourceNotFoundException(const ResourceNotFoundException& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = value; }

    /**
     * <p>Exception thrown if one of the input parameters points to a resource that
     * does not exist. For example, if the bot ID specified does not exist.</p>
     */
    inline void SetResourceNotFoundException(ResourceNotFoundException&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::move(value); }

    /**
     * <p>Exception thrown if one of the input parameters points to a resource that
     * does not exist. For example, if the bot ID specified does not exist.</p>
     */
    inline StartConversationResponseEventStream& WithResourceNotFoundException(const ResourceNotFoundException& value) { SetResourceNotFoundException(value); return *this;}

    /**
     * <p>Exception thrown if one of the input parameters points to a resource that
     * does not exist. For example, if the bot ID specified does not exist.</p>
     */
    inline StartConversationResponseEventStream& WithResourceNotFoundException(ResourceNotFoundException&& value) { SetResourceNotFoundException(std::move(value)); return *this;}


    /**
     * <p>Exception thrown when one or more parameters could not be validated. The
     * <code>message</code> contains the name of the field that isn't valid.</p>
     */
    inline const ValidationException& GetValidationException() const{ return m_validationException; }

    /**
     * <p>Exception thrown when one or more parameters could not be validated. The
     * <code>message</code> contains the name of the field that isn't valid.</p>
     */
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }

    /**
     * <p>Exception thrown when one or more parameters could not be validated. The
     * <code>message</code> contains the name of the field that isn't valid.</p>
     */
    inline void SetValidationException(const ValidationException& value) { m_validationExceptionHasBeenSet = true; m_validationException = value; }

    /**
     * <p>Exception thrown when one or more parameters could not be validated. The
     * <code>message</code> contains the name of the field that isn't valid.</p>
     */
    inline void SetValidationException(ValidationException&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::move(value); }

    /**
     * <p>Exception thrown when one or more parameters could not be validated. The
     * <code>message</code> contains the name of the field that isn't valid.</p>
     */
    inline StartConversationResponseEventStream& WithValidationException(const ValidationException& value) { SetValidationException(value); return *this;}

    /**
     * <p>Exception thrown when one or more parameters could not be validated. The
     * <code>message</code> contains the name of the field that isn't valid.</p>
     */
    inline StartConversationResponseEventStream& WithValidationException(ValidationException&& value) { SetValidationException(std::move(value)); return *this;}


    /**
     * <p>Exception thrown when your application exceeds the maximum number of
     * concurrent requests. </p>
     */
    inline const ThrottlingException& GetThrottlingException() const{ return m_throttlingException; }

    /**
     * <p>Exception thrown when your application exceeds the maximum number of
     * concurrent requests. </p>
     */
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }

    /**
     * <p>Exception thrown when your application exceeds the maximum number of
     * concurrent requests. </p>
     */
    inline void SetThrottlingException(const ThrottlingException& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = value; }

    /**
     * <p>Exception thrown when your application exceeds the maximum number of
     * concurrent requests. </p>
     */
    inline void SetThrottlingException(ThrottlingException&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::move(value); }

    /**
     * <p>Exception thrown when your application exceeds the maximum number of
     * concurrent requests. </p>
     */
    inline StartConversationResponseEventStream& WithThrottlingException(const ThrottlingException& value) { SetThrottlingException(value); return *this;}

    /**
     * <p>Exception thrown when your application exceeds the maximum number of
     * concurrent requests. </p>
     */
    inline StartConversationResponseEventStream& WithThrottlingException(ThrottlingException&& value) { SetThrottlingException(std::move(value)); return *this;}


    /**
     * <p>An error occurred with Amazon Lex V2.</p>
     */
    inline const InternalServerException& GetInternalServerException() const{ return m_internalServerException; }

    /**
     * <p>An error occurred with Amazon Lex V2.</p>
     */
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }

    /**
     * <p>An error occurred with Amazon Lex V2.</p>
     */
    inline void SetInternalServerException(const InternalServerException& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = value; }

    /**
     * <p>An error occurred with Amazon Lex V2.</p>
     */
    inline void SetInternalServerException(InternalServerException&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::move(value); }

    /**
     * <p>An error occurred with Amazon Lex V2.</p>
     */
    inline StartConversationResponseEventStream& WithInternalServerException(const InternalServerException& value) { SetInternalServerException(value); return *this;}

    /**
     * <p>An error occurred with Amazon Lex V2.</p>
     */
    inline StartConversationResponseEventStream& WithInternalServerException(InternalServerException&& value) { SetInternalServerException(std::move(value)); return *this;}


    /**
     * <p>Exception thrown when two clients are using the same AWS account, Amazon Lex
     * V2 bot, and session ID.</p>
     */
    inline const ConflictException& GetConflictException() const{ return m_conflictException; }

    /**
     * <p>Exception thrown when two clients are using the same AWS account, Amazon Lex
     * V2 bot, and session ID.</p>
     */
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }

    /**
     * <p>Exception thrown when two clients are using the same AWS account, Amazon Lex
     * V2 bot, and session ID.</p>
     */
    inline void SetConflictException(const ConflictException& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = value; }

    /**
     * <p>Exception thrown when two clients are using the same AWS account, Amazon Lex
     * V2 bot, and session ID.</p>
     */
    inline void SetConflictException(ConflictException&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::move(value); }

    /**
     * <p>Exception thrown when two clients are using the same AWS account, Amazon Lex
     * V2 bot, and session ID.</p>
     */
    inline StartConversationResponseEventStream& WithConflictException(const ConflictException& value) { SetConflictException(value); return *this;}

    /**
     * <p>Exception thrown when two clients are using the same AWS account, Amazon Lex
     * V2 bot, and session ID.</p>
     */
    inline StartConversationResponseEventStream& WithConflictException(ConflictException&& value) { SetConflictException(std::move(value)); return *this;}


    
    inline const DependencyFailedException& GetDependencyFailedException() const{ return m_dependencyFailedException; }

    
    inline bool DependencyFailedExceptionHasBeenSet() const { return m_dependencyFailedExceptionHasBeenSet; }

    
    inline void SetDependencyFailedException(const DependencyFailedException& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = value; }

    
    inline void SetDependencyFailedException(DependencyFailedException&& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = std::move(value); }

    
    inline StartConversationResponseEventStream& WithDependencyFailedException(const DependencyFailedException& value) { SetDependencyFailedException(value); return *this;}

    
    inline StartConversationResponseEventStream& WithDependencyFailedException(DependencyFailedException&& value) { SetDependencyFailedException(std::move(value)); return *this;}


    
    inline const BadGatewayException& GetBadGatewayException() const{ return m_badGatewayException; }

    
    inline bool BadGatewayExceptionHasBeenSet() const { return m_badGatewayExceptionHasBeenSet; }

    
    inline void SetBadGatewayException(const BadGatewayException& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = value; }

    
    inline void SetBadGatewayException(BadGatewayException&& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = std::move(value); }

    
    inline StartConversationResponseEventStream& WithBadGatewayException(const BadGatewayException& value) { SetBadGatewayException(value); return *this;}

    
    inline StartConversationResponseEventStream& WithBadGatewayException(BadGatewayException&& value) { SetBadGatewayException(std::move(value)); return *this;}

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

    AccessDeniedException m_accessDeniedException;
    bool m_accessDeniedExceptionHasBeenSet = false;

    ResourceNotFoundException m_resourceNotFoundException;
    bool m_resourceNotFoundExceptionHasBeenSet = false;

    ValidationException m_validationException;
    bool m_validationExceptionHasBeenSet = false;

    ThrottlingException m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    InternalServerException m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    ConflictException m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    DependencyFailedException m_dependencyFailedException;
    bool m_dependencyFailedExceptionHasBeenSet = false;

    BadGatewayException m_badGatewayException;
    bool m_badGatewayExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
