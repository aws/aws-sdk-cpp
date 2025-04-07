/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailManagedWordsType.h>
#include <aws/bedrock/model/GuardrailWordAction.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The managed word list that was configured for the guardrail. (This is a list
   * of words that are pre-defined and managed by guardrails only.)</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailManagedWords">AWS
   * API Reference</a></p>
   */
  class GuardrailManagedWords
  {
  public:
    AWS_BEDROCK_API GuardrailManagedWords() = default;
    AWS_BEDROCK_API GuardrailManagedWords(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailManagedWords& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ManagedWords$type The managed word type that was configured for the
     * guardrail. (For now, we only offer profanity word list)</p>
     */
    inline GuardrailManagedWordsType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailManagedWordsType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailManagedWords& WithType(GuardrailManagedWordsType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when harmful content is detected in the input. Supported
     * values include:</p> <ul> <li> <p> <code>BLOCK</code> – Block the content and
     * replace it with blocked messaging.</p> </li> <li> <p> <code>NONE</code> – Take
     * no action but return detection information in the trace response.</p> </li>
     * </ul>
     */
    inline GuardrailWordAction GetInputAction() const { return m_inputAction; }
    inline bool InputActionHasBeenSet() const { return m_inputActionHasBeenSet; }
    inline void SetInputAction(GuardrailWordAction value) { m_inputActionHasBeenSet = true; m_inputAction = value; }
    inline GuardrailManagedWords& WithInputAction(GuardrailWordAction value) { SetInputAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when harmful content is detected in the output. Supported
     * values include:</p> <ul> <li> <p> <code>BLOCK</code> – Block the content and
     * replace it with blocked messaging.</p> </li> <li> <p> <code>NONE</code> – Take
     * no action but return detection information in the trace response.</p> </li>
     * </ul>
     */
    inline GuardrailWordAction GetOutputAction() const { return m_outputAction; }
    inline bool OutputActionHasBeenSet() const { return m_outputActionHasBeenSet; }
    inline void SetOutputAction(GuardrailWordAction value) { m_outputActionHasBeenSet = true; m_outputAction = value; }
    inline GuardrailManagedWords& WithOutputAction(GuardrailWordAction value) { SetOutputAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether guardrail evaluation is enabled on the input. When
     * disabled, you aren't charged for the evaluation. The evaluation doesn't appear
     * in the response.</p>
     */
    inline bool GetInputEnabled() const { return m_inputEnabled; }
    inline bool InputEnabledHasBeenSet() const { return m_inputEnabledHasBeenSet; }
    inline void SetInputEnabled(bool value) { m_inputEnabledHasBeenSet = true; m_inputEnabled = value; }
    inline GuardrailManagedWords& WithInputEnabled(bool value) { SetInputEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether guardrail evaluation is enabled on the output. When
     * disabled, you aren't charged for the evaluation. The evaluation doesn't appear
     * in the response.</p>
     */
    inline bool GetOutputEnabled() const { return m_outputEnabled; }
    inline bool OutputEnabledHasBeenSet() const { return m_outputEnabledHasBeenSet; }
    inline void SetOutputEnabled(bool value) { m_outputEnabledHasBeenSet = true; m_outputEnabled = value; }
    inline GuardrailManagedWords& WithOutputEnabled(bool value) { SetOutputEnabled(value); return *this;}
    ///@}
  private:

    GuardrailManagedWordsType m_type{GuardrailManagedWordsType::NOT_SET};
    bool m_typeHasBeenSet = false;

    GuardrailWordAction m_inputAction{GuardrailWordAction::NOT_SET};
    bool m_inputActionHasBeenSet = false;

    GuardrailWordAction m_outputAction{GuardrailWordAction::NOT_SET};
    bool m_outputActionHasBeenSet = false;

    bool m_inputEnabled{false};
    bool m_inputEnabledHasBeenSet = false;

    bool m_outputEnabled{false};
    bool m_outputEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
