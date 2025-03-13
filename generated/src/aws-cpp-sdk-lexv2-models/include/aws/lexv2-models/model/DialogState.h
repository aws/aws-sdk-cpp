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
    AWS_LEXMODELSV2_API DialogState() = default;
    AWS_LEXMODELSV2_API DialogState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API DialogState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DialogAction& GetDialogAction() const { return m_dialogAction; }
    inline bool DialogActionHasBeenSet() const { return m_dialogActionHasBeenSet; }
    template<typename DialogActionT = DialogAction>
    void SetDialogAction(DialogActionT&& value) { m_dialogActionHasBeenSet = true; m_dialogAction = std::forward<DialogActionT>(value); }
    template<typename DialogActionT = DialogAction>
    DialogState& WithDialogAction(DialogActionT&& value) { SetDialogAction(std::forward<DialogActionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IntentOverride& GetIntent() const { return m_intent; }
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
    template<typename IntentT = IntentOverride>
    void SetIntent(IntentT&& value) { m_intentHasBeenSet = true; m_intent = std::forward<IntentT>(value); }
    template<typename IntentT = IntentOverride>
    DialogState& WithIntent(IntentT&& value) { SetIntent(std::forward<IntentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map of key/value pairs representing session-specific context information. It
     * contains application information passed between Amazon Lex and a client
     * application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const { return m_sessionAttributes; }
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetSessionAttributes(SessionAttributesT&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::forward<SessionAttributesT>(value); }
    template<typename SessionAttributesT = Aws::Map<Aws::String, Aws::String>>
    DialogState& WithSessionAttributes(SessionAttributesT&& value) { SetSessionAttributes(std::forward<SessionAttributesT>(value)); return *this;}
    template<typename SessionAttributesKeyT = Aws::String, typename SessionAttributesValueT = Aws::String>
    DialogState& AddSessionAttributes(SessionAttributesKeyT&& key, SessionAttributesValueT&& value) {
      m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::forward<SessionAttributesKeyT>(key), std::forward<SessionAttributesValueT>(value)); return *this;
    }
    ///@}
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
