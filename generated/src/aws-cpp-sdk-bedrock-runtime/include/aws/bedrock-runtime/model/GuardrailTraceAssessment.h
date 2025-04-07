/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/GuardrailAssessment.h>
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
   * <p>A Top level guardrail trace object. For more information, see
   * <a>ConverseTrace</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailTraceAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailTraceAssessment
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailTraceAssessment() = default;
    AWS_BEDROCKRUNTIME_API GuardrailTraceAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailTraceAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output from the model.</p>
     */
    inline const Aws::Vector<Aws::String>& GetModelOutput() const { return m_modelOutput; }
    inline bool ModelOutputHasBeenSet() const { return m_modelOutputHasBeenSet; }
    template<typename ModelOutputT = Aws::Vector<Aws::String>>
    void SetModelOutput(ModelOutputT&& value) { m_modelOutputHasBeenSet = true; m_modelOutput = std::forward<ModelOutputT>(value); }
    template<typename ModelOutputT = Aws::Vector<Aws::String>>
    GuardrailTraceAssessment& WithModelOutput(ModelOutputT&& value) { SetModelOutput(std::forward<ModelOutputT>(value)); return *this;}
    template<typename ModelOutputT = Aws::String>
    GuardrailTraceAssessment& AddModelOutput(ModelOutputT&& value) { m_modelOutputHasBeenSet = true; m_modelOutput.emplace_back(std::forward<ModelOutputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input assessment.</p>
     */
    inline const Aws::Map<Aws::String, GuardrailAssessment>& GetInputAssessment() const { return m_inputAssessment; }
    inline bool InputAssessmentHasBeenSet() const { return m_inputAssessmentHasBeenSet; }
    template<typename InputAssessmentT = Aws::Map<Aws::String, GuardrailAssessment>>
    void SetInputAssessment(InputAssessmentT&& value) { m_inputAssessmentHasBeenSet = true; m_inputAssessment = std::forward<InputAssessmentT>(value); }
    template<typename InputAssessmentT = Aws::Map<Aws::String, GuardrailAssessment>>
    GuardrailTraceAssessment& WithInputAssessment(InputAssessmentT&& value) { SetInputAssessment(std::forward<InputAssessmentT>(value)); return *this;}
    template<typename InputAssessmentKeyT = Aws::String, typename InputAssessmentValueT = GuardrailAssessment>
    GuardrailTraceAssessment& AddInputAssessment(InputAssessmentKeyT&& key, InputAssessmentValueT&& value) {
      m_inputAssessmentHasBeenSet = true; m_inputAssessment.emplace(std::forward<InputAssessmentKeyT>(key), std::forward<InputAssessmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>the output assessments.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<GuardrailAssessment>>& GetOutputAssessments() const { return m_outputAssessments; }
    inline bool OutputAssessmentsHasBeenSet() const { return m_outputAssessmentsHasBeenSet; }
    template<typename OutputAssessmentsT = Aws::Map<Aws::String, Aws::Vector<GuardrailAssessment>>>
    void SetOutputAssessments(OutputAssessmentsT&& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments = std::forward<OutputAssessmentsT>(value); }
    template<typename OutputAssessmentsT = Aws::Map<Aws::String, Aws::Vector<GuardrailAssessment>>>
    GuardrailTraceAssessment& WithOutputAssessments(OutputAssessmentsT&& value) { SetOutputAssessments(std::forward<OutputAssessmentsT>(value)); return *this;}
    template<typename OutputAssessmentsKeyT = Aws::String, typename OutputAssessmentsValueT = Aws::Vector<GuardrailAssessment>>
    GuardrailTraceAssessment& AddOutputAssessments(OutputAssessmentsKeyT&& key, OutputAssessmentsValueT&& value) {
      m_outputAssessmentsHasBeenSet = true; m_outputAssessments.emplace(std::forward<OutputAssessmentsKeyT>(key), std::forward<OutputAssessmentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Provides the reason for the action taken when harmful content is
     * detected.</p>
     */
    inline const Aws::String& GetActionReason() const { return m_actionReason; }
    inline bool ActionReasonHasBeenSet() const { return m_actionReasonHasBeenSet; }
    template<typename ActionReasonT = Aws::String>
    void SetActionReason(ActionReasonT&& value) { m_actionReasonHasBeenSet = true; m_actionReason = std::forward<ActionReasonT>(value); }
    template<typename ActionReasonT = Aws::String>
    GuardrailTraceAssessment& WithActionReason(ActionReasonT&& value) { SetActionReason(std::forward<ActionReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_modelOutput;
    bool m_modelOutputHasBeenSet = false;

    Aws::Map<Aws::String, GuardrailAssessment> m_inputAssessment;
    bool m_inputAssessmentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<GuardrailAssessment>> m_outputAssessments;
    bool m_outputAssessmentsHasBeenSet = false;

    Aws::String m_actionReason;
    bool m_actionReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
