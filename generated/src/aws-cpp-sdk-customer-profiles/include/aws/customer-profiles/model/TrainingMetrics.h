/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/TrainingMetricName.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Contains metrics and performance indicators from the training of a
 * recommender model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/TrainingMetrics">AWS
 * API Reference</a></p>
 */
class TrainingMetrics {
 public:
  AWS_CUSTOMERPROFILES_API TrainingMetrics() = default;
  AWS_CUSTOMERPROFILES_API TrainingMetrics(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API TrainingMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp when these training metrics were recorded.</p>
   */
  inline const Aws::Utils::DateTime& GetTime() const { return m_time; }
  inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
  template <typename TimeT = Aws::Utils::DateTime>
  void SetTime(TimeT&& value) {
    m_timeHasBeenSet = true;
    m_time = std::forward<TimeT>(value);
  }
  template <typename TimeT = Aws::Utils::DateTime>
  TrainingMetrics& WithTime(TimeT&& value) {
    SetTime(std::forward<TimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A collection of performance metrics and statistics from the training
   * process.</p>
   */
  inline const Aws::Map<TrainingMetricName, double>& GetMetrics() const { return m_metrics; }
  inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
  template <typename MetricsT = Aws::Map<TrainingMetricName, double>>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = Aws::Map<TrainingMetricName, double>>
  TrainingMetrics& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
    return *this;
  }
  inline TrainingMetrics& AddMetrics(TrainingMetricName key, double value) {
    m_metricsHasBeenSet = true;
    m_metrics.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_time{};
  bool m_timeHasBeenSet = false;

  Aws::Map<TrainingMetricName, double> m_metrics;
  bool m_metricsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
