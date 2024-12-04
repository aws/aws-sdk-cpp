/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailContentFilterType.h>
#include <aws/bedrock/model/GuardrailFilterStrength.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * content filters</a>.</p> <p>This data type is used in the following API
   * operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GetGuardrail.html#API_GetGuardrail_ResponseSyntax">GetGuardrail
   * response body</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailContentFilter">AWS
   * API Reference</a></p>
   */
  class GuardrailContentFilter
  {
  public:
    AWS_BEDROCK_API GuardrailContentFilter();
    AWS_BEDROCK_API GuardrailContentFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailContentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The harmful category that the content filter is applied to.</p>
     */
    inline const GuardrailContentFilterType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GuardrailContentFilterType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GuardrailContentFilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GuardrailContentFilter& WithType(const GuardrailContentFilterType& value) { SetType(value); return *this;}
    inline GuardrailContentFilter& WithType(GuardrailContentFilterType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strength of the content filter to apply to prompts. As you increase the
     * filter strength, the likelihood of filtering harmful content increases and the
     * probability of seeing harmful content in your application reduces.</p>
     */
    inline const GuardrailFilterStrength& GetInputStrength() const{ return m_inputStrength; }
    inline bool InputStrengthHasBeenSet() const { return m_inputStrengthHasBeenSet; }
    inline void SetInputStrength(const GuardrailFilterStrength& value) { m_inputStrengthHasBeenSet = true; m_inputStrength = value; }
    inline void SetInputStrength(GuardrailFilterStrength&& value) { m_inputStrengthHasBeenSet = true; m_inputStrength = std::move(value); }
    inline GuardrailContentFilter& WithInputStrength(const GuardrailFilterStrength& value) { SetInputStrength(value); return *this;}
    inline GuardrailContentFilter& WithInputStrength(GuardrailFilterStrength&& value) { SetInputStrength(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strength of the content filter to apply to model responses. As you
     * increase the filter strength, the likelihood of filtering harmful content
     * increases and the probability of seeing harmful content in your application
     * reduces.</p>
     */
    inline const GuardrailFilterStrength& GetOutputStrength() const{ return m_outputStrength; }
    inline bool OutputStrengthHasBeenSet() const { return m_outputStrengthHasBeenSet; }
    inline void SetOutputStrength(const GuardrailFilterStrength& value) { m_outputStrengthHasBeenSet = true; m_outputStrength = value; }
    inline void SetOutputStrength(GuardrailFilterStrength&& value) { m_outputStrengthHasBeenSet = true; m_outputStrength = std::move(value); }
    inline GuardrailContentFilter& WithOutputStrength(const GuardrailFilterStrength& value) { SetOutputStrength(value); return *this;}
    inline GuardrailContentFilter& WithOutputStrength(GuardrailFilterStrength&& value) { SetOutputStrength(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input modalities selected for the guardrail content filter.</p>
     */
    inline const Aws::Vector<GuardrailModality>& GetInputModalities() const{ return m_inputModalities; }
    inline bool InputModalitiesHasBeenSet() const { return m_inputModalitiesHasBeenSet; }
    inline void SetInputModalities(const Aws::Vector<GuardrailModality>& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities = value; }
    inline void SetInputModalities(Aws::Vector<GuardrailModality>&& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities = std::move(value); }
    inline GuardrailContentFilter& WithInputModalities(const Aws::Vector<GuardrailModality>& value) { SetInputModalities(value); return *this;}
    inline GuardrailContentFilter& WithInputModalities(Aws::Vector<GuardrailModality>&& value) { SetInputModalities(std::move(value)); return *this;}
    inline GuardrailContentFilter& AddInputModalities(const GuardrailModality& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities.push_back(value); return *this; }
    inline GuardrailContentFilter& AddInputModalities(GuardrailModality&& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output modalities selected for the guardrail content filter.</p>
     */
    inline const Aws::Vector<GuardrailModality>& GetOutputModalities() const{ return m_outputModalities; }
    inline bool OutputModalitiesHasBeenSet() const { return m_outputModalitiesHasBeenSet; }
    inline void SetOutputModalities(const Aws::Vector<GuardrailModality>& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities = value; }
    inline void SetOutputModalities(Aws::Vector<GuardrailModality>&& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities = std::move(value); }
    inline GuardrailContentFilter& WithOutputModalities(const Aws::Vector<GuardrailModality>& value) { SetOutputModalities(value); return *this;}
    inline GuardrailContentFilter& WithOutputModalities(Aws::Vector<GuardrailModality>&& value) { SetOutputModalities(std::move(value)); return *this;}
    inline GuardrailContentFilter& AddOutputModalities(const GuardrailModality& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities.push_back(value); return *this; }
    inline GuardrailContentFilter& AddOutputModalities(GuardrailModality&& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities.push_back(std::move(value)); return *this; }
    ///@}
  private:

    GuardrailContentFilterType m_type;
    bool m_typeHasBeenSet = false;

    GuardrailFilterStrength m_inputStrength;
    bool m_inputStrengthHasBeenSet = false;

    GuardrailFilterStrength m_outputStrength;
    bool m_outputStrengthHasBeenSet = false;

    Aws::Vector<GuardrailModality> m_inputModalities;
    bool m_inputModalitiesHasBeenSet = false;

    Aws::Vector<GuardrailModality> m_outputModalities;
    bool m_outputModalitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
