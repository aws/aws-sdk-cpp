/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/InputMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-runtime/model/SessionState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-runtime/model/RecognizedBotMember.h>
#include <aws/lexv2-runtime/model/Interpretation.h>
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
   * <p>Contains the current state of the conversation between the client application
   * and Amazon Lex V2.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/IntentResultEvent">AWS
   * API Reference</a></p>
   */
  class IntentResultEvent
  {
  public:
    AWS_LEXRUNTIMEV2_API IntentResultEvent() = default;
    AWS_LEXRUNTIMEV2_API IntentResultEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API IntentResultEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the input to the operation was text, speech, or from a
     * touch-tone keypad.</p>
     */
    inline InputMode GetInputMode() const { return m_inputMode; }
    inline bool InputModeHasBeenSet() const { return m_inputModeHasBeenSet; }
    inline void SetInputMode(InputMode value) { m_inputModeHasBeenSet = true; m_inputMode = value; }
    inline IntentResultEvent& WithInputMode(InputMode value) { SetInputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance.</p> <p>Each interpretation includes the intent, a score that
     * indicates how confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline const Aws::Vector<Interpretation>& GetInterpretations() const { return m_interpretations; }
    inline bool InterpretationsHasBeenSet() const { return m_interpretationsHasBeenSet; }
    template<typename InterpretationsT = Aws::Vector<Interpretation>>
    void SetInterpretations(InterpretationsT&& value) { m_interpretationsHasBeenSet = true; m_interpretations = std::forward<InterpretationsT>(value); }
    template<typename InterpretationsT = Aws::Vector<Interpretation>>
    IntentResultEvent& WithInterpretations(InterpretationsT&& value) { SetInterpretations(std::forward<InterpretationsT>(value)); return *this;}
    template<typename InterpretationsT = Interpretation>
    IntentResultEvent& AddInterpretations(InterpretationsT&& value) { m_interpretationsHasBeenSet = true; m_interpretations.emplace_back(std::forward<InterpretationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const SessionState& GetSessionState() const { return m_sessionState; }
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }
    template<typename SessionStateT = SessionState>
    void SetSessionState(SessionStateT&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::forward<SessionStateT>(value); }
    template<typename SessionStateT = SessionState>
    IntentResultEvent& WithSessionState(SessionStateT&& value) { SetSessionState(std::forward<SessionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes sent in the request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const { return m_requestAttributes; }
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }
    template<typename RequestAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestAttributes(RequestAttributesT&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::forward<RequestAttributesT>(value); }
    template<typename RequestAttributesT = Aws::Map<Aws::String, Aws::String>>
    IntentResultEvent& WithRequestAttributes(RequestAttributesT&& value) { SetRequestAttributes(std::forward<RequestAttributesT>(value)); return *this;}
    template<typename RequestAttributesKeyT = Aws::String, typename RequestAttributesValueT = Aws::String>
    IntentResultEvent& AddRequestAttributes(RequestAttributesKeyT&& key, RequestAttributesValueT&& value) {
      m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::forward<RequestAttributesKeyT>(key), std::forward<RequestAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The identifier of the session in use.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    IntentResultEvent& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    IntentResultEvent& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot member that is processing the intent.</p>
     */
    inline const RecognizedBotMember& GetRecognizedBotMember() const { return m_recognizedBotMember; }
    inline bool RecognizedBotMemberHasBeenSet() const { return m_recognizedBotMemberHasBeenSet; }
    template<typename RecognizedBotMemberT = RecognizedBotMember>
    void SetRecognizedBotMember(RecognizedBotMemberT&& value) { m_recognizedBotMemberHasBeenSet = true; m_recognizedBotMember = std::forward<RecognizedBotMemberT>(value); }
    template<typename RecognizedBotMemberT = RecognizedBotMember>
    IntentResultEvent& WithRecognizedBotMember(RecognizedBotMemberT&& value) { SetRecognizedBotMember(std::forward<RecognizedBotMemberT>(value)); return *this;}
    ///@}
  private:

    InputMode m_inputMode{InputMode::NOT_SET};
    bool m_inputModeHasBeenSet = false;

    Aws::Vector<Interpretation> m_interpretations;
    bool m_interpretationsHasBeenSet = false;

    SessionState m_sessionState;
    bool m_sessionStateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestAttributes;
    bool m_requestAttributesHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    RecognizedBotMember m_recognizedBotMember;
    bool m_recognizedBotMemberHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
