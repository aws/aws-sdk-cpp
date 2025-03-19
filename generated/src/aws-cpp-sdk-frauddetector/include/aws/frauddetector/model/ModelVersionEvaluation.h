/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/PredictionExplanations.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The model version evalutions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ModelVersionEvaluation">AWS
   * API Reference</a></p>
   */
  class ModelVersionEvaluation
  {
  public:
    AWS_FRAUDDETECTOR_API ModelVersionEvaluation() = default;
    AWS_FRAUDDETECTOR_API ModelVersionEvaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ModelVersionEvaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The output variable name. </p>
     */
    inline const Aws::String& GetOutputVariableName() const { return m_outputVariableName; }
    inline bool OutputVariableNameHasBeenSet() const { return m_outputVariableNameHasBeenSet; }
    template<typename OutputVariableNameT = Aws::String>
    void SetOutputVariableName(OutputVariableNameT&& value) { m_outputVariableNameHasBeenSet = true; m_outputVariableName = std::forward<OutputVariableNameT>(value); }
    template<typename OutputVariableNameT = Aws::String>
    ModelVersionEvaluation& WithOutputVariableName(OutputVariableNameT&& value) { SetOutputVariableName(std::forward<OutputVariableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The evaluation score generated for the model version. </p>
     */
    inline const Aws::String& GetEvaluationScore() const { return m_evaluationScore; }
    inline bool EvaluationScoreHasBeenSet() const { return m_evaluationScoreHasBeenSet; }
    template<typename EvaluationScoreT = Aws::String>
    void SetEvaluationScore(EvaluationScoreT&& value) { m_evaluationScoreHasBeenSet = true; m_evaluationScore = std::forward<EvaluationScoreT>(value); }
    template<typename EvaluationScoreT = Aws::String>
    ModelVersionEvaluation& WithEvaluationScore(EvaluationScoreT&& value) { SetEvaluationScore(std::forward<EvaluationScoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The prediction explanations generated for the model version. </p>
     */
    inline const PredictionExplanations& GetPredictionExplanations() const { return m_predictionExplanations; }
    inline bool PredictionExplanationsHasBeenSet() const { return m_predictionExplanationsHasBeenSet; }
    template<typename PredictionExplanationsT = PredictionExplanations>
    void SetPredictionExplanations(PredictionExplanationsT&& value) { m_predictionExplanationsHasBeenSet = true; m_predictionExplanations = std::forward<PredictionExplanationsT>(value); }
    template<typename PredictionExplanationsT = PredictionExplanations>
    ModelVersionEvaluation& WithPredictionExplanations(PredictionExplanationsT&& value) { SetPredictionExplanations(std::forward<PredictionExplanationsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputVariableName;
    bool m_outputVariableNameHasBeenSet = false;

    Aws::String m_evaluationScore;
    bool m_evaluationScoreHasBeenSet = false;

    PredictionExplanations m_predictionExplanations;
    bool m_predictionExplanationsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
