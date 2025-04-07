/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailUsage.h>
#include <aws/bedrock-runtime/model/GuardrailAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailCoverage.h>
#include <aws/bedrock-runtime/model/GuardrailOutputContent.h>
#include <aws/bedrock-runtime/model/GuardrailAssessment.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BedrockRuntime
{
namespace Model
{
  class ApplyGuardrailResult
  {
  public:
    AWS_BEDROCKRUNTIME_API ApplyGuardrailResult() = default;
    AWS_BEDROCKRUNTIME_API ApplyGuardrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKRUNTIME_API ApplyGuardrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The usage details in the response from the guardrail.</p>
     */
    inline const GuardrailUsage& GetUsage() const { return m_usage; }
    template<typename UsageT = GuardrailUsage>
    void SetUsage(UsageT&& value) { m_usageHasBeenSet = true; m_usage = std::forward<UsageT>(value); }
    template<typename UsageT = GuardrailUsage>
    ApplyGuardrailResult& WithUsage(UsageT&& value) { SetUsage(std::forward<UsageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action taken in the response from the guardrail.</p>
     */
    inline GuardrailAction GetAction() const { return m_action; }
    inline void SetAction(GuardrailAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline ApplyGuardrailResult& WithAction(GuardrailAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the action taken when harmful content is detected.</p>
     */
    inline const Aws::String& GetActionReason() const { return m_actionReason; }
    template<typename ActionReasonT = Aws::String>
    void SetActionReason(ActionReasonT&& value) { m_actionReasonHasBeenSet = true; m_actionReason = std::forward<ActionReasonT>(value); }
    template<typename ActionReasonT = Aws::String>
    ApplyGuardrailResult& WithActionReason(ActionReasonT&& value) { SetActionReason(std::forward<ActionReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output details in the response from the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailOutputContent>& GetOutputs() const { return m_outputs; }
    template<typename OutputsT = Aws::Vector<GuardrailOutputContent>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<GuardrailOutputContent>>
    ApplyGuardrailResult& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = GuardrailOutputContent>
    ApplyGuardrailResult& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The assessment details in the response from the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailAssessment>& GetAssessments() const { return m_assessments; }
    template<typename AssessmentsT = Aws::Vector<GuardrailAssessment>>
    void SetAssessments(AssessmentsT&& value) { m_assessmentsHasBeenSet = true; m_assessments = std::forward<AssessmentsT>(value); }
    template<typename AssessmentsT = Aws::Vector<GuardrailAssessment>>
    ApplyGuardrailResult& WithAssessments(AssessmentsT&& value) { SetAssessments(std::forward<AssessmentsT>(value)); return *this;}
    template<typename AssessmentsT = GuardrailAssessment>
    ApplyGuardrailResult& AddAssessments(AssessmentsT&& value) { m_assessmentsHasBeenSet = true; m_assessments.emplace_back(std::forward<AssessmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The guardrail coverage details in the apply guardrail response.</p>
     */
    inline const GuardrailCoverage& GetGuardrailCoverage() const { return m_guardrailCoverage; }
    template<typename GuardrailCoverageT = GuardrailCoverage>
    void SetGuardrailCoverage(GuardrailCoverageT&& value) { m_guardrailCoverageHasBeenSet = true; m_guardrailCoverage = std::forward<GuardrailCoverageT>(value); }
    template<typename GuardrailCoverageT = GuardrailCoverage>
    ApplyGuardrailResult& WithGuardrailCoverage(GuardrailCoverageT&& value) { SetGuardrailCoverage(std::forward<GuardrailCoverageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ApplyGuardrailResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GuardrailUsage m_usage;
    bool m_usageHasBeenSet = false;

    GuardrailAction m_action{GuardrailAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_actionReason;
    bool m_actionReasonHasBeenSet = false;

    Aws::Vector<GuardrailOutputContent> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::Vector<GuardrailAssessment> m_assessments;
    bool m_assessmentsHasBeenSet = false;

    GuardrailCoverage m_guardrailCoverage;
    bool m_guardrailCoverageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
