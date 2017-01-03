﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for EnableMetricsCollection.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnableMetricsCollectionQuery">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API EnableMetricsCollectionRequest : public AutoScalingRequest
  {
  public:
    EnableMetricsCollectionRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name or ARN of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name or ARN of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name or ARN of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name or ARN of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name or ARN of the Auto Scaling group.</p>
     */
    inline EnableMetricsCollectionRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name or ARN of the Auto Scaling group.</p>
     */
    inline EnableMetricsCollectionRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name or ARN of the Auto Scaling group.</p>
     */
    inline EnableMetricsCollectionRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are enabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
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
     * are enabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
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
     * are enabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline void SetMetrics(Aws::Vector<Aws::String>&& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are enabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline EnableMetricsCollectionRequest& WithMetrics(const Aws::Vector<Aws::String>& value) { SetMetrics(value); return *this;}

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are enabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline EnableMetricsCollectionRequest& WithMetrics(Aws::Vector<Aws::String>&& value) { SetMetrics(value); return *this;}

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are enabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline EnableMetricsCollectionRequest& AddMetrics(const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are enabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline EnableMetricsCollectionRequest& AddMetrics(Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>One or more of the following metrics. If you omit this parameter, all metrics
     * are enabled.</p> <ul> <li> <p> <code>GroupMinSize</code> </p> </li> <li> <p>
     * <code>GroupMaxSize</code> </p> </li> <li> <p> <code>GroupDesiredCapacity</code>
     * </p> </li> <li> <p> <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline EnableMetricsCollectionRequest& AddMetrics(const char* value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>The granularity to associate with the metrics to collect. The only valid
     * value is <code>1Minute</code>.</p>
     */
    inline const Aws::String& GetGranularity() const{ return m_granularity; }

    /**
     * <p>The granularity to associate with the metrics to collect. The only valid
     * value is <code>1Minute</code>.</p>
     */
    inline void SetGranularity(const Aws::String& value) { m_granularityHasBeenSet = true; m_granularity = value; }

    /**
     * <p>The granularity to associate with the metrics to collect. The only valid
     * value is <code>1Minute</code>.</p>
     */
    inline void SetGranularity(Aws::String&& value) { m_granularityHasBeenSet = true; m_granularity = value; }

    /**
     * <p>The granularity to associate with the metrics to collect. The only valid
     * value is <code>1Minute</code>.</p>
     */
    inline void SetGranularity(const char* value) { m_granularityHasBeenSet = true; m_granularity.assign(value); }

    /**
     * <p>The granularity to associate with the metrics to collect. The only valid
     * value is <code>1Minute</code>.</p>
     */
    inline EnableMetricsCollectionRequest& WithGranularity(const Aws::String& value) { SetGranularity(value); return *this;}

    /**
     * <p>The granularity to associate with the metrics to collect. The only valid
     * value is <code>1Minute</code>.</p>
     */
    inline EnableMetricsCollectionRequest& WithGranularity(Aws::String&& value) { SetGranularity(value); return *this;}

    /**
     * <p>The granularity to associate with the metrics to collect. The only valid
     * value is <code>1Minute</code>.</p>
     */
    inline EnableMetricsCollectionRequest& WithGranularity(const char* value) { SetGranularity(value); return *this;}

  private:
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::Vector<Aws::String> m_metrics;
    bool m_metricsHasBeenSet;
    Aws::String m_granularity;
    bool m_granularityHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
