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
#include <aws/lexv2-runtime/model/RecognizedBotMember.h>
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
    AWS_LEXRUNTIMEV2_API RecognizeTextResult() = default;
    AWS_LEXRUNTIMEV2_API RecognizeTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXRUNTIMEV2_API RecognizeTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of messages last sent to the user. The messages are ordered based on
     * the order that you returned the messages from your Lambda function or the order
     * that the messages are defined in the bot.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const { return m_messages; }
    template<typename MessagesT = Aws::Vector<Message>>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::Vector<Message>>
    RecognizeTextResult& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    template<typename MessagesT = Message>
    RecognizeTextResult& AddMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages.emplace_back(std::forward<MessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the current state of the dialog between the user and the bot. </p>
     * <p>Use this to determine the progress of the conversation and what the next
     * action may be.</p>
     */
    inline const SessionState& GetSessionState() const { return m_sessionState; }
    template<typename SessionStateT = SessionState>
    void SetSessionState(SessionStateT&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::forward<SessionStateT>(value); }
    template<typename SessionStateT = SessionState>
    RecognizeTextResult& WithSessionState(SessionStateT&& value) { SetSessionState(std::forward<SessionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance. </p> <p>Each interpretation includes the intent, a score that
     * indicates now confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline const Aws::Vector<Interpretation>& GetInterpretations() const { return m_interpretations; }
    template<typename InterpretationsT = Aws::Vector<Interpretation>>
    void SetInterpretations(InterpretationsT&& value) { m_interpretationsHasBeenSet = true; m_interpretations = std::forward<InterpretationsT>(value); }
    template<typename InterpretationsT = Aws::Vector<Interpretation>>
    RecognizeTextResult& WithInterpretations(InterpretationsT&& value) { SetInterpretations(std::forward<InterpretationsT>(value)); return *this;}
    template<typename InterpretationsT = Interpretation>
    RecognizeTextResult& AddInterpretations(InterpretationsT&& value) { m_interpretationsHasBeenSet = true; m_interpretations.emplace_back(std::forward<InterpretationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes sent in the request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const { return m_requestAttributes; }
    template<typename RequestAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestAttributes(RequestAttributesT&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::forward<RequestAttributesT>(value); }
    template<typename RequestAttributesT = Aws::Map<Aws::String, Aws::String>>
    RecognizeTextResult& WithRequestAttributes(RequestAttributesT&& value) { SetRequestAttributes(std::forward<RequestAttributesT>(value)); return *this;}
    template<typename RequestAttributesKeyT = Aws::String, typename RequestAttributesValueT = Aws::String>
    RecognizeTextResult& AddRequestAttributes(RequestAttributesKeyT&& key, RequestAttributesValueT&& value) {
      m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::forward<RequestAttributesKeyT>(key), std::forward<RequestAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The identifier of the session in use.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    RecognizeTextResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot member that recognized the text.</p>
     */
    inline const RecognizedBotMember& GetRecognizedBotMember() const { return m_recognizedBotMember; }
    template<typename RecognizedBotMemberT = RecognizedBotMember>
    void SetRecognizedBotMember(RecognizedBotMemberT&& value) { m_recognizedBotMemberHasBeenSet = true; m_recognizedBotMember = std::forward<RecognizedBotMemberT>(value); }
    template<typename RecognizedBotMemberT = RecognizedBotMember>
    RecognizeTextResult& WithRecognizedBotMember(RecognizedBotMemberT&& value) { SetRecognizedBotMember(std::forward<RecognizedBotMemberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RecognizeTextResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet = false;

    SessionState m_sessionState;
    bool m_sessionStateHasBeenSet = false;

    Aws::Vector<Interpretation> m_interpretations;
    bool m_interpretationsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestAttributes;
    bool m_requestAttributesHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    RecognizedBotMember m_recognizedBotMember;
    bool m_recognizedBotMemberHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
