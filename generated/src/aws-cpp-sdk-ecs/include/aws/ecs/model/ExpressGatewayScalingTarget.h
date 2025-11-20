/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ExpressGatewayServiceScalingMetric.h>

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
 * <p>Defines the auto-scaling configuration for an Express service. This
 * determines how the service automatically adjusts the number of running tasks
 * based on demand metrics such as CPU utilization, memory utilization, or request
 * count per target.</p> <p>Auto-scaling helps ensure your application can handle
 * varying levels of traffic while optimizing costs by scaling down during
 * low-demand periods. You can specify the minimum and maximum number of tasks, the
 * scaling metric, and the target value for that metric.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ExpressGatewayScalingTarget">AWS
 * API Reference</a></p>
 */
class ExpressGatewayScalingTarget {
 public:
  AWS_ECS_API ExpressGatewayScalingTarget() = default;
  AWS_ECS_API ExpressGatewayScalingTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ExpressGatewayScalingTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum number of tasks to run in the Express service.</p>
   */
  inline int GetMinTaskCount() const { return m_minTaskCount; }
  inline bool MinTaskCountHasBeenSet() const { return m_minTaskCountHasBeenSet; }
  inline void SetMinTaskCount(int value) {
    m_minTaskCountHasBeenSet = true;
    m_minTaskCount = value;
  }
  inline ExpressGatewayScalingTarget& WithMinTaskCount(int value) {
    SetMinTaskCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of tasks to run in the Express service.</p>
   */
  inline int GetMaxTaskCount() const { return m_maxTaskCount; }
  inline bool MaxTaskCountHasBeenSet() const { return m_maxTaskCountHasBeenSet; }
  inline void SetMaxTaskCount(int value) {
    m_maxTaskCountHasBeenSet = true;
    m_maxTaskCount = value;
  }
  inline ExpressGatewayScalingTarget& WithMaxTaskCount(int value) {
    SetMaxTaskCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metric used for auto-scaling decisions. The default metric used for an
   * Express service is <code>CPUUtilization</code>.</p>
   */
  inline ExpressGatewayServiceScalingMetric GetAutoScalingMetric() const { return m_autoScalingMetric; }
  inline bool AutoScalingMetricHasBeenSet() const { return m_autoScalingMetricHasBeenSet; }
  inline void SetAutoScalingMetric(ExpressGatewayServiceScalingMetric value) {
    m_autoScalingMetricHasBeenSet = true;
    m_autoScalingMetric = value;
  }
  inline ExpressGatewayScalingTarget& WithAutoScalingMetric(ExpressGatewayServiceScalingMetric value) {
    SetAutoScalingMetric(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target value for the auto-scaling metric. The default value for an
   * Express service is 60.</p>
   */
  inline int GetAutoScalingTargetValue() const { return m_autoScalingTargetValue; }
  inline bool AutoScalingTargetValueHasBeenSet() const { return m_autoScalingTargetValueHasBeenSet; }
  inline void SetAutoScalingTargetValue(int value) {
    m_autoScalingTargetValueHasBeenSet = true;
    m_autoScalingTargetValue = value;
  }
  inline ExpressGatewayScalingTarget& WithAutoScalingTargetValue(int value) {
    SetAutoScalingTargetValue(value);
    return *this;
  }
  ///@}
 private:
  int m_minTaskCount{0};
  bool m_minTaskCountHasBeenSet = false;

  int m_maxTaskCount{0};
  bool m_maxTaskCountHasBeenSet = false;

  ExpressGatewayServiceScalingMetric m_autoScalingMetric{ExpressGatewayServiceScalingMetric::NOT_SET};
  bool m_autoScalingMetricHasBeenSet = false;

  int m_autoScalingTargetValue{0};
  bool m_autoScalingTargetValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
