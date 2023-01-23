/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-runtime/model/SessionState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-runtime/model/Message.h>
#include <aws/lexv2-runtime/model/Interpretation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexRuntimeV2
{
namespace Model
{
  class RecognizeTextResult
  {
  public:
    AWS_LEXRUNTIMEV2_API RecognizeTextResult();
    AWS_LEXRUNTIMEV2_API RecognizeTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXRUNTIMEV2_API RecognizeTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of messages last sent to the user. The messages are ordered based on
     * the order that you returned the messages from your Lambda function or the order
     * that the messages are defined in the bot.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>A list of messages last sent to the user. The messages are ordered based on
     * the order that you returned the messages from your Lambda function or the order
     * that the messages are defined in the bot.</p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messages = value; }

    /**
     * <p>A list of messages last sent to the user. The messages are ordered based on
     * the order that you returned the messages from your Lambda function or the order
     * that the messages are defined in the bot.</p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messages = std::move(value); }

    /**
     * <p>A list of messages last sent to the user. The messages are ordered based on
     * the order that you returned the messages from your Lambda function or the order
     * that the messages are defined in the bot.</p>
     */
    inline RecognizeTextResult& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>A list of messages last sent to the user. The messages are ordered based on
     * the order that you returned the messages from your Lambda function or the order
     * that the messages are defined in the bot.</p>
     */
    inline RecognizeTextResult& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>A list of messages last sent to the user. The messages are ordered based on
     * the order that you returned the messages from your Lambda function or the order
     * that the messages are defined in the bot.</p>
     */
    inline RecognizeTextResult& AddMessages(const Message& value) { m_messages.push_back(value); return *this; }

    /**
     * <p>A list of messages last sent to the user. The messages are ordered based on
     * the order that you returned the messages from your Lambda function or the order
     * that the messages are defined in the bot.</p>
     */
    inline RecognizeTextResult& AddMessages(Message&& value) { m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents the current state of the dialog between the user and the bot. </p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline const SessionState& GetSessionState() const{ return m_sessionState; }

    /**
     * <p>Represents the current state of the dialog between the user and the bot. </p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline void SetSessionState(const SessionState& value) { m_sessionState = value; }

    /**
     * <p>Represents the current state of the dialog between the user and the bot. </p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline void SetSessionState(SessionState&& value) { m_sessionState = std::move(value); }

    /**
     * <p>Represents the current state of the dialog between the user and the bot. </p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline RecognizeTextResult& WithSessionState(const SessionState& value) { SetSessionState(value); return *this;}

    /**
     * <p>Represents the current state of the dialog between the user and the bot. </p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline RecognizeTextResult& WithSessionState(SessionState&& value) { SetSessionState(std::move(value)); return *this;}


    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates now confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline const Aws::Vector<Interpretation>& GetInterpretations() const{ return m_interpretations; }

    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates now confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline void SetInterpretations(const Aws::Vector<Interpretation>& value) { m_interpretations = value; }

    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates now confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline void SetInterpretations(Aws::Vector<Interpretation>&& value) { m_interpretations = std::move(value); }

    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates now confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline RecognizeTextResult& WithInterpretations(const Aws::Vector<Interpretation>& value) { SetInterpretations(value); return *this;}

    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates now confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline RecognizeTextResult& WithInterpretations(Aws::Vector<Interpretation>&& value) { SetInterpretations(std::move(value)); return *this;}

    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates now confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline RecognizeTextResult& AddInterpretations(const Interpretation& value) { m_interpretations.push_back(value); return *this; }

    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates now confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline RecognizeTextResult& AddInterpretations(Interpretation&& value) { m_interpretations.push_back(std::move(value)); return *this; }


    /**
     * <p>The attributes sent in the request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const{ return m_requestAttributes; }

    /**
     * <p>The attributes sent in the request.</p>
     */
    inline void SetRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_requestAttributes = value; }

    /**
     * <p>The attributes sent in the request.</p>
     */
    inline void SetRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_requestAttributes = std::move(value); }

    /**
     * <p>The attributes sent in the request.</p>
     */
    inline RecognizeTextResult& WithRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestAttributes(value); return *this;}

    /**
     * <p>The attributes sent in the request.</p>
     */
    inline RecognizeTextResult& WithRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes sent in the request.</p>
     */
    inline RecognizeTextResult& AddRequestAttributes(const Aws::String& key, const Aws::String& value) { m_requestAttributes.emplace(key, value); return *this; }

    /**
     * <p>The attributes sent in the request.</p>
     */
    inline RecognizeTextResult& AddRequestAttributes(Aws::String&& key, const Aws::String& value) { m_requestAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attributes sent in the request.</p>
     */
    inline RecognizeTextResult& AddRequestAttributes(const Aws::String& key, Aws::String&& value) { m_requestAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attributes sent in the request.</p>
     */
    inline RecognizeTextResult& AddRequestAttributes(Aws::String&& key, Aws::String&& value) { m_requestAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The attributes sent in the request.</p>
     */
    inline RecognizeTextResult& AddRequestAttributes(const char* key, Aws::String&& value) { m_requestAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attributes sent in the request.</p>
     */
    inline RecognizeTextResult& AddRequestAttributes(Aws::String&& key, const char* value) { m_requestAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attributes sent in the request.</p>
     */
    inline RecognizeTextResult& AddRequestAttributes(const char* key, const char* value) { m_requestAttributes.emplace(key, value); return *this; }


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
    inline RecognizeTextResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline RecognizeTextResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the session in use.</p>
     */
    inline RecognizeTextResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Aws::Vector<Message> m_messages;

    SessionState m_sessionState;

    Aws::Vector<Interpretation> m_interpretations;

    Aws::Map<Aws::String, Aws::String> m_requestAttributes;

    Aws::String m_sessionId;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
