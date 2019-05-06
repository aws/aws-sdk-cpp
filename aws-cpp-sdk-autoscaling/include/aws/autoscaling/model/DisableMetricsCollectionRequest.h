/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_AUTOSCALING_API DisableMetricsCollectionRequest : public AutoScalingRequest
  {
  public:
    DisableMetricsCollectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableMetricsCollection"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DisableMetricsCollectionRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DisableMetricsCollectionRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DisableMetricsCollectionRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are disabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are disabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are disabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline void SetMetrics(const Aws::Vector<Aws::String>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are disabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline void SetMetrics(Aws::Vector<Aws::String>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are disabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline DisableMetricsCollectionRequest& WithMetrics(const Aws::Vector<Aws::String>& value) { SetMetrics(value); return *this;}

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are disabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline DisableMetricsCollectionRequest& WithMetrics(Aws::Vector<Aws::String>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are disabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline DisableMetricsCollectionRequest& AddMetrics(const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are disabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline DisableMetricsCollectionRequest& AddMetrics(Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are disabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline DisableMetricsCollectionRequest& AddMetrics(const char* value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;

    Aws::Vector<Aws::String> m_metrics;
    bool m_metricsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
