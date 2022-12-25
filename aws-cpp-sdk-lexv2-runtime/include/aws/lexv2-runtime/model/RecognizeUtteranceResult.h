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
    AWS_LEXRUNTIMEV2_API RecognizeUtteranceResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_LEXRUNTIMEV2_API RecognizeUtteranceResult(RecognizeUtteranceResult&&);
    AWS_LEXRUNTIMEV2_API RecognizeUtteranceResult& operator=(RecognizeUtteranceResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    RecognizeUtteranceResult(const RecognizeUtteranceResult&) = delete;
    RecognizeUtteranceResult& operator=(const RecognizeUtteranceResult&) = delete;


    AWS_LEXRUNTIMEV2_API RecognizeUtteranceResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LEXRUNTIMEV2_API RecognizeUtteranceResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>Indicates whether the input mode to the operation was text or speech. </p>
     */
    inline const Aws::String& GetInputMode() const{ return m_inputMode; }

    /**
     * <p>Indicates whether the input mode to the operation was text or speech. </p>
     */
    inline void SetInputMode(const Aws::String& value) { m_inputMode = value; }

    /**
     * <p>Indicates whether the input mode to the operation was text or speech. </p>
     */
    inline void SetInputMode(Aws::String&& value) { m_inputMode = std::move(value); }

    /**
     * <p>Indicates whether the input mode to the operation was text or speech. </p>
     */
    inline void SetInputMode(const char* value) { m_inputMode.assign(value); }

    /**
     * <p>Indicates whether the input mode to the operation was text or speech. </p>
     */
    inline RecognizeUtteranceResult& WithInputMode(const Aws::String& value) { SetInputMode(value); return *this;}

    /**
     * <p>Indicates whether the input mode to the operation was text or speech. </p>
     */
    inline RecognizeUtteranceResult& WithInputMode(Aws::String&& value) { SetInputMode(std::move(value)); return *this;}

    /**
     * <p>Indicates whether the input mode to the operation was text or speech. </p>
     */
    inline RecognizeUtteranceResult& WithInputMode(const char* value) { SetInputMode(value); return *this;}


    /**
     * <p>Content type as specified in the <code>responseContentType</code> in the
     * request.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>Content type as specified in the <code>responseContentType</code> in the
     * request.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>Content type as specified in the <code>responseContentType</code> in the
     * request.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>Content type as specified in the <code>responseContentType</code> in the
     * request.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>Content type as specified in the <code>responseContentType</code> in the
     * request.</p>
     */
    inline RecognizeUtteranceResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>Content type as specified in the <code>responseContentType</code> in the
     * request.</p>
     */
    inline RecognizeUtteranceResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>Content type as specified in the <code>responseContentType</code> in the
     * request.</p>
     */
    inline RecognizeUtteranceResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that you returned the messages from your Lambda function or
     * the order that the messages are defined in the bot.</p> <p>The
     * <code>messages</code> field is compressed with gzip and then base64 encoded.
     * Before you can use the contents of the field, you must decode and decompress the
     * contents. See the example for a simple function to decode and decompress the
     * contents.</p>
     */
    inline const Aws::String& GetMessages() const{ return m_messages; }

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that you returned the messages from your Lambda function or
     * the order that the messages are defined in the bot.</p> <p>The
     * <code>messages</code> field is compressed with gzip and then base64 encoded.
     * Before you can use the contents of the field, you must decode and decompress the
     * contents. See the example for a simple function to decode and decompress the
     * contents.</p>
     */
    inline void SetMessages(const Aws::String& value) { m_messages = value; }

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that you returned the messages from your Lambda function or
     * the order that the messages are defined in the bot.</p> <p>The
     * <code>messages</code> field is compressed with gzip and then base64 encoded.
     * Before you can use the contents of the field, you must decode and decompress the
     * contents. See the example for a simple function to decode and decompress the
     * contents.</p>
     */
    inline void SetMessages(Aws::String&& value) { m_messages = std::move(value); }

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that you returned the messages from your Lambda function or
     * the order that the messages are defined in the bot.</p> <p>The
     * <code>messages</code> field is compressed with gzip and then base64 encoded.
     * Before you can use the contents of the field, you must decode and decompress the
     * contents. See the example for a simple function to decode and decompress the
     * contents.</p>
     */
    inline void SetMessages(const char* value) { m_messages.assign(value); }

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that you returned the messages from your Lambda function or
     * the order that the messages are defined in the bot.</p> <p>The
     * <code>messages</code> field is compressed with gzip and then base64 encoded.
     * Before you can use the contents of the field, you must decode and decompress the
     * contents. See the example for a simple function to decode and decompress the
     * contents.</p>
     */
    inline RecognizeUtteranceResult& WithMessages(const Aws::String& value) { SetMessages(value); return *this;}

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that you returned the messages from your Lambda function or
     * the order that the messages are defined in the bot.</p> <p>The
     * <code>messages</code> field is compressed with gzip and then base64 encoded.
     * Before you can use the contents of the field, you must decode and decompress the
     * contents. See the example for a simple function to decode and decompress the
     * contents.</p>
     */
    inline RecognizeUtteranceResult& WithMessages(Aws::String&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that you returned the messages from your Lambda function or
     * the order that the messages are defined in the bot.</p> <p>The
     * <code>messages</code> field is compressed with gzip and then base64 encoded.
     * Before you can use the contents of the field, you must decode and decompress the
     * contents. See the example for a simple function to decode and decompress the
     * contents.</p>
     */
    inline RecognizeUtteranceResult& WithMessages(const char* value) { SetMessages(value); return *this;}


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
    inline const Aws::String& GetInterpretations() const{ return m_interpretations; }

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
    inline void SetInterpretations(const Aws::String& value) { m_interpretations = value; }

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
    inline void SetInterpretations(Aws::String&& value) { m_interpretations = std::move(value); }

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
    inline void SetInterpretations(const char* value) { m_interpretations.assign(value); }

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
    inline RecognizeUtteranceResult& WithInterpretations(const Aws::String& value) { SetInterpretations(value); return *this;}

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
    inline RecognizeUtteranceResult& WithInterpretations(Aws::String&& value) { SetInterpretations(std::move(value)); return *this;}

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
    inline RecognizeUtteranceResult& WithInterpretations(const char* value) { SetInterpretations(value); return *this;}


    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action might be.</p> <p>The <code>sessionState</code> field is compressed with
     * gzip and then base64 encoded. Before you can use the contents of the field, you
     * must decode and decompress the contents. See the example for a simple function
     * to decode and decompress the contents.</p>
     */
    inline const Aws::String& GetSessionState() const{ return m_sessionState; }

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action might be.</p> <p>The <code>sessionState</code> field is compressed with
     * gzip and then base64 encoded. Before you can use the contents of the field, you
     * must decode and decompress the contents. See the example for a simple function
     * to decode and decompress the contents.</p>
     */
    inline void SetSessionState(const Aws::String& value) { m_sessionState = value; }

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action might be.</p> <p>The <code>sessionState</code> field is compressed with
     * gzip and then base64 encoded. Before you can use the contents of the field, you
     * must decode and decompress the contents. See the example for a simple function
     * to decode and decompress the contents.</p>
     */
    inline void SetSessionState(Aws::String&& value) { m_sessionState = std::move(value); }

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action might be.</p> <p>The <code>sessionState</code> field is compressed with
     * gzip and then base64 encoded. Before you can use the contents of the field, you
     * must decode and decompress the contents. See the example for a simple function
     * to decode and decompress the contents.</p>
     */
    inline void SetSessionState(const char* value) { m_sessionState.assign(value); }

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action might be.</p> <p>The <code>sessionState</code> field is compressed with
     * gzip and then base64 encoded. Before you can use the contents of the field, you
     * must decode and decompress the contents. See the example for a simple function
     * to decode and decompress the contents.</p>
     */
    inline RecognizeUtteranceResult& WithSessionState(const Aws::String& value) { SetSessionState(value); return *this;}

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action might be.</p> <p>The <code>sessionState</code> field is compressed with
     * gzip and then base64 encoded. Before you can use the contents of the field, you
     * must decode and decompress the contents. See the example for a simple function
     * to decode and decompress the contents.</p>
     */
    inline RecognizeUtteranceResult& WithSessionState(Aws::String&& value) { SetSessionState(std::move(value)); return *this;}

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action might be.</p> <p>The <code>sessionState</code> field is compressed with
     * gzip and then base64 encoded. Before you can use the contents of the field, you
     * must decode and decompress the contents. See the example for a simple function
     * to decode and decompress the contents.</p>
     */
    inline RecognizeUtteranceResult& WithSessionState(const char* value) { SetSessionState(value); return *this;}


    /**
     * <p>The attributes sent in the request.</p> <p>The <code>requestAttributes</code>
     * field is compressed with gzip and then base64 encoded. Before you can use the
     * contents of the field, you must decode and decompress the contents.</p>
     */
    inline const Aws::String& GetRequestAttributes() const{ return m_requestAttributes; }

    /**
     * <p>The attributes sent in the request.</p> <p>The <code>requestAttributes</code>
     * field is compressed with gzip and then base64 encoded. Before you can use the
     * contents of the field, you must decode and decompress the contents.</p>
     */
    inline void SetRequestAttributes(const Aws::String& value) { m_requestAttributes = value; }

    /**
     * <p>The attributes sent in the request.</p> <p>The <code>requestAttributes</code>
     * field is compressed with gzip and then base64 encoded. Before you can use the
     * contents of the field, you must decode and decompress the contents.</p>
     */
    inline void SetRequestAttributes(Aws::String&& value) { m_requestAttributes = std::move(value); }

    /**
     * <p>The attributes sent in the request.</p> <p>The <code>requestAttributes</code>
     * field is compressed with gzip and then base64 encoded. Before you can use the
     * contents of the field, you must decode and decompress the contents.</p>
     */
    inline void SetRequestAttributes(const char* value) { m_requestAttributes.assign(value); }

    /**
     * <p>The attributes sent in the request.</p> <p>The <code>requestAttributes</code>
     * field is compressed with gzip and then base64 encoded. Before you can use the
     * contents of the field, you must decode and decompress the contents.</p>
     */
    inline RecognizeUtteranceResult& WithRequestAttributes(const Aws::String& value) { SetRequestAttributes(value); return *this;}

    /**
     * <p>The attributes sent in the request.</p> <p>The <code>requestAttributes</code>
     * field is compressed with gzip and then base64 encoded. Before you can use the
     * contents of the field, you must decode and decompress the contents.</p>
     */
    inline RecognizeUtteranceResult& WithRequestAttributes(Aws::String&& value) { SetRequestAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes sent in the request.</p> <p>The <code>requestAttributes</code>
     * field is compressed with gzip and then base64 encoded. Before you can use the
     * contents of the field, you must decode and decompress the contents.</p>
     */
    inline RecognizeUtteranceResult& WithRequestAttributes(const char* value) { SetRequestAttributes(value); return *this;}


    /**
     * <p>The identifier of the session in use.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline RecognizeUtteranceResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline RecognizeUtteranceResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline RecognizeUtteranceResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


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
    inline const Aws::String& GetInputTranscript() const{ return m_inputTranscript; }

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
    inline void SetInputTranscript(const Aws::String& value) { m_inputTranscript = value; }

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
    inline void SetInputTranscript(Aws::String&& value) { m_inputTranscript = std::move(value); }

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
    inline void SetInputTranscript(const char* value) { m_inputTranscript.assign(value); }

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
    inline RecognizeUtteranceResult& WithInputTranscript(const Aws::String& value) { SetInputTranscript(value); return *this;}

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
    inline RecognizeUtteranceResult& WithInputTranscript(Aws::String&& value) { SetInputTranscript(std::move(value)); return *this;}

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
    inline RecognizeUtteranceResult& WithInputTranscript(const char* value) { SetInputTranscript(value); return *this;}


    /**
     * <p>The prompt or statement to send to the user. This is based on the bot
     * configuration and context. For example, if Amazon Lex V2 did not understand the
     * user intent, it sends the <code>clarificationPrompt</code> configured for the
     * bot. If the intent requires confirmation before taking the fulfillment action,
     * it sends the <code>confirmationPrompt</code>. Another example: Suppose that the
     * Lambda function successfully fulfilled the intent, and sent a message to convey
     * to the user. Then Amazon Lex V2 sends that message in the response.</p>
     */
    inline Aws::IOStream& GetAudioStream() { return m_audioStream.GetUnderlyingStream(); }

    /**
     * <p>The prompt or statement to send to the user. This is based on the bot
     * configuration and context. For example, if Amazon Lex V2 did not understand the
     * user intent, it sends the <code>clarificationPrompt</code> configured for the
     * bot. If the intent requires confirmation before taking the fulfillment action,
     * it sends the <code>confirmationPrompt</code>. Another example: Suppose that the
     * Lambda function successfully fulfilled the intent, and sent a message to convey
     * to the user. Then Amazon Lex V2 sends that message in the response.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_audioStream = Aws::Utils::Stream::ResponseStream(body); }

  private:

    Aws::String m_inputMode;

    Aws::String m_contentType;

    Aws::String m_messages;

    Aws::String m_interpretations;

    Aws::String m_sessionState;

    Aws::String m_requestAttributes;

    Aws::String m_sessionId;

    Aws::String m_inputTranscript;

  Aws::Utils::Stream::ResponseStream m_audioStream;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
