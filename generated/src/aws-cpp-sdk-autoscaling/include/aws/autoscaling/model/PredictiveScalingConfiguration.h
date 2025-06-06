﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/PredictiveScalingMode.h>
#include <aws/autoscaling/model/PredictiveScalingMaxCapacityBreachBehavior.h>
#include <aws/autoscaling/model/PredictiveScalingMetricSpecification.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Represents a predictive scaling policy configuration to use with Amazon EC2
   * Auto Scaling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PredictiveScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingConfiguration
  {
  public:
    AWS_AUTOSCALING_API PredictiveScalingConfiguration() = default;
    AWS_AUTOSCALING_API PredictiveScalingConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API PredictiveScalingConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>This structure includes the metrics and target utilization to use for
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
    PredictiveScalingConfiguration& WithMetricSpecifications(MetricSpecificationsT&& value) { SetMetricSpecifications(std::forward<MetricSpecificationsT>(value)); return *this;}
    template<typename MetricSpecificationsT = PredictiveScalingMetricSpecification>
    PredictiveScalingConfiguration& AddMetricSpecifications(MetricSpecificationsT&& value) { m_metricSpecificationsHasBeenSet = true; m_metricSpecifications.emplace_back(std::forward<MetricSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The predictive scaling mode. Defaults to <code>ForecastOnly</code> if not
     * specified.</p>
     */
    inline PredictiveScalingMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(PredictiveScalingMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline PredictiveScalingConfiguration& WithMode(PredictiveScalingMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, by which the instance launch time can be
     * advanced. For example, the forecast says to add capacity at 10:00 AM, and you
     * choose to pre-launch instances by 5 minutes. In that case, the instances will be
     * launched at 9:55 AM. The intention is to give resources time to be provisioned.
     * It can take a few minutes to launch an EC2 instance. The actual amount of time
     * required depends on several factors, such as the size of the instance and
     * whether there are startup scripts to complete. </p> <p>The value must be less
     * than the forecast interval duration of 3600 seconds (60 minutes). Defaults to
     * 300 seconds if not specified. </p>
     */
    inline int GetSchedulingBufferTime() const { return m_schedulingBufferTime; }
    inline bool SchedulingBufferTimeHasBeenSet() const { return m_schedulingBufferTimeHasBeenSet; }
    inline void SetSchedulingBufferTime(int value) { m_schedulingBufferTimeHasBeenSet = true; m_schedulingBufferTime = value; }
    inline PredictiveScalingConfiguration& WithSchedulingBufferTime(int value) { SetSchedulingBufferTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the behavior that should be applied if the forecast capacity
     * approaches or exceeds the maximum capacity of the Auto Scaling group. Defaults
     * to <code>HonorMaxCapacity</code> if not specified.</p> <p>The following are
     * possible values:</p> <ul> <li> <p> <code>HonorMaxCapacity</code> - Amazon EC2
     * Auto Scaling can't increase the maximum capacity of the group when the forecast
     * capacity is close to or exceeds the maximum capacity.</p> </li> <li> <p>
     * <code>IncreaseMaxCapacity</code> - Amazon EC2 Auto Scaling can increase the
     * maximum capacity of the group when the forecast capacity is close to or exceeds
     * the maximum capacity. The upper limit is determined by the forecasted capacity
     * and the value for <code>MaxCapacityBuffer</code>.</p> </li> </ul> 
     * <p>Use caution when allowing the maximum capacity to be automatically increased.
     * This can lead to more instances being launched than intended if the increased
     * maximum capacity is not monitored and managed. The increased maximum capacity
     * then becomes the new normal maximum capacity for the Auto Scaling group until
     * you manually update it. The maximum capacity does not automatically decrease
     * back to the original maximum.</p> 
     */
    inline PredictiveScalingMaxCapacityBreachBehavior GetMaxCapacityBreachBehavior() const { return m_maxCapacityBreachBehavior; }
    inline bool MaxCapacityBreachBehaviorHasBeenSet() const { return m_maxCapacityBreachBehaviorHasBeenSet; }
    inline void SetMaxCapacityBreachBehavior(PredictiveScalingMaxCapacityBreachBehavior value) { m_maxCapacityBreachBehaviorHasBeenSet = true; m_maxCapacityBreachBehavior = value; }
    inline PredictiveScalingConfiguration& WithMaxCapacityBreachBehavior(PredictiveScalingMaxCapacityBreachBehavior value) { SetMaxCapacityBreachBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the capacity buffer to use when the forecast capacity is close to
     * or exceeds the maximum capacity. The value is specified as a percentage relative
     * to the forecast capacity. For example, if the buffer is 10, this means a 10
     * percent buffer, such that if the forecast capacity is 50, and the maximum
     * capacity is 40, then the effective maximum capacity is 55.</p> <p>If set to 0,
     * Amazon EC2 Auto Scaling may scale capacity higher than the maximum capacity to
     * equal but not exceed forecast capacity. </p> <p>Required if the
     * <code>MaxCapacityBreachBehavior</code> property is set to
     * <code>IncreaseMaxCapacity</code>, and cannot be used otherwise.</p>
     */
    inline int GetMaxCapacityBuffer() const { return m_maxCapacityBuffer; }
    inline bool MaxCapacityBufferHasBeenSet() const { return m_maxCapacityBufferHasBeenSet; }
    inline void SetMaxCapacityBuffer(int value) { m_maxCapacityBufferHasBeenSet = true; m_maxCapacityBuffer = value; }
    inline PredictiveScalingConfiguration& WithMaxCapacityBuffer(int value) { SetMaxCapacityBuffer(value); return *this;}
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
} // namespace AutoScaling
} // namespace Aws
