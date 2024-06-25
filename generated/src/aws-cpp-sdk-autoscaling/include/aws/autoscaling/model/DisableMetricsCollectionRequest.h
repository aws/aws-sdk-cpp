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
  class DisableMetricsCollectionRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DisableMetricsCollectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableMetricsCollection"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }
    inline DisableMetricsCollectionRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline DisableMetricsCollectionRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline DisableMetricsCollectionRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the metrics to disable.</p> <p>You can specify one or more of the
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
     * <code>GroupAndWarmPoolTotalCapacity</code> </p> </li> </ul> <p>If you omit this
     * property, all metrics are disabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-metrics.html">Amazon
     * CloudWatch metrics for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Aws::Vector<Aws::String>& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Aws::Vector<Aws::String>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline DisableMetricsCollectionRequest& WithMetrics(const Aws::Vector<Aws::String>& value) { SetMetrics(value); return *this;}
    inline DisableMetricsCollectionRequest& WithMetrics(Aws::Vector<Aws::String>&& value) { SetMetrics(std::move(value)); return *this;}
    inline DisableMetricsCollectionRequest& AddMetrics(const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }
    inline DisableMetricsCollectionRequest& AddMetrics(Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }
    inline DisableMetricsCollectionRequest& AddMetrics(const char* value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_metrics;
    bool m_metricsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
