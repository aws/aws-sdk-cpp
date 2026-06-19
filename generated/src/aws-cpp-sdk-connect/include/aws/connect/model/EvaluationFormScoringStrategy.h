/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormScoreThreshold.h>
#include <aws/connect/model/EvaluationFormScoringMode.h>
#include <aws/connect/model/EvaluationFormScoringStatus.h>
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
 * <p>Information about scoring strategy for an evaluation form.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormScoringStrategy">AWS
 * API Reference</a></p>
 */
class EvaluationFormScoringStrategy {
 public:
  AWS_CONNECT_API EvaluationFormScoringStrategy() = default;
  AWS_CONNECT_API EvaluationFormScoringStrategy(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormScoringStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scoring mode of the evaluation form.</p>
   */
  inline EvaluationFormScoringMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(EvaluationFormScoringMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline EvaluationFormScoringStrategy& WithMode(EvaluationFormScoringMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scoring status of the evaluation form.</p>
   */
  inline EvaluationFormScoringStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EvaluationFormScoringStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EvaluationFormScoringStrategy& WithStatus(EvaluationFormScoringStatus value) {
    SetStatus(value);
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
  EvaluationFormScoringStrategy& WithScoreThresholds(ScoreThresholdsT&& value) {
    SetScoreThresholds(std::forward<ScoreThresholdsT>(value));
    return *this;
  }
  template <typename ScoreThresholdsT = EvaluationFormScoreThreshold>
  EvaluationFormScoringStrategy& AddScoreThresholds(ScoreThresholdsT&& value) {
    m_scoreThresholdsHasBeenSet = true;
    m_scoreThresholds.emplace_back(std::forward<ScoreThresholdsT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationFormScoringMode m_mode{EvaluationFormScoringMode::NOT_SET};

  EvaluationFormScoringStatus m_status{EvaluationFormScoringStatus::NOT_SET};

  Aws::Vector<EvaluationFormScoreThreshold> m_scoreThresholds;
  bool m_modeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_scoreThresholdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
