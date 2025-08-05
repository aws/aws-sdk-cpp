/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Configuration settings for integrating Automated Reasoning policies with
   * Amazon Bedrock Guardrails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailAutomatedReasoningPolicyConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningPolicyConfig
  {
  public:
    AWS_BEDROCK_API GuardrailAutomatedReasoningPolicyConfig() = default;
    AWS_BEDROCK_API GuardrailAutomatedReasoningPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailAutomatedReasoningPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of Automated Reasoning policy ARNs to include in the guardrail
     * configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicies() const { return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    template<typename PoliciesT = Aws::Vector<Aws::String>>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = Aws::Vector<Aws::String>>
    GuardrailAutomatedReasoningPolicyConfig& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
    template<typename PoliciesT = Aws::String>
    GuardrailAutomatedReasoningPolicyConfig& AddPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies.emplace_back(std::forward<PoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The confidence threshold for triggering guardrail actions based on Automated
     * Reasoning policy violations.</p>
     */
    inline double GetConfidenceThreshold() const { return m_confidenceThreshold; }
    inline bool ConfidenceThresholdHasBeenSet() const { return m_confidenceThresholdHasBeenSet; }
    inline void SetConfidenceThreshold(double value) { m_confidenceThresholdHasBeenSet = true; m_confidenceThreshold = value; }
    inline GuardrailAutomatedReasoningPolicyConfig& WithConfidenceThreshold(double value) { SetConfidenceThreshold(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_policies;
    bool m_policiesHasBeenSet = false;

    double m_confidenceThreshold{0.0};
    bool m_confidenceThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
