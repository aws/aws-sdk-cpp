/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/model/AutoScalingMetric.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>The configuration based on which FinSpace will scale in or scale out nodes in
   * your cluster. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/AutoScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class AutoScalingConfiguration
  {
  public:
    AWS_FINSPACE_API AutoScalingConfiguration() = default;
    AWS_FINSPACE_API AutoScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API AutoScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lowest number of nodes to scale. This value must be at least 1 and less
     * than the <code>maxNodeCount</code>. If the nodes in a cluster belong to multiple
     * availability zones, then <code>minNodeCount</code> must be at least 3.</p>
     */
    inline int GetMinNodeCount() const { return m_minNodeCount; }
    inline bool MinNodeCountHasBeenSet() const { return m_minNodeCountHasBeenSet; }
    inline void SetMinNodeCount(int value) { m_minNodeCountHasBeenSet = true; m_minNodeCount = value; }
    inline AutoScalingConfiguration& WithMinNodeCount(int value) { SetMinNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highest number of nodes to scale. This value cannot be greater than
     * 5.</p>
     */
    inline int GetMaxNodeCount() const { return m_maxNodeCount; }
    inline bool MaxNodeCountHasBeenSet() const { return m_maxNodeCountHasBeenSet; }
    inline void SetMaxNodeCount(int value) { m_maxNodeCountHasBeenSet = true; m_maxNodeCount = value; }
    inline AutoScalingConfiguration& WithMaxNodeCount(int value) { SetMaxNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The metric your cluster will track in order to scale in and out. For
     * example, <code>CPU_UTILIZATION_PERCENTAGE</code> is the average CPU usage across
     * all the nodes in a cluster.</p>
     */
    inline AutoScalingMetric GetAutoScalingMetric() const { return m_autoScalingMetric; }
    inline bool AutoScalingMetricHasBeenSet() const { return m_autoScalingMetricHasBeenSet; }
    inline void SetAutoScalingMetric(AutoScalingMetric value) { m_autoScalingMetricHasBeenSet = true; m_autoScalingMetric = value; }
    inline AutoScalingConfiguration& WithAutoScalingMetric(AutoScalingMetric value) { SetAutoScalingMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired value of the chosen <code>autoScalingMetric</code>. When the
     * metric drops below this value, the cluster will scale in. When the metric goes
     * above this value, the cluster will scale out. You can set the target value
     * between 1 and 100 percent.</p>
     */
    inline double GetMetricTarget() const { return m_metricTarget; }
    inline bool MetricTargetHasBeenSet() const { return m_metricTargetHasBeenSet; }
    inline void SetMetricTarget(double value) { m_metricTargetHasBeenSet = true; m_metricTarget = value; }
    inline AutoScalingConfiguration& WithMetricTarget(double value) { SetMetricTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration in seconds that FinSpace will wait after a scale in event before
     * initiating another scaling event.</p>
     */
    inline double GetScaleInCooldownSeconds() const { return m_scaleInCooldownSeconds; }
    inline bool ScaleInCooldownSecondsHasBeenSet() const { return m_scaleInCooldownSecondsHasBeenSet; }
    inline void SetScaleInCooldownSeconds(double value) { m_scaleInCooldownSecondsHasBeenSet = true; m_scaleInCooldownSeconds = value; }
    inline AutoScalingConfiguration& WithScaleInCooldownSeconds(double value) { SetScaleInCooldownSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration in seconds that FinSpace will wait after a scale out event
     * before initiating another scaling event.</p>
     */
    inline double GetScaleOutCooldownSeconds() const { return m_scaleOutCooldownSeconds; }
    inline bool ScaleOutCooldownSecondsHasBeenSet() const { return m_scaleOutCooldownSecondsHasBeenSet; }
    inline void SetScaleOutCooldownSeconds(double value) { m_scaleOutCooldownSecondsHasBeenSet = true; m_scaleOutCooldownSeconds = value; }
    inline AutoScalingConfiguration& WithScaleOutCooldownSeconds(double value) { SetScaleOutCooldownSeconds(value); return *this;}
    ///@}
  private:

    int m_minNodeCount{0};
    bool m_minNodeCountHasBeenSet = false;

    int m_maxNodeCount{0};
    bool m_maxNodeCountHasBeenSet = false;

    AutoScalingMetric m_autoScalingMetric{AutoScalingMetric::NOT_SET};
    bool m_autoScalingMetricHasBeenSet = false;

    double m_metricTarget{0.0};
    bool m_metricTargetHasBeenSet = false;

    double m_scaleInCooldownSeconds{0.0};
    bool m_scaleInCooldownSecondsHasBeenSet = false;

    double m_scaleOutCooldownSeconds{0.0};
    bool m_scaleOutCooldownSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
