/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-runtime/model/SessionState.h>
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
  class GetSessionResult
  {
  public:
    AWS_LEXRUNTIMEV2_API GetSessionResult();
    AWS_LEXRUNTIMEV2_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXRUNTIMEV2_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the returned session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The identifier of the returned session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>The identifier of the returned session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>The identifier of the returned session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>The identifier of the returned session.</p>
     */
    inline GetSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the returned session.</p>
     */
    inline GetSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the returned session.</p>
     */
    inline GetSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that your returned the messages from your Lambda function or
     * the order that messages are defined in the bot. </p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that your returned the messages from your Lambda function or
     * the order that messages are defined in the bot. </p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messages = value; }

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that your returned the messages from your Lambda function or
     * the order that messages are defined in the bot. </p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messages = std::move(value); }

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that your returned the messages from your Lambda function or
     * the order that messages are defined in the bot. </p>
     */
    inline GetSessionResult& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that your returned the messages from your Lambda function or
     * the order that messages are defined in the bot. </p>
     */
    inline GetSessionResult& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that your returned the messages from your Lambda function or
     * the order that messages are defined in the bot. </p>
     */
    inline GetSessionResult& AddMessages(const Message& value) { m_messages.push_back(value); return *this; }

    /**
     * <p>A list of messages that were last sent to the user. The messages are ordered
     * based on the order that your returned the messages from your Lambda function or
     * the order that messages are defined in the bot. </p>
     */
    inline GetSessionResult& AddMessages(Message&& value) { m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates how confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline const Aws::Vector<Interpretation>& GetInterpretations() const{ return m_interpretations; }

    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates how confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline void SetInterpretations(const Aws::Vector<Interpretation>& value) { m_interpretations = value; }

    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates how confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline void SetInterpretations(Aws::Vector<Interpretation>&& value) { m_interpretations = std::move(value); }

    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates how confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline GetSessionResult& WithInterpretations(const Aws::Vector<Interpretation>& value) { SetInterpretations(value); return *this;}

    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates how confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline GetSessionResult& WithInterpretations(Aws::Vector<Interpretation>&& value) { SetInterpretations(std::move(value)); return *this;}

    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates how confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline GetSessionResult& AddInterpretations(const Interpretation& value) { m_interpretations.push_back(value); return *this; }

    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates how confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline GetSessionResult& AddInterpretations(Interpretation&& value) { m_interpretations.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>You can use this to determine the progress of the conversation and what the
     * next action might be.</p>
     */
    inline const SessionState& GetSessionState() const{ return m_sessionState; }

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>You can use this to determine the progress of the conversation and what the
     * next action might be.</p>
     */
    inline void SetSessionState(const SessionState& value) { m_sessionState = value; }

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>You can use this to determine the progress of the conversation and what the
     * next action might be.</p>
     */
    inline void SetSessionState(SessionState&& value) { m_sessionState = std::move(value); }

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>You can use this to determine the progress of the conversation and what the
     * next action might be.</p>
     */
    inline GetSessionResult& WithSessionState(const SessionState& value) { SetSessionState(value); return *this;}

    /**
     * <p>Represents the current state of the dialog between the user and the bot.</p>
     * <p>You can use this to determine the progress of the conversation and what the
     * next action might be.</p>
     */
    inline GetSessionResult& WithSessionState(SessionState&& value) { SetSessionState(std::move(value)); return *this;}

  private:

    Aws::String m_sessionId;

    Aws::Vector<Message> m_messages;

    Aws::Vector<Interpretation> m_interpretations;

    SessionState m_sessionState;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
