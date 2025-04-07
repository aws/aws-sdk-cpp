/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailContentFilterType.h>
#include <aws/bedrock/model/GuardrailFilterStrength.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/GuardrailContentFilterAction.h>
#include <aws/bedrock/model/GuardrailModality.h>
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
   * <p>Contains filter strengths for harmful content. Guardrails support the
   * following content filters to detect and filter harmful user inputs and
   * FM-generated outputs.</p> <ul> <li> <p> <b>Hate</b> – Describes language or a
   * statement that discriminates, criticizes, insults, denounces, or dehumanizes a
   * person or group on the basis of an identity (such as race, ethnicity, gender,
   * religion, sexual orientation, ability, and national origin).</p> </li> <li> <p>
   * <b>Insults</b> – Describes language or a statement that includes demeaning,
   * humiliating, mocking, insulting, or belittling language. This type of language
   * is also labeled as bullying.</p> </li> <li> <p> <b>Sexual</b> – Describes
   * language or a statement that indicates sexual interest, activity, or arousal
   * using direct or indirect references to body parts, physical traits, or sex.</p>
   * </li> <li> <p> <b>Violence</b> – Describes language or a statement that includes
   * glorification of or threats to inflict physical pain, hurt, or injury toward a
   * person, group or thing.</p> </li> </ul> <p>Content filtering depends on the
   * confidence classification of user inputs and FM responses across each of the
   * four harmful categories. All input and output statements are classified into one
   * of four confidence levels (NONE, LOW, MEDIUM, HIGH) for each harmful category.
   * For example, if a statement is classified as <i>Hate</i> with HIGH confidence,
   * the likelihood of the statement representing hateful content is high. A single
   * statement can be classified across multiple categories with varying confidence
   * levels. For example, a single statement can be classified as <i>Hate</i> with
   * HIGH confidence, <i>Insults</i> with LOW confidence, <i>Sexual</i> with NONE
   * confidence, and <i>Violence</i> with MEDIUM confidence.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails-filters.html">Guardrails
   * content filters</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailContentFilterConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailContentFilterConfig
  {
  public:
    AWS_BEDROCK_API GuardrailContentFilterConfig() = default;
    AWS_BEDROCK_API GuardrailContentFilterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailContentFilterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The harmful category that the content filter is applied to.</p>
     */
    inline GuardrailContentFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailContentFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailContentFilterConfig& WithType(GuardrailContentFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strength of the content filter to apply to prompts. As you increase the
     * filter strength, the likelihood of filtering harmful content increases and the
     * probability of seeing harmful content in your application reduces.</p>
     */
    inline GuardrailFilterStrength GetInputStrength() const { return m_inputStrength; }
    inline bool InputStrengthHasBeenSet() const { return m_inputStrengthHasBeenSet; }
    inline void SetInputStrength(GuardrailFilterStrength value) { m_inputStrengthHasBeenSet = true; m_inputStrength = value; }
    inline GuardrailContentFilterConfig& WithInputStrength(GuardrailFilterStrength value) { SetInputStrength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strength of the content filter to apply to model responses. As you
     * increase the filter strength, the likelihood of filtering harmful content
     * increases and the probability of seeing harmful content in your application
     * reduces.</p>
     */
    inline GuardrailFilterStrength GetOutputStrength() const { return m_outputStrength; }
    inline bool OutputStrengthHasBeenSet() const { return m_outputStrengthHasBeenSet; }
    inline void SetOutputStrength(GuardrailFilterStrength value) { m_outputStrengthHasBeenSet = true; m_outputStrength = value; }
    inline GuardrailContentFilterConfig& WithOutputStrength(GuardrailFilterStrength value) { SetOutputStrength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input modalities selected for the guardrail content filter
     * configuration.</p>
     */
    inline const Aws::Vector<GuardrailModality>& GetInputModalities() const { return m_inputModalities; }
    inline bool InputModalitiesHasBeenSet() const { return m_inputModalitiesHasBeenSet; }
    template<typename InputModalitiesT = Aws::Vector<GuardrailModality>>
    void SetInputModalities(InputModalitiesT&& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities = std::forward<InputModalitiesT>(value); }
    template<typename InputModalitiesT = Aws::Vector<GuardrailModality>>
    GuardrailContentFilterConfig& WithInputModalities(InputModalitiesT&& value) { SetInputModalities(std::forward<InputModalitiesT>(value)); return *this;}
    inline GuardrailContentFilterConfig& AddInputModalities(GuardrailModality value) { m_inputModalitiesHasBeenSet = true; m_inputModalities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output modalities selected for the guardrail content filter
     * configuration.</p>
     */
    inline const Aws::Vector<GuardrailModality>& GetOutputModalities() const { return m_outputModalities; }
    inline bool OutputModalitiesHasBeenSet() const { return m_outputModalitiesHasBeenSet; }
    template<typename OutputModalitiesT = Aws::Vector<GuardrailModality>>
    void SetOutputModalities(OutputModalitiesT&& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities = std::forward<OutputModalitiesT>(value); }
    template<typename OutputModalitiesT = Aws::Vector<GuardrailModality>>
    GuardrailContentFilterConfig& WithOutputModalities(OutputModalitiesT&& value) { SetOutputModalities(std::forward<OutputModalitiesT>(value)); return *this;}
    inline GuardrailContentFilterConfig& AddOutputModalities(GuardrailModality value) { m_outputModalitiesHasBeenSet = true; m_outputModalities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the action to take when harmful content is detected. Supported
     * values include:</p> <ul> <li> <p> <code>BLOCK</code> – Block the content and
     * replace it with blocked messaging.</p> </li> <li> <p> <code>NONE</code> – Take
     * no action but return detection information in the trace response.</p> </li>
     * </ul>
     */
    inline GuardrailContentFilterAction GetInputAction() const { return m_inputAction; }
    inline bool InputActionHasBeenSet() const { return m_inputActionHasBeenSet; }
    inline void SetInputAction(GuardrailContentFilterAction value) { m_inputActionHasBeenSet = true; m_inputAction = value; }
    inline GuardrailContentFilterConfig& WithInputAction(GuardrailContentFilterAction value) { SetInputAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action to take when harmful content is detected in the output.
     * Supported values include:</p> <ul> <li> <p> <code>BLOCK</code> – Block the
     * content and replace it with blocked messaging.</p> </li> <li> <p>
     * <code>NONE</code> – Take no action but return detection information in the trace
     * response.</p> </li> </ul>
     */
    inline GuardrailContentFilterAction GetOutputAction() const { return m_outputAction; }
    inline bool OutputActionHasBeenSet() const { return m_outputActionHasBeenSet; }
    inline void SetOutputAction(GuardrailContentFilterAction value) { m_outputActionHasBeenSet = true; m_outputAction = value; }
    inline GuardrailContentFilterConfig& WithOutputAction(GuardrailContentFilterAction value) { SetOutputAction(value); return *this;}
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
    inline GuardrailContentFilterConfig& WithInputEnabled(bool value) { SetInputEnabled(value); return *this;}
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
    inline GuardrailContentFilterConfig& WithOutputEnabled(bool value) { SetOutputEnabled(value); return *this;}
    ///@}
  private:

    GuardrailContentFilterType m_type{GuardrailContentFilterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    GuardrailFilterStrength m_inputStrength{GuardrailFilterStrength::NOT_SET};
    bool m_inputStrengthHasBeenSet = false;

    GuardrailFilterStrength m_outputStrength{GuardrailFilterStrength::NOT_SET};
    bool m_outputStrengthHasBeenSet = false;

    Aws::Vector<GuardrailModality> m_inputModalities;
    bool m_inputModalitiesHasBeenSet = false;

    Aws::Vector<GuardrailModality> m_outputModalities;
    bool m_outputModalitiesHasBeenSet = false;

    GuardrailContentFilterAction m_inputAction{GuardrailContentFilterAction::NOT_SET};
    bool m_inputActionHasBeenSet = false;

    GuardrailContentFilterAction m_outputAction{GuardrailContentFilterAction::NOT_SET};
    bool m_outputActionHasBeenSet = false;

    bool m_inputEnabled{false};
    bool m_inputEnabledHasBeenSet = false;

    bool m_outputEnabled{false};
    bool m_outputEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
