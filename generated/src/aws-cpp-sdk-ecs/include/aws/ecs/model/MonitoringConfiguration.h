/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/MetricConfiguration.h>

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
 * <p>The optional monitoring configuration for a service, which defines the
 * resolution for the service-level <code>CPUUtilization</code> and
 * <code>MemoryUtilization</code> Amazon CloudWatch metrics. When not specified,
 * Amazon ECS uses the default resolution of <code>60</code> seconds.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/MonitoringConfiguration">AWS
 * API Reference</a></p>
 */
class MonitoringConfiguration {
 public:
  AWS_ECS_API MonitoringConfiguration() = default;
  AWS_ECS_API MonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API MonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of metric configurations for the service monitoring.</p>
   */
  inline const Aws::Vector<MetricConfiguration>& GetMetricConfigurations() const { return m_metricConfigurations; }
  inline bool MetricConfigurationsHasBeenSet() const { return m_metricConfigurationsHasBeenSet; }
  template <typename MetricConfigurationsT = Aws::Vector<MetricConfiguration>>
  void SetMetricConfigurations(MetricConfigurationsT&& value) {
    m_metricConfigurationsHasBeenSet = true;
    m_metricConfigurations = std::forward<MetricConfigurationsT>(value);
  }
  template <typename MetricConfigurationsT = Aws::Vector<MetricConfiguration>>
  MonitoringConfiguration& WithMetricConfigurations(MetricConfigurationsT&& value) {
    SetMetricConfigurations(std::forward<MetricConfigurationsT>(value));
    return *this;
  }
  template <typename MetricConfigurationsT = MetricConfiguration>
  MonitoringConfiguration& AddMetricConfigurations(MetricConfigurationsT&& value) {
    m_metricConfigurationsHasBeenSet = true;
    m_metricConfigurations.emplace_back(std::forward<MetricConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MetricConfiguration> m_metricConfigurations;
  bool m_metricConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
