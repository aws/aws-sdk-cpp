/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailContentFilterType.h>
#include <aws/bedrock-runtime/model/GuardrailContentFilterConfidence.h>
#include <aws/bedrock-runtime/model/GuardrailContentFilterStrength.h>
#include <aws/bedrock-runtime/model/GuardrailContentPolicyAction.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>The content filter for a guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailContentFilter">AWS
   * API Reference</a></p>
   */
  class GuardrailContentFilter
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailContentFilter() = default;
    AWS_BEDROCKRUNTIME_API GuardrailContentFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailContentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The guardrail type.</p>
     */
    inline GuardrailContentFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailContentFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailContentFilter& WithType(GuardrailContentFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The guardrail confidence.</p>
     */
    inline GuardrailContentFilterConfidence GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(GuardrailContentFilterConfidence value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline GuardrailContentFilter& WithConfidence(GuardrailContentFilterConfidence value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter strength setting for the guardrail content filter.</p>
     */
    inline GuardrailContentFilterStrength GetFilterStrength() const { return m_filterStrength; }
    inline bool FilterStrengthHasBeenSet() const { return m_filterStrengthHasBeenSet; }
    inline void SetFilterStrength(GuardrailContentFilterStrength value) { m_filterStrengthHasBeenSet = true; m_filterStrength = value; }
    inline GuardrailContentFilter& WithFilterStrength(GuardrailContentFilterStrength value) { SetFilterStrength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The guardrail action.</p>
     */
    inline GuardrailContentPolicyAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailContentPolicyAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailContentFilter& WithAction(GuardrailContentPolicyAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether content that breaches the guardrail configuration is
     * detected.</p>
     */
    inline bool GetDetected() const { return m_detected; }
    inline bool DetectedHasBeenSet() const { return m_detectedHasBeenSet; }
    inline void SetDetected(bool value) { m_detectedHasBeenSet = true; m_detected = value; }
    inline GuardrailContentFilter& WithDetected(bool value) { SetDetected(value); return *this;}
    ///@}
  private:

    GuardrailContentFilterType m_type{GuardrailContentFilterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    GuardrailContentFilterConfidence m_confidence{GuardrailContentFilterConfidence::NOT_SET};
    bool m_confidenceHasBeenSet = false;

    GuardrailContentFilterStrength m_filterStrength{GuardrailContentFilterStrength::NOT_SET};
    bool m_filterStrengthHasBeenSet = false;

    GuardrailContentPolicyAction m_action{GuardrailContentPolicyAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    bool m_detected{false};
    bool m_detectedHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
