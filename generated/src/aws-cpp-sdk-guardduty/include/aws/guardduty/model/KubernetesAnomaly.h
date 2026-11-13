/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains details about anomalous Kubernetes behavior.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesAnomaly">AWS
 * API Reference</a></p>
 */
class KubernetesAnomaly {
 public:
  AWS_GUARDDUTY_API KubernetesAnomaly() = default;
  AWS_GUARDDUTY_API KubernetesAnomaly(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API KubernetesAnomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the unusual behavior.</p>
   */
  inline const Aws::String& GetUnusualBehavior() const { return m_unusualBehavior; }
  inline bool UnusualBehaviorHasBeenSet() const { return m_unusualBehaviorHasBeenSet; }
  template <typename UnusualBehaviorT = Aws::String>
  void SetUnusualBehavior(UnusualBehaviorT&& value) {
    m_unusualBehaviorHasBeenSet = true;
    m_unusualBehavior = std::forward<UnusualBehaviorT>(value);
  }
  template <typename UnusualBehaviorT = Aws::String>
  KubernetesAnomaly& WithUnusualBehavior(UnusualBehaviorT&& value) {
    SetUnusualBehavior(std::forward<UnusualBehaviorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the normal behavior that the activity was compared
   * against.</p>
   */
  inline const Aws::String& GetBaselineContext() const { return m_baselineContext; }
  inline bool BaselineContextHasBeenSet() const { return m_baselineContextHasBeenSet; }
  template <typename BaselineContextT = Aws::String>
  void SetBaselineContext(BaselineContextT&& value) {
    m_baselineContextHasBeenSet = true;
    m_baselineContext = std::forward<BaselineContextT>(value);
  }
  template <typename BaselineContextT = Aws::String>
  KubernetesAnomaly& WithBaselineContext(BaselineContextT&& value) {
    SetBaselineContext(std::forward<BaselineContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The anomaly score of the behavior.</p>
   */
  inline const Aws::String& GetAnomalyScore() const { return m_anomalyScore; }
  inline bool AnomalyScoreHasBeenSet() const { return m_anomalyScoreHasBeenSet; }
  template <typename AnomalyScoreT = Aws::String>
  void SetAnomalyScore(AnomalyScoreT&& value) {
    m_anomalyScoreHasBeenSet = true;
    m_anomalyScore = std::forward<AnomalyScoreT>(value);
  }
  template <typename AnomalyScoreT = Aws::String>
  KubernetesAnomaly& WithAnomalyScore(AnomalyScoreT&& value) {
    SetAnomalyScore(std::forward<AnomalyScoreT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The period over which the normal behavior was established.</p>
   */
  inline const Aws::String& GetTrainingPeriod() const { return m_trainingPeriod; }
  inline bool TrainingPeriodHasBeenSet() const { return m_trainingPeriodHasBeenSet; }
  template <typename TrainingPeriodT = Aws::String>
  void SetTrainingPeriod(TrainingPeriodT&& value) {
    m_trainingPeriodHasBeenSet = true;
    m_trainingPeriod = std::forward<TrainingPeriodT>(value);
  }
  template <typename TrainingPeriodT = Aws::String>
  KubernetesAnomaly& WithTrainingPeriod(TrainingPeriodT&& value) {
    SetTrainingPeriod(std::forward<TrainingPeriodT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_unusualBehavior;

  Aws::String m_baselineContext;

  Aws::String m_anomalyScore;

  Aws::String m_trainingPeriod;
  bool m_unusualBehaviorHasBeenSet = false;
  bool m_baselineContextHasBeenSet = false;
  bool m_anomalyScoreHasBeenSet = false;
  bool m_trainingPeriodHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
