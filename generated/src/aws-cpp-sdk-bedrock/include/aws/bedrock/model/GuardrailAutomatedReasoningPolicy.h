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
   * <p>Represents the configuration of Automated Reasoning policies within a Amazon
   * Bedrock Guardrail, including the policies to apply and confidence
   * thresholds.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailAutomatedReasoningPolicy">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningPolicy
  {
  public:
    AWS_BEDROCK_API GuardrailAutomatedReasoningPolicy() = default;
    AWS_BEDROCK_API GuardrailAutomatedReasoningPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailAutomatedReasoningPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of Automated Reasoning policy ARNs that should be applied as part of
     * this guardrail configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicies() const { return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    template<typename PoliciesT = Aws::Vector<Aws::String>>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = Aws::Vector<Aws::String>>
    GuardrailAutomatedReasoningPolicy& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
    template<typename PoliciesT = Aws::String>
    GuardrailAutomatedReasoningPolicy& AddPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies.emplace_back(std::forward<PoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum confidence level required for Automated Reasoning policy
     * violations to trigger guardrail actions. Values range from 0.0 to 1.0.</p>
     */
    inline double GetConfidenceThreshold() const { return m_confidenceThreshold; }
    inline bool ConfidenceThresholdHasBeenSet() const { return m_confidenceThresholdHasBeenSet; }
    inline void SetConfidenceThreshold(double value) { m_confidenceThresholdHasBeenSet = true; m_confidenceThreshold = value; }
    inline GuardrailAutomatedReasoningPolicy& WithConfidenceThreshold(double value) { SetConfidenceThreshold(value); return *this;}
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
