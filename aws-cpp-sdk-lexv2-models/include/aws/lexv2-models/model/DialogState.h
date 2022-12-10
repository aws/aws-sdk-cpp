/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/DialogAction.h>
#include <aws/lexv2-models/model/IntentOverride.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The current state of the conversation with the user.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DialogState">AWS
   * API Reference</a></p>
   */
  class DialogState
  {
  public:
    AWS_LEXMODELSV2_API DialogState();
    AWS_LEXMODELSV2_API DialogState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API DialogState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const DialogAction& GetDialogAction() const{ return m_dialogAction; }

    
    inline bool DialogActionHasBeenSet() const { return m_dialogActionHasBeenSet; }

    
    inline void SetDialogAction(const DialogAction& value) { m_dialogActionHasBeenSet = true; m_dialogAction = value; }

    
    inline void SetDialogAction(DialogAction&& value) { m_dialogActionHasBeenSet = true; m_dialogAction = std::move(value); }

    
    inline DialogState& WithDialogAction(const DialogAction& value) { SetDialogAction(value); return *this;}

    
    inline DialogState& WithDialogAction(DialogAction&& value) { SetDialogAction(std::move(value)); return *this;}


    
    inline const IntentOverride& GetIntent() const{ return m_intent; }

    
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }

    
    inline void SetIntent(const IntentOverride& value) { m_intentHasBeenSet = true; m_intent = value; }

    
    inline void SetIntent(IntentOverride&& value) { m_intentHasBeenSet = true; m_intent = std::move(value); }

    
    inline DialogState& WithIntent(const IntentOverride& value) { SetIntent(value); return *this;}

    
    inline DialogState& WithIntent(IntentOverride&& value) { SetIntent(std::move(value)); return *this;}


    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::move(value); }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline DialogState& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline DialogState& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline DialogState& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline DialogState& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline DialogState& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline DialogState& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline DialogState& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline DialogState& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline DialogState& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }

  private:

    DialogAction m_dialogAction;
    bool m_dialogActionHasBeenSet = false;

    IntentOverride m_intent;
    bool m_intentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
