/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace LexRuntimeV2
{
namespace Model
{
  class RecognizeUtteranceResult
  {
  public:
    AWS_LEXRUNTIMEV2_API RecognizeUtteranceResult() = default;
    AWS_LEXRUNTIMEV2_API RecognizeUtteranceResult(RecognizeUtteranceResult&&) = default;
    AWS_LEXRUNTIMEV2_API RecognizeUtteranceResult& operator=(RecognizeUtteranceResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    RecognizeUtteranceResult(const RecognizeUtteranceResult&) = delete;
    RecognizeUtteranceResult& operator=(const RecognizeUtteranceResult&) = delete;


    AWS_LEXRUNTIMEV2_API RecognizeUtteranceResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LEXRUNTIMEV2_API RecognizeUtteranceResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>Indicates whether the input mode to the operation was text, speech, or from a
     * touch-tone keypad. </p>
     */
    inline const Aws::String& GetInputMode() const { return m_inputMode; }
    template<typename InputModeT = Aws::String>
    void SetInputMode(InputModeT&& value) { m_inputModeHasBeenSet = true; m_inputMode = std::forward<InputModeT>(value); }
    template<typename InputModeT = Aws::String>
    RecognizeUtteranceResult& WithInputMode(InputModeT&& value) { SetInputMode(std::forward<InputModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Content type as specified in the <code>responseContentType</code> in the
     * request.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    RecognizeUtteranceResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that you returned the messages from your Lambda function or
     * the order that the messages are defined in the bot.</p> <p>The
     * <code>messages</code> field is compressed with gzip and then base64 encoded.
     * Before you can use the contents of the field, you must decode and decompress the
     * contents. See the example for a simple function to decode and decompress the
     * contents.</p>
     */
    inline const Aws::String& GetMessages() const { return m_messages; }
    template<typename MessagesT = Aws::String>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::String>
    RecognizeUtteranceResult& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance.</p> <p>Each interpretation includes the intent, a score that
     * indicates how confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p> <p>The <code>interpretations</code> field is compressed
     * with gzip and then base64 encoded. Before you can use the contents of the field,
     * you must decode and decompress the contents. See the example for a simple
     * function to decode and decompress the contents.</p>
     */
    inline const Aws::String& GetInterpretations() const { return m_interpretations; }
    template<typename InterpretationsT = Aws::String>
    void SetInterpretations(InterpretationsT&& value) { m_interpretationsHasBeenSet = true; m_interpretations = std::forward<InterpretationsT>(value); }
    template<typename InterpretationsT = Aws::String>
    RecognizeUtteranceResult& WithInterpretations(InterpretationsT&& value) { SetInterpretations(std::forward<InterpretationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action might be.</p> <p>The <code>sessionState</code> field is compressed with
     * gzip and then base64 encoded. Before you can use the contents of the field, you
     * must decode and decompress the contents. See the example for a simple function
     * to decode and decompress the contents.</p>
     */
    inline const Aws::String& GetSessionState() const { return m_sessionState; }
    template<typename SessionStateT = Aws::String>
    void SetSessionState(SessionStateT&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::forward<SessionStateT>(value); }
    template<typename SessionStateT = Aws::String>
    RecognizeUtteranceResult& WithSessionState(SessionStateT&& value) { SetSessionState(std::forward<SessionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes sent in the request.</p> <p>The <code>requestAttributes</code>
     * field is compressed with gzip and then base64 encoded. Before you can use the
     * contents of the field, you must decode and decompress the contents.</p>
     */
    inline const Aws::String& GetRequestAttributes() const { return m_requestAttributes; }
    template<typename RequestAttributesT = Aws::String>
    void SetRequestAttributes(RequestAttributesT&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::forward<RequestAttributesT>(value); }
    template<typename RequestAttributesT = Aws::String>
    RecognizeUtteranceResult& WithRequestAttributes(RequestAttributesT&& value) { SetRequestAttributes(std::forward<RequestAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session in use.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    RecognizeUtteranceResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text used to process the request.</p> <p>If the input was an audio
     * stream, the <code>inputTranscript</code> field contains the text extracted from
     * the audio stream. This is the text that is actually processed to recognize
     * intents and slot values. You can use this information to determine if Amazon Lex
     * V2 is correctly processing the audio that you send.</p> <p>The
     * <code>inputTranscript</code> field is compressed with gzip and then base64
     * encoded. Before you can use the contents of the field, you must decode and
     * decompress the contents. See the example for a simple function to decode and
     * decompress the contents.</p>
     */
    inline const Aws::String& GetInputTranscript() const { return m_inputTranscript; }
    template<typename InputTranscriptT = Aws::String>
    void SetInputTranscript(InputTranscriptT&& value) { m_inputTranscriptHasBeenSet = true; m_inputTranscript = std::forward<InputTranscriptT>(value); }
    template<typename InputTranscriptT = Aws::String>
    RecognizeUtteranceResult& WithInputTranscript(InputTranscriptT&& value) { SetInputTranscript(std::forward<InputTranscriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt or statement to send to the user. This is based on the bot
     * configuration and context. For example, if Amazon Lex V2 did not understand the
     * user intent, it sends the <code>clarificationPrompt</code> configured for the
     * bot. If the intent requires confirmation before taking the fulfillment action,
     * it sends the <code>confirmationPrompt</code>. Another example: Suppose that the
     * Lambda function successfully fulfilled the intent, and sent a message to convey
     * to the user. Then Amazon Lex V2 sends that message in the response.</p>
     */
    inline Aws::IOStream& GetAudioStream() const { return m_audioStream.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_audioStream = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The bot member that recognized the utterance.</p>
     */
    inline const Aws::String& GetRecognizedBotMember() const { return m_recognizedBotMember; }
    template<typename RecognizedBotMemberT = Aws::String>
    void SetRecognizedBotMember(RecognizedBotMemberT&& value) { m_recognizedBotMemberHasBeenSet = true; m_recognizedBotMember = std::forward<RecognizedBotMemberT>(value); }
    template<typename RecognizedBotMemberT = Aws::String>
    RecognizeUtteranceResult& WithRecognizedBotMember(RecognizedBotMemberT&& value) { SetRecognizedBotMember(std::forward<RecognizedBotMemberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RecognizeUtteranceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputMode;
    bool m_inputModeHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::String m_interpretations;
    bool m_interpretationsHasBeenSet = false;

    Aws::String m_sessionState;
    bool m_sessionStateHasBeenSet = false;

    Aws::String m_requestAttributes;
    bool m_requestAttributesHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_inputTranscript;
    bool m_inputTranscriptHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_audioStream{};
    bool m_audioStreamHasBeenSet = false;

    Aws::String m_recognizedBotMember;
    bool m_recognizedBotMemberHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
