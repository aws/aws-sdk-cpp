﻿/**
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
    AWS_LEXRUNTIMEV2_API IntentResultEvent();
    AWS_LEXRUNTIMEV2_API IntentResultEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API IntentResultEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the input to the operation was text, speech, or from a
     * touch-tone keypad.</p>
     */
    inline const InputMode& GetInputMode() const{ return m_inputMode; }
    inline bool InputModeHasBeenSet() const { return m_inputModeHasBeenSet; }
    inline void SetInputMode(const InputMode& value) { m_inputModeHasBeenSet = true; m_inputMode = value; }
    inline void SetInputMode(InputMode&& value) { m_inputModeHasBeenSet = true; m_inputMode = std::move(value); }
    inline IntentResultEvent& WithInputMode(const InputMode& value) { SetInputMode(value); return *this;}
    inline IntentResultEvent& WithInputMode(InputMode&& value) { SetInputMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of intents that Amazon Lex V2 determined might satisfy the user's
     * utterance.</p> <p>Each interpretation includes the intent, a score that
     * indicates how confident Amazon Lex V2 is that the interpretation is the correct
     * one, and an optional sentiment response that indicates the sentiment expressed
     * in the utterance.</p>
     */
    inline const Aws::Vector<Interpretation>& GetInterpretations() const{ return m_interpretations; }
    inline bool InterpretationsHasBeenSet() const { return m_interpretationsHasBeenSet; }
    inline void SetInterpretations(const Aws::Vector<Interpretation>& value) { m_interpretationsHasBeenSet = true; m_interpretations = value; }
    inline void SetInterpretations(Aws::Vector<Interpretation>&& value) { m_interpretationsHasBeenSet = true; m_interpretations = std::move(value); }
    inline IntentResultEvent& WithInterpretations(const Aws::Vector<Interpretation>& value) { SetInterpretations(value); return *this;}
    inline IntentResultEvent& WithInterpretations(Aws::Vector<Interpretation>&& value) { SetInterpretations(std::move(value)); return *this;}
    inline IntentResultEvent& AddInterpretations(const Interpretation& value) { m_interpretationsHasBeenSet = true; m_interpretations.push_back(value); return *this; }
    inline IntentResultEvent& AddInterpretations(Interpretation&& value) { m_interpretationsHasBeenSet = true; m_interpretations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const SessionState& GetSessionState() const{ return m_sessionState; }
    inline bool SessionStateHasBeenSet() const { return m_sessionStateHasBeenSet; }
    inline void SetSessionState(const SessionState& value) { m_sessionStateHasBeenSet = true; m_sessionState = value; }
    inline void SetSessionState(SessionState&& value) { m_sessionStateHasBeenSet = true; m_sessionState = std::move(value); }
    inline IntentResultEvent& WithSessionState(const SessionState& value) { SetSessionState(value); return *this;}
    inline IntentResultEvent& WithSessionState(SessionState&& value) { SetSessionState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes sent in the request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const{ return m_requestAttributes; }
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }
    inline void SetRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = value; }
    inline void SetRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::move(value); }
    inline IntentResultEvent& WithRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestAttributes(value); return *this;}
    inline IntentResultEvent& WithRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestAttributes(std::move(value)); return *this;}
    inline IntentResultEvent& AddRequestAttributes(const Aws::String& key, const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, value); return *this; }
    inline IntentResultEvent& AddRequestAttributes(Aws::String&& key, const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), value); return *this; }
    inline IntentResultEvent& AddRequestAttributes(const Aws::String& key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, std::move(value)); return *this; }
    inline IntentResultEvent& AddRequestAttributes(Aws::String&& key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline IntentResultEvent& AddRequestAttributes(const char* key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, std::move(value)); return *this; }
    inline IntentResultEvent& AddRequestAttributes(Aws::String&& key, const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), value); return *this; }
    inline IntentResultEvent& AddRequestAttributes(const char* key, const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the session in use.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline IntentResultEvent& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline IntentResultEvent& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline IntentResultEvent& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }
    inline IntentResultEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline IntentResultEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline IntentResultEvent& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot member that is processing the intent.</p>
     */
    inline const RecognizedBotMember& GetRecognizedBotMember() const{ return m_recognizedBotMember; }
    inline bool RecognizedBotMemberHasBeenSet() const { return m_recognizedBotMemberHasBeenSet; }
    inline void SetRecognizedBotMember(const RecognizedBotMember& value) { m_recognizedBotMemberHasBeenSet = true; m_recognizedBotMember = value; }
    inline void SetRecognizedBotMember(RecognizedBotMember&& value) { m_recognizedBotMemberHasBeenSet = true; m_recognizedBotMember = std::move(value); }
    inline IntentResultEvent& WithRecognizedBotMember(const RecognizedBotMember& value) { SetRecognizedBotMember(value); return *this;}
    inline IntentResultEvent& WithRecognizedBotMember(RecognizedBotMember&& value) { SetRecognizedBotMember(std::move(value)); return *this;}
    ///@}
  private:

    InputMode m_inputMode;
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
