/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/GuardrailSensitiveInformationAction.h>
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
   * <p>The regular expression to configure for the guardrail.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailRegexConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailRegexConfig
  {
  public:
    AWS_BEDROCK_API GuardrailRegexConfig() = default;
    AWS_BEDROCK_API GuardrailRegexConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailRegexConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the regular expression to configure for the guardrail.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GuardrailRegexConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the regular expression to configure for the guardrail.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GuardrailRegexConfig& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regular expression pattern to configure for the guardrail.</p>
     */
    inline const Aws::String& GetPattern() const { return m_pattern; }
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
    template<typename PatternT = Aws::String>
    void SetPattern(PatternT&& value) { m_patternHasBeenSet = true; m_pattern = std::forward<PatternT>(value); }
    template<typename PatternT = Aws::String>
    GuardrailRegexConfig& WithPattern(PatternT&& value) { SetPattern(std::forward<PatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The guardrail action to configure when matching regular expression is
     * detected.</p>
     */
    inline GuardrailSensitiveInformationAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailSensitiveInformationAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailRegexConfig& WithAction(GuardrailSensitiveInformationAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action to take when harmful content is detected in the input.
     * Supported values include:</p> <ul> <li> <p> <code>BLOCK</code> – Block the
     * content and replace it with blocked messaging.</p> </li> <li> <p>
     * <code>NONE</code> – Take no action but return detection information in the trace
     * response.</p> </li> </ul>
     */
    inline GuardrailSensitiveInformationAction GetInputAction() const { return m_inputAction; }
    inline bool InputActionHasBeenSet() const { return m_inputActionHasBeenSet; }
    inline void SetInputAction(GuardrailSensitiveInformationAction value) { m_inputActionHasBeenSet = true; m_inputAction = value; }
    inline GuardrailRegexConfig& WithInputAction(GuardrailSensitiveInformationAction value) { SetInputAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action to take when harmful content is detected in the output.
     * Supported values include:</p> <ul> <li> <p> <code>BLOCK</code> – Block the
     * content and replace it with blocked messaging.</p> </li> <li> <p>
     * <code>NONE</code> – Take no action but return detection information in the trace
     * response.</p> </li> </ul>
     */
    inline GuardrailSensitiveInformationAction GetOutputAction() const { return m_outputAction; }
    inline bool OutputActionHasBeenSet() const { return m_outputActionHasBeenSet; }
    inline void SetOutputAction(GuardrailSensitiveInformationAction value) { m_outputActionHasBeenSet = true; m_outputAction = value; }
    inline GuardrailRegexConfig& WithOutputAction(GuardrailSensitiveInformationAction value) { SetOutputAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable guardrail evaluation on the input. When disabled,
     * you aren't charged for the evaluation. The evaluation doesn't appear in the
     * response.</p>
     */
    inline bool GetInputEnabled() const { return m_inputEnabled; }
    inline bool InputEnabledHasBeenSet() const { return m_inputEnabledHasBeenSet; }
    inline void SetInputEnabled(bool value) { m_inputEnabledHasBeenSet = true; m_inputEnabled = value; }
    inline GuardrailRegexConfig& WithInputEnabled(bool value) { SetInputEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable guardrail evaluation on the output. When
     * disabled, you aren't charged for the evaluation. The evaluation doesn't appear
     * in the response.</p>
     */
    inline bool GetOutputEnabled() const { return m_outputEnabled; }
    inline bool OutputEnabledHasBeenSet() const { return m_outputEnabledHasBeenSet; }
    inline void SetOutputEnabled(bool value) { m_outputEnabledHasBeenSet = true; m_outputEnabled = value; }
    inline GuardrailRegexConfig& WithOutputEnabled(bool value) { SetOutputEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;

    GuardrailSensitiveInformationAction m_action{GuardrailSensitiveInformationAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    GuardrailSensitiveInformationAction m_inputAction{GuardrailSensitiveInformationAction::NOT_SET};
    bool m_inputActionHasBeenSet = false;

    GuardrailSensitiveInformationAction m_outputAction{GuardrailSensitiveInformationAction::NOT_SET};
    bool m_outputActionHasBeenSet = false;

    bool m_inputEnabled{false};
    bool m_inputEnabledHasBeenSet = false;

    bool m_outputEnabled{false};
    bool m_outputEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
