/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-autoscaling/model/PredictiveScalingMode.h>
#include <aws/application-autoscaling/model/PredictiveScalingMaxCapacityBreachBehavior.h>
#include <aws/application-autoscaling/model/PredictiveScalingMetricSpecification.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p> Represents a predictive scaling policy configuration. Predictive scaling is
   * supported on Amazon ECS services. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PredictiveScalingPolicyConfiguration">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingPolicyConfiguration
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingPolicyConfiguration() = default;
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingPolicyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingPolicyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> This structure includes the metrics and target utilization to use for
     * predictive scaling. </p> <p>This is an array, but we currently only support a
     * single metric specification. That is, you can specify a target value and a
     * single metric pair, or a target value and one scaling metric and one load
     * metric.</p>
     */
    inline const Aws::Vector<PredictiveScalingMetricSpecification>& GetMetricSpecifications() const { return m_metricSpecifications; }
    inline bool MetricSpecificationsHasBeenSet() const { return m_metricSpecificationsHasBeenSet; }
    template<typename MetricSpecificationsT = Aws::Vector<PredictiveScalingMetricSpecification>>
    void SetMetricSpecifications(MetricSpecificationsT&& value) { m_metricSpecificationsHasBeenSet = true; m_metricSpecifications = std::forward<MetricSpecificationsT>(value); }
    template<typename MetricSpecificationsT = Aws::Vector<PredictiveScalingMetricSpecification>>
    PredictiveScalingPolicyConfiguration& WithMetricSpecifications(MetricSpecificationsT&& value) { SetMetricSpecifications(std::forward<MetricSpecificationsT>(value)); return *this;}
    template<typename MetricSpecificationsT = PredictiveScalingMetricSpecification>
    PredictiveScalingPolicyConfiguration& AddMetricSpecifications(MetricSpecificationsT&& value) { m_metricSpecificationsHasBeenSet = true; m_metricSpecifications.emplace_back(std::forward<MetricSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The predictive scaling mode. Defaults to <code>ForecastOnly</code> if not
     * specified. </p>
     */
    inline PredictiveScalingMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(PredictiveScalingMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline PredictiveScalingPolicyConfiguration& WithMode(PredictiveScalingMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The amount of time, in seconds, that the start time can be advanced. </p>
     * <p>The value must be less than the forecast interval duration of 3600 seconds
     * (60 minutes). Defaults to 300 seconds if not specified. </p>
     */
    inline int GetSchedulingBufferTime() const { return m_schedulingBufferTime; }
    inline bool SchedulingBufferTimeHasBeenSet() const { return m_schedulingBufferTimeHasBeenSet; }
    inline void SetSchedulingBufferTime(int value) { m_schedulingBufferTimeHasBeenSet = true; m_schedulingBufferTime = value; }
    inline PredictiveScalingPolicyConfiguration& WithSchedulingBufferTime(int value) { SetSchedulingBufferTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines the behavior that should be applied if the forecast capacity
     * approaches or exceeds the maximum capacity. Defaults to
     * <code>HonorMaxCapacity</code> if not specified. </p>
     */
    inline PredictiveScalingMaxCapacityBreachBehavior GetMaxCapacityBreachBehavior() const { return m_maxCapacityBreachBehavior; }
    inline bool MaxCapacityBreachBehaviorHasBeenSet() const { return m_maxCapacityBreachBehaviorHasBeenSet; }
    inline void SetMaxCapacityBreachBehavior(PredictiveScalingMaxCapacityBreachBehavior value) { m_maxCapacityBreachBehaviorHasBeenSet = true; m_maxCapacityBreachBehavior = value; }
    inline PredictiveScalingPolicyConfiguration& WithMaxCapacityBreachBehavior(PredictiveScalingMaxCapacityBreachBehavior value) { SetMaxCapacityBreachBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size of the capacity buffer to use when the forecast capacity is close
     * to or exceeds the maximum capacity. The value is specified as a percentage
     * relative to the forecast capacity. For example, if the buffer is 10, this means
     * a 10 percent buffer, such that if the forecast capacity is 50, and the maximum
     * capacity is 40, then the effective maximum capacity is 55. </p> <p>Required if
     * the <code>MaxCapacityBreachBehavior</code> property is set to
     * <code>IncreaseMaxCapacity</code>, and cannot be used otherwise.</p>
     */
    inline int GetMaxCapacityBuffer() const { return m_maxCapacityBuffer; }
    inline bool MaxCapacityBufferHasBeenSet() const { return m_maxCapacityBufferHasBeenSet; }
    inline void SetMaxCapacityBuffer(int value) { m_maxCapacityBufferHasBeenSet = true; m_maxCapacityBuffer = value; }
    inline PredictiveScalingPolicyConfiguration& WithMaxCapacityBuffer(int value) { SetMaxCapacityBuffer(value); return *this;}
    ///@}
  private:

    Aws::Vector<PredictiveScalingMetricSpecification> m_metricSpecifications;
    bool m_metricSpecificationsHasBeenSet = false;

    PredictiveScalingMode m_mode{PredictiveScalingMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    int m_schedulingBufferTime{0};
    bool m_schedulingBufferTimeHasBeenSet = false;

    PredictiveScalingMaxCapacityBreachBehavior m_maxCapacityBreachBehavior{PredictiveScalingMaxCapacityBreachBehavior::NOT_SET};
    bool m_maxCapacityBreachBehaviorHasBeenSet = false;

    int m_maxCapacityBuffer{0};
    bool m_maxCapacityBufferHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
