/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The configuration for a specific set of metrics to collect for a
 * service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/MetricConfiguration">AWS
 * API Reference</a></p>
 */
class MetricConfiguration {
 public:
  AWS_ECS_API MetricConfiguration() = default;
  AWS_ECS_API MetricConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API MetricConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of metric names to configure. The supported metric names are
   * <code>CPUUtilization</code> and <code>MemoryUtilization</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMetricNames() const { return m_metricNames; }
  inline bool MetricNamesHasBeenSet() const { return m_metricNamesHasBeenSet; }
  template <typename MetricNamesT = Aws::Vector<Aws::String>>
  void SetMetricNames(MetricNamesT&& value) {
    m_metricNamesHasBeenSet = true;
    m_metricNames = std::forward<MetricNamesT>(value);
  }
  template <typename MetricNamesT = Aws::Vector<Aws::String>>
  MetricConfiguration& WithMetricNames(MetricNamesT&& value) {
    SetMetricNames(std::forward<MetricNamesT>(value));
    return *this;
  }
  template <typename MetricNamesT = Aws::String>
  MetricConfiguration& AddMetricNames(MetricNamesT&& value) {
    m_metricNamesHasBeenSet = true;
    m_metricNames.emplace_back(std::forward<MetricNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resolution, in seconds, at which to collect the metrics. The valid values
   * are <code>20</code> and <code>60</code>.</p>
   */
  inline int GetResolutionSeconds() const { return m_resolutionSeconds; }
  inline bool ResolutionSecondsHasBeenSet() const { return m_resolutionSecondsHasBeenSet; }
  inline void SetResolutionSeconds(int value) {
    m_resolutionSecondsHasBeenSet = true;
    m_resolutionSeconds = value;
  }
  inline MetricConfiguration& WithResolutionSeconds(int value) {
    SetResolutionSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_metricNames;

  int m_resolutionSeconds{0};
  bool m_metricNamesHasBeenSet = false;
  bool m_resolutionSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
