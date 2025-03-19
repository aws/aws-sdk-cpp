/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/DialogAction.h>
#include <aws/lexv2-runtime/model/Intent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-runtime/model/RuntimeHints.h>
#include <aws/lexv2-runtime/model/ActiveContext.h>
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
   * <p>The state of the user's session with Amazon Lex V2.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/SessionState">AWS
   * API Reference</a></p>
   */
  class SessionState
  {
  public:
    AWS_LEXRUNTIMEV2_API SessionState() = default;
    AWS_LEXRUNTIMEV2_API SessionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API SessionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The next step that Amazon Lex V2 should take in the conversation with a
     * user.</p>
     */
    inline const DialogAction& GetDialogAction() const { return m_dialogAction; }
    inline bool DialogActionHasBeenSet() const { return m_dialogActionHasBeenSet; }
    template<typename DialogActionT = DialogAction>
    void SetDialogAction(DialogActionT&& value) { m_dialogActionHasBeenSet = true; m_dialogAction = std::forward<DialogActionT>(value); }
    template<typename DialogActionT = DialogAction>
    SessionState& WithDialogAction(DialogActionT&& value) { SetDialogAction(std::forward<DialogActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The active intent that Amazon Lex V2 is processing.</p>
     */
    inline const Intent& GetIntent() const { return m_intent; }
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
    template<typename IntentT = Intent>
    void SetIntent(IntentT&& value) { m_intentHasBeenSet = true; m_intent = std::forward<IntentT>(value); }
    template<typename IntentT = Intent>
    SessionState& WithIntent(IntentT&& value) { SetIntent(std::forward<IntentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more contexts that indicate to Amazon Lex V2 the context of a request.
     * When a context is active, Amazon Lex V2 considers intents with the matching
     * context as a trigger as the next intent in a session.</p>
     */
    inline const Aws::Vector<ActiveContext>& GetActiveContexts() const { return m_activeContexts; }
    inline bool ActiveContextsHasBeenSet() const { return m_activeContextsHasBeenSet; }
    template<typename ActiveContextsT = Aws::Vector<ActiveContext>>
    void SetActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::forward<ActiveContextsT>(value); }
    template<typename ActiveContextsT = Aws::Vector<ActiveContext>>
    SessionState& WithActiveContexts(ActiveContextsT&& value) { SetActiveContexts(std::forward<ActiveContextsT>(value)); return *this;}
    template<typename ActiveContextsT = ActiveContext>
    SessionState& AddActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts.emplace_back(std::forward<ActiveContextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const { return m_sessionAttributes; }
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetSessionAttributes(SessionAttributesT&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::forward<SessionAttributesT>(value); }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    SessionState& WithSessionAttributes(SessionAttributesT&& value) { SetSessionAttributes(std::forward<SessionAttributesT>(value)); return *this;}
    template<typename SessionAttributesKeyT = Aws::String, typename SessionAttributesValueT = Aws::String>
    SessionState& AddSessionAttributes(SessionAttributesKeyT&& key, SessionAttributesValueT&& value) {
      m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::forward<SessionAttributesKeyT>(key), std::forward<SessionAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a specific request.</p>
     */
    inline const Aws::String& GetOriginatingRequestId() const { return m_originatingRequestId; }
    inline bool OriginatingRequestIdHasBeenSet() const { return m_originatingRequestIdHasBeenSet; }
    template<typename OriginatingRequestIdT = Aws::String>
    void SetOriginatingRequestId(OriginatingRequestIdT&& value) { m_originatingRequestIdHasBeenSet = true; m_originatingRequestId = std::forward<OriginatingRequestIdT>(value); }
    template<typename OriginatingRequestIdT = Aws::String>
    SessionState& WithOriginatingRequestId(OriginatingRequestIdT&& value) { SetOriginatingRequestId(std::forward<OriginatingRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hints for phrases that a customer is likely to use for a slot. Amazon Lex V2
     * uses the hints to help determine the correct value of a slot.</p>
     */
    inline const RuntimeHints& GetRuntimeHints() const { return m_runtimeHints; }
    inline bool RuntimeHintsHasBeenSet() const { return m_runtimeHintsHasBeenSet; }
    template<typename RuntimeHintsT = RuntimeHints>
    void SetRuntimeHints(RuntimeHintsT&& value) { m_runtimeHintsHasBeenSet = true; m_runtimeHints = std::forward<RuntimeHintsT>(value); }
    template<typename RuntimeHintsT = RuntimeHints>
    SessionState& WithRuntimeHints(RuntimeHintsT&& value) { SetRuntimeHints(std::forward<RuntimeHintsT>(value)); return *this;}
    ///@}
  private:

    DialogAction m_dialogAction;
    bool m_dialogActionHasBeenSet = false;

    Intent m_intent;
    bool m_intentHasBeenSet = false;

    Aws::Vector<ActiveContext> m_activeContexts;
    bool m_activeContextsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;

    Aws::String m_originatingRequestId;
    bool m_originatingRequestIdHasBeenSet = false;

    RuntimeHints m_runtimeHints;
    bool m_runtimeHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
