/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningFinding.h>
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
   * <p>Contains the results of automated reasoning policy evaluation, including
   * logical findings about the validity of claims made in the input
   * content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAutomatedReasoningPolicyAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningPolicyAssessment
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningPolicyAssessment() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningPolicyAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningPolicyAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of logical validation results produced by evaluating the input content
     * against automated reasoning policies.</p>
     */
    inline const Aws::Vector<GuardrailAutomatedReasoningFinding>& GetFindings() const { return m_findings; }
    inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
    template<typename FindingsT = Aws::Vector<GuardrailAutomatedReasoningFinding>>
    void SetFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings = std::forward<FindingsT>(value); }
    template<typename FindingsT = Aws::Vector<GuardrailAutomatedReasoningFinding>>
    GuardrailAutomatedReasoningPolicyAssessment& WithFindings(FindingsT&& value) { SetFindings(std::forward<FindingsT>(value)); return *this;}
    template<typename FindingsT = GuardrailAutomatedReasoningFinding>
    GuardrailAutomatedReasoningPolicyAssessment& AddFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings.emplace_back(std::forward<FindingsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailAutomatedReasoningFinding> m_findings;
    bool m_findingsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
