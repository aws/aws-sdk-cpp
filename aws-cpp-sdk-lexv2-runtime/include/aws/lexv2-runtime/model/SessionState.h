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
    AWS_LEXRUNTIMEV2_API SessionState();
    AWS_LEXRUNTIMEV2_API SessionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API SessionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The next step that Amazon Lex V2 should take in the conversation with a
     * user.</p>
     */
    inline const DialogAction& GetDialogAction() const{ return m_dialogAction; }

    /**
     * <p>The next step that Amazon Lex V2 should take in the conversation with a
     * user.</p>
     */
    inline bool DialogActionHasBeenSet() const { return m_dialogActionHasBeenSet; }

    /**
     * <p>The next step that Amazon Lex V2 should take in the conversation with a
     * user.</p>
     */
    inline void SetDialogAction(const DialogAction& value) { m_dialogActionHasBeenSet = true; m_dialogAction = value; }

    /**
     * <p>The next step that Amazon Lex V2 should take in the conversation with a
     * user.</p>
     */
    inline void SetDialogAction(DialogAction&& value) { m_dialogActionHasBeenSet = true; m_dialogAction = std::move(value); }

    /**
     * <p>The next step that Amazon Lex V2 should take in the conversation with a
     * user.</p>
     */
    inline SessionState& WithDialogAction(const DialogAction& value) { SetDialogAction(value); return *this;}

    /**
     * <p>The next step that Amazon Lex V2 should take in the conversation with a
     * user.</p>
     */
    inline SessionState& WithDialogAction(DialogAction&& value) { SetDialogAction(std::move(value)); return *this;}


    /**
     * <p>The active intent that Amazon Lex V2 is processing.</p>
     */
    inline const Intent& GetIntent() const{ return m_intent; }

    /**
     * <p>The active intent that Amazon Lex V2 is processing.</p>
     */
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }

    /**
     * <p>The active intent that Amazon Lex V2 is processing.</p>
     */
    inline void SetIntent(const Intent& value) { m_intentHasBeenSet = true; m_intent = value; }

    /**
     * <p>The active intent that Amazon Lex V2 is processing.</p>
     */
    inline void SetIntent(Intent&& value) { m_intentHasBeenSet = true; m_intent = std::move(value); }

    /**
     * <p>The active intent that Amazon Lex V2 is processing.</p>
     */
    inline SessionState& WithIntent(const Intent& value) { SetIntent(value); return *this;}

    /**
     * <p>The active intent that Amazon Lex V2 is processing.</p>
     */
    inline SessionState& WithIntent(Intent&& value) { SetIntent(std::move(value)); return *this;}


    /**
     * <p>One or more contexts that indicate to Amazon Lex V2 the context of a request.
     * When a context is active, Amazon Lex V2 considers intents with the matching
     * context as a trigger as the next intent in a session.</p>
     */
    inline const Aws::Vector<ActiveContext>& GetActiveContexts() const{ return m_activeContexts; }

    /**
     * <p>One or more contexts that indicate to Amazon Lex V2 the context of a request.
     * When a context is active, Amazon Lex V2 considers intents with the matching
     * context as a trigger as the next intent in a session.</p>
     */
    inline bool ActiveContextsHasBeenSet() const { return m_activeContextsHasBeenSet; }

    /**
     * <p>One or more contexts that indicate to Amazon Lex V2 the context of a request.
     * When a context is active, Amazon Lex V2 considers intents with the matching
     * context as a trigger as the next intent in a session.</p>
     */
    inline void SetActiveContexts(const Aws::Vector<ActiveContext>& value) { m_activeContextsHasBeenSet = true; m_activeContexts = value; }

    /**
     * <p>One or more contexts that indicate to Amazon Lex V2 the context of a request.
     * When a context is active, Amazon Lex V2 considers intents with the matching
     * context as a trigger as the next intent in a session.</p>
     */
    inline void SetActiveContexts(Aws::Vector<ActiveContext>&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::move(value); }

    /**
     * <p>One or more contexts that indicate to Amazon Lex V2 the context of a request.
     * When a context is active, Amazon Lex V2 considers intents with the matching
     * context as a trigger as the next intent in a session.</p>
     */
    inline SessionState& WithActiveContexts(const Aws::Vector<ActiveContext>& value) { SetActiveContexts(value); return *this;}

    /**
     * <p>One or more contexts that indicate to Amazon Lex V2 the context of a request.
     * When a context is active, Amazon Lex V2 considers intents with the matching
     * context as a trigger as the next intent in a session.</p>
     */
    inline SessionState& WithActiveContexts(Aws::Vector<ActiveContext>&& value) { SetActiveContexts(std::move(value)); return *this;}

    /**
     * <p>One or more contexts that indicate to Amazon Lex V2 the context of a request.
     * When a context is active, Amazon Lex V2 considers intents with the matching
     * context as a trigger as the next intent in a session.</p>
     */
    inline SessionState& AddActiveContexts(const ActiveContext& value) { m_activeContextsHasBeenSet = true; m_activeContexts.push_back(value); return *this; }

    /**
     * <p>One or more contexts that indicate to Amazon Lex V2 the context of a request.
     * When a context is active, Amazon Lex V2 considers intents with the matching
     * context as a trigger as the next intent in a session.</p>
     */
    inline SessionState& AddActiveContexts(ActiveContext&& value) { m_activeContextsHasBeenSet = true; m_activeContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::move(value); }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline SessionState& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline SessionState& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline SessionState& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline SessionState& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline SessionState& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline SessionState& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline SessionState& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline SessionState& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex V2 and a client
     * application.</p>
     */
    inline SessionState& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }


    /**
     * <p>A unique identifier for a specific request.</p>
     */
    inline const Aws::String& GetOriginatingRequestId() const{ return m_originatingRequestId; }

    /**
     * <p>A unique identifier for a specific request.</p>
     */
    inline bool OriginatingRequestIdHasBeenSet() const { return m_originatingRequestIdHasBeenSet; }

    /**
     * <p>A unique identifier for a specific request.</p>
     */
    inline void SetOriginatingRequestId(const Aws::String& value) { m_originatingRequestIdHasBeenSet = true; m_originatingRequestId = value; }

    /**
     * <p>A unique identifier for a specific request.</p>
     */
    inline void SetOriginatingRequestId(Aws::String&& value) { m_originatingRequestIdHasBeenSet = true; m_originatingRequestId = std::move(value); }

    /**
     * <p>A unique identifier for a specific request.</p>
     */
    inline void SetOriginatingRequestId(const char* value) { m_originatingRequestIdHasBeenSet = true; m_originatingRequestId.assign(value); }

    /**
     * <p>A unique identifier for a specific request.</p>
     */
    inline SessionState& WithOriginatingRequestId(const Aws::String& value) { SetOriginatingRequestId(value); return *this;}

    /**
     * <p>A unique identifier for a specific request.</p>
     */
    inline SessionState& WithOriginatingRequestId(Aws::String&& value) { SetOriginatingRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a specific request.</p>
     */
    inline SessionState& WithOriginatingRequestId(const char* value) { SetOriginatingRequestId(value); return *this;}


    /**
     * <p>Hints for phrases that a customer is likely to use for a slot. Amazon Lex V2
     * uses the hints to help determine the correct value of a slot.</p>
     */
    inline const RuntimeHints& GetRuntimeHints() const{ return m_runtimeHints; }

    /**
     * <p>Hints for phrases that a customer is likely to use for a slot. Amazon Lex V2
     * uses the hints to help determine the correct value of a slot.</p>
     */
    inline bool RuntimeHintsHasBeenSet() const { return m_runtimeHintsHasBeenSet; }

    /**
     * <p>Hints for phrases that a customer is likely to use for a slot. Amazon Lex V2
     * uses the hints to help determine the correct value of a slot.</p>
     */
    inline void SetRuntimeHints(const RuntimeHints& value) { m_runtimeHintsHasBeenSet = true; m_runtimeHints = value; }

    /**
     * <p>Hints for phrases that a customer is likely to use for a slot. Amazon Lex V2
     * uses the hints to help determine the correct value of a slot.</p>
     */
    inline void SetRuntimeHints(RuntimeHints&& value) { m_runtimeHintsHasBeenSet = true; m_runtimeHints = std::move(value); }

    /**
     * <p>Hints for phrases that a customer is likely to use for a slot. Amazon Lex V2
     * uses the hints to help determine the correct value of a slot.</p>
     */
    inline SessionState& WithRuntimeHints(const RuntimeHints& value) { SetRuntimeHints(value); return *this;}

    /**
     * <p>Hints for phrases that a customer is likely to use for a slot. Amazon Lex V2
     * uses the hints to help determine the correct value of a slot.</p>
     */
    inline SessionState& WithRuntimeHints(RuntimeHints&& value) { SetRuntimeHints(std::move(value)); return *this;}

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
