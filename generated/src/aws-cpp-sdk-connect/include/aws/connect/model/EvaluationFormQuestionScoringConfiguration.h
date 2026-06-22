/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormScoreThreshold.h>
#include <aws/connect/model/QuestionPointsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Scoring configuration for a question in an evaluation form.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormQuestionScoringConfiguration">AWS
 * API Reference</a></p>
 */
class EvaluationFormQuestionScoringConfiguration {
 public:
  AWS_CONNECT_API EvaluationFormQuestionScoringConfiguration() = default;
  AWS_CONNECT_API EvaluationFormQuestionScoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormQuestionScoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The points configuration for point-based scoring.</p>
   */
  inline const QuestionPointsConfiguration& GetPointsConfiguration() const { return m_pointsConfiguration; }
  inline bool PointsConfigurationHasBeenSet() const { return m_pointsConfigurationHasBeenSet; }
  template <typename PointsConfigurationT = QuestionPointsConfiguration>
  void SetPointsConfiguration(PointsConfigurationT&& value) {
    m_pointsConfigurationHasBeenSet = true;
    m_pointsConfiguration = std::forward<PointsConfigurationT>(value);
  }
  template <typename PointsConfigurationT = QuestionPointsConfiguration>
  EvaluationFormQuestionScoringConfiguration& WithPointsConfiguration(PointsConfigurationT&& value) {
    SetPointsConfiguration(std::forward<PointsConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The flag to exclude the question from scoring.</p>
   */
  inline bool GetIsExcludedFromScoring() const { return m_isExcludedFromScoring; }
  inline bool IsExcludedFromScoringHasBeenSet() const { return m_isExcludedFromScoringHasBeenSet; }
  inline void SetIsExcludedFromScoring(bool value) {
    m_isExcludedFromScoringHasBeenSet = true;
    m_isExcludedFromScoring = value;
  }
  inline EvaluationFormQuestionScoringConfiguration& WithIsExcludedFromScoring(bool value) {
    SetIsExcludedFromScoring(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The score thresholds for performance categories.</p>
   */
  inline const Aws::Vector<EvaluationFormScoreThreshold>& GetScoreThresholds() const { return m_scoreThresholds; }
  inline bool ScoreThresholdsHasBeenSet() const { return m_scoreThresholdsHasBeenSet; }
  template <typename ScoreThresholdsT = Aws::Vector<EvaluationFormScoreThreshold>>
  void SetScoreThresholds(ScoreThresholdsT&& value) {
    m_scoreThresholdsHasBeenSet = true;
    m_scoreThresholds = std::forward<ScoreThresholdsT>(value);
  }
  template <typename ScoreThresholdsT = Aws::Vector<EvaluationFormScoreThreshold>>
  EvaluationFormQuestionScoringConfiguration& WithScoreThresholds(ScoreThresholdsT&& value) {
    SetScoreThresholds(std::forward<ScoreThresholdsT>(value));
    return *this;
  }
  template <typename ScoreThresholdsT = EvaluationFormScoreThreshold>
  EvaluationFormQuestionScoringConfiguration& AddScoreThresholds(ScoreThresholdsT&& value) {
    m_scoreThresholdsHasBeenSet = true;
    m_scoreThresholds.emplace_back(std::forward<ScoreThresholdsT>(value));
    return *this;
  }
  ///@}
 private:
  QuestionPointsConfiguration m_pointsConfiguration;

  bool m_isExcludedFromScoring{false};

  Aws::Vector<EvaluationFormScoreThreshold> m_scoreThresholds;
  bool m_pointsConfigurationHasBeenSet = false;
  bool m_isExcludedFromScoringHasBeenSet = false;
  bool m_scoreThresholdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
