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
    AWS_FINSPACE_API AutoScalingConfiguration();
    AWS_FINSPACE_API AutoScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API AutoScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The lowest number of nodes to scale. This value must be at least 1 and less
     * than the <code>maxNodeCount</code>. If the nodes in a cluster belong to multiple
     * availability zones, then <code>minNodeCount</code> must be at least 3.</p>
     */
    inline int GetMinNodeCount() const{ return m_minNodeCount; }

    /**
     * <p>The lowest number of nodes to scale. This value must be at least 1 and less
     * than the <code>maxNodeCount</code>. If the nodes in a cluster belong to multiple
     * availability zones, then <code>minNodeCount</code> must be at least 3.</p>
     */
    inline bool MinNodeCountHasBeenSet() const { return m_minNodeCountHasBeenSet; }

    /**
     * <p>The lowest number of nodes to scale. This value must be at least 1 and less
     * than the <code>maxNodeCount</code>. If the nodes in a cluster belong to multiple
     * availability zones, then <code>minNodeCount</code> must be at least 3.</p>
     */
    inline void SetMinNodeCount(int value) { m_minNodeCountHasBeenSet = true; m_minNodeCount = value; }

    /**
     * <p>The lowest number of nodes to scale. This value must be at least 1 and less
     * than the <code>maxNodeCount</code>. If the nodes in a cluster belong to multiple
     * availability zones, then <code>minNodeCount</code> must be at least 3.</p>
     */
    inline AutoScalingConfiguration& WithMinNodeCount(int value) { SetMinNodeCount(value); return *this;}


    /**
     * <p>The highest number of nodes to scale. This value cannot be greater than
     * 5.</p>
     */
    inline int GetMaxNodeCount() const{ return m_maxNodeCount; }

    /**
     * <p>The highest number of nodes to scale. This value cannot be greater than
     * 5.</p>
     */
    inline bool MaxNodeCountHasBeenSet() const { return m_maxNodeCountHasBeenSet; }

    /**
     * <p>The highest number of nodes to scale. This value cannot be greater than
     * 5.</p>
     */
    inline void SetMaxNodeCount(int value) { m_maxNodeCountHasBeenSet = true; m_maxNodeCount = value; }

    /**
     * <p>The highest number of nodes to scale. This value cannot be greater than
     * 5.</p>
     */
    inline AutoScalingConfiguration& WithMaxNodeCount(int value) { SetMaxNodeCount(value); return *this;}


    /**
     * <p> The metric your cluster will track in order to scale in and out. For
     * example, <code>CPU_UTILIZATION_PERCENTAGE</code> is the average CPU usage across
     * all the nodes in a cluster.</p>
     */
    inline const AutoScalingMetric& GetAutoScalingMetric() const{ return m_autoScalingMetric; }

    /**
     * <p> The metric your cluster will track in order to scale in and out. For
     * example, <code>CPU_UTILIZATION_PERCENTAGE</code> is the average CPU usage across
     * all the nodes in a cluster.</p>
     */
    inline bool AutoScalingMetricHasBeenSet() const { return m_autoScalingMetricHasBeenSet; }

    /**
     * <p> The metric your cluster will track in order to scale in and out. For
     * example, <code>CPU_UTILIZATION_PERCENTAGE</code> is the average CPU usage across
     * all the nodes in a cluster.</p>
     */
    inline void SetAutoScalingMetric(const AutoScalingMetric& value) { m_autoScalingMetricHasBeenSet = true; m_autoScalingMetric = value; }

    /**
     * <p> The metric your cluster will track in order to scale in and out. For
     * example, <code>CPU_UTILIZATION_PERCENTAGE</code> is the average CPU usage across
     * all the nodes in a cluster.</p>
     */
    inline void SetAutoScalingMetric(AutoScalingMetric&& value) { m_autoScalingMetricHasBeenSet = true; m_autoScalingMetric = std::move(value); }

    /**
     * <p> The metric your cluster will track in order to scale in and out. For
     * example, <code>CPU_UTILIZATION_PERCENTAGE</code> is the average CPU usage across
     * all the nodes in a cluster.</p>
     */
    inline AutoScalingConfiguration& WithAutoScalingMetric(const AutoScalingMetric& value) { SetAutoScalingMetric(value); return *this;}

    /**
     * <p> The metric your cluster will track in order to scale in and out. For
     * example, <code>CPU_UTILIZATION_PERCENTAGE</code> is the average CPU usage across
     * all the nodes in a cluster.</p>
     */
    inline AutoScalingConfiguration& WithAutoScalingMetric(AutoScalingMetric&& value) { SetAutoScalingMetric(std::move(value)); return *this;}


    /**
     * <p>The desired value of the chosen <code>autoScalingMetric</code>. When the
     * metric drops below this value, the cluster will scale in. When the metric goes
     * above this value, the cluster will scale out. You can set the target value
     * between 1 and 100 percent.</p>
     */
    inline double GetMetricTarget() const{ return m_metricTarget; }

    /**
     * <p>The desired value of the chosen <code>autoScalingMetric</code>. When the
     * metric drops below this value, the cluster will scale in. When the metric goes
     * above this value, the cluster will scale out. You can set the target value
     * between 1 and 100 percent.</p>
     */
    inline bool MetricTargetHasBeenSet() const { return m_metricTargetHasBeenSet; }

    /**
     * <p>The desired value of the chosen <code>autoScalingMetric</code>. When the
     * metric drops below this value, the cluster will scale in. When the metric goes
     * above this value, the cluster will scale out. You can set the target value
     * between 1 and 100 percent.</p>
     */
    inline void SetMetricTarget(double value) { m_metricTargetHasBeenSet = true; m_metricTarget = value; }

    /**
     * <p>The desired value of the chosen <code>autoScalingMetric</code>. When the
     * metric drops below this value, the cluster will scale in. When the metric goes
     * above this value, the cluster will scale out. You can set the target value
     * between 1 and 100 percent.</p>
     */
    inline AutoScalingConfiguration& WithMetricTarget(double value) { SetMetricTarget(value); return *this;}


    /**
     * <p>The duration in seconds that FinSpace will wait after a scale in event before
     * initiating another scaling event.</p>
     */
    inline double GetScaleInCooldownSeconds() const{ return m_scaleInCooldownSeconds; }

    /**
     * <p>The duration in seconds that FinSpace will wait after a scale in event before
     * initiating another scaling event.</p>
     */
    inline bool ScaleInCooldownSecondsHasBeenSet() const { return m_scaleInCooldownSecondsHasBeenSet; }

    /**
     * <p>The duration in seconds that FinSpace will wait after a scale in event before
     * initiating another scaling event.</p>
     */
    inline void SetScaleInCooldownSeconds(double value) { m_scaleInCooldownSecondsHasBeenSet = true; m_scaleInCooldownSeconds = value; }

    /**
     * <p>The duration in seconds that FinSpace will wait after a scale in event before
     * initiating another scaling event.</p>
     */
    inline AutoScalingConfiguration& WithScaleInCooldownSeconds(double value) { SetScaleInCooldownSeconds(value); return *this;}


    /**
     * <p>The duration in seconds that FinSpace will wait after a scale out event
     * before initiating another scaling event.</p>
     */
    inline double GetScaleOutCooldownSeconds() const{ return m_scaleOutCooldownSeconds; }

    /**
     * <p>The duration in seconds that FinSpace will wait after a scale out event
     * before initiating another scaling event.</p>
     */
    inline bool ScaleOutCooldownSecondsHasBeenSet() const { return m_scaleOutCooldownSecondsHasBeenSet; }

    /**
     * <p>The duration in seconds that FinSpace will wait after a scale out event
     * before initiating another scaling event.</p>
     */
    inline void SetScaleOutCooldownSeconds(double value) { m_scaleOutCooldownSecondsHasBeenSet = true; m_scaleOutCooldownSeconds = value; }

    /**
     * <p>The duration in seconds that FinSpace will wait after a scale out event
     * before initiating another scaling event.</p>
     */
    inline AutoScalingConfiguration& WithScaleOutCooldownSeconds(double value) { SetScaleOutCooldownSeconds(value); return *this;}

  private:

    int m_minNodeCount;
    bool m_minNodeCountHasBeenSet = false;

    int m_maxNodeCount;
    bool m_maxNodeCountHasBeenSet = false;

    AutoScalingMetric m_autoScalingMetric;
    bool m_autoScalingMetricHasBeenSet = false;

    double m_metricTarget;
    bool m_metricTargetHasBeenSet = false;

    double m_scaleInCooldownSeconds;
    bool m_scaleInCooldownSecondsHasBeenSet = false;

    double m_scaleOutCooldownSeconds;
    bool m_scaleOutCooldownSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
