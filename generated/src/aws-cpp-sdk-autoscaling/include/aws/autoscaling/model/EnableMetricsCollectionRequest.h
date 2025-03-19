/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class EnableMetricsCollectionRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API EnableMetricsCollectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableMetricsCollection"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    EnableMetricsCollectionRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the metrics to enable.</p> <p>You can specify one or more of the
     * following metrics:</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li>
     * <p> <code>GroupMaxSize</code> </p> </li> <li> <p>
     * <code>GroupDesiredCapacity</code> </p> </li> <li> <p>
     * <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> <li> <p>
     * <code>GroupInServiceCapacity</code> </p> </li> <li> <p>
     * <code>GroupPendingCapacity</code> </p> </li> <li> <p>
     * <code>GroupStandbyCapacity</code> </p> </li> <li> <p>
     * <code>GroupTerminatingCapacity</code> </p> </li> <li> <p>
     * <code>GroupTotalCapacity</code> </p> </li> <li> <p>
     * <code>WarmPoolDesiredCapacity</code> </p> </li> <li> <p>
     * <code>WarmPoolWarmedCapacity</code> </p> </li> <li> <p>
     * <code>WarmPoolPendingCapacity</code> </p> </li> <li> <p>
     * <code>WarmPoolTerminatingCapacity</code> </p> </li> <li> <p>
     * <code>WarmPoolTotalCapacity</code> </p> </li> <li> <p>
     * <code>GroupAndWarmPoolDesiredCapacity</code> </p> </li> <li> <p>
     * <code>GroupAndWarmPoolTotalCapacity</code> </p> </li> </ul> <p>If you specify
     * <code>Granularity</code> and don't specify any metrics, all metrics are
     * enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-metrics.html">Amazon
     * CloudWatch metrics for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<Aws::String>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<Aws::String>>
    EnableMetricsCollectionRequest& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = Aws::String>
    EnableMetricsCollectionRequest& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The frequency at which Amazon EC2 Auto Scaling sends aggregated data to
     * CloudWatch. The only valid value is <code>1Minute</code>.</p>
     */
    inline const Aws::String& GetGranularity() const { return m_granularity; }
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
    template<typename GranularityT = Aws::String>
    void SetGranularity(GranularityT&& value) { m_granularityHasBeenSet = true; m_granularity = std::forward<GranularityT>(value); }
    template<typename GranularityT = Aws::String>
    EnableMetricsCollectionRequest& WithGranularity(GranularityT&& value) { SetGranularity(std::forward<GranularityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_granularity;
    bool m_granularityHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
