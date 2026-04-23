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
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/autoscaling-plans/model/ScalingMetricType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AutoScalingPlans
{
namespace Model
{

  /**
   * <p>Represents a predefined metric that can be used for dynamic scaling as part
   * of a target tracking scaling policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/PredefinedScalingMetricSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALINGPLANS_API PredefinedScalingMetricSpecification
  {
  public:
    PredefinedScalingMetricSpecification();
    PredefinedScalingMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    PredefinedScalingMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Auto Scaling groups, Spot Fleet requests, and ECS services.</p>
     */
    inline const ScalingMetricType& GetPredefinedScalingMetricType() const{ return m_predefinedScalingMetricType; }

    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Auto Scaling groups, Spot Fleet requests, and ECS services.</p>
     */
    inline bool PredefinedScalingMetricTypeHasBeenSet() const { return m_predefinedScalingMetricTypeHasBeenSet; }

    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Auto Scaling groups, Spot Fleet requests, and ECS services.</p>
     */
    inline void SetPredefinedScalingMetricType(const ScalingMetricType& value) { m_predefinedScalingMetricTypeHasBeenSet = true; m_predefinedScalingMetricType = value; }

    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Auto Scaling groups, Spot Fleet requests, and ECS services.</p>
     */
    inline void SetPredefinedScalingMetricType(ScalingMetricType&& value) { m_predefinedScalingMetricTypeHasBeenSet = true; m_predefinedScalingMetricType = std::move(value); }

    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Auto Scaling groups, Spot Fleet requests, and ECS services.</p>
     */
    inline PredefinedScalingMetricSpecification& WithPredefinedScalingMetricType(const ScalingMetricType& value) { SetPredefinedScalingMetricType(value); return *this;}

    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Auto Scaling groups, Spot Fleet requests, and ECS services.</p>
     */
    inline PredefinedScalingMetricSpecification& WithPredefinedScalingMetricType(ScalingMetricType&& value) { SetPredefinedScalingMetricType(std::move(value)); return *this;}


    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group for an Application Load Balancer attached to the
     * Auto Scaling group, Spot Fleet request, or ECS service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN.</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline const Aws::String& GetResourceLabel() const{ return m_resourceLabel; }

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group for an Application Load Balancer attached to the
     * Auto Scaling group, Spot Fleet request, or ECS service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN.</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline bool ResourceLabelHasBeenSet() const { return m_resourceLabelHasBeenSet; }

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group for an Application Load Balancer attached to the
     * Auto Scaling group, Spot Fleet request, or ECS service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN.</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline void SetResourceLabel(const Aws::String& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = value; }

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group for an Application Load Balancer attached to the
     * Auto Scaling group, Spot Fleet request, or ECS service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN.</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline void SetResourceLabel(Aws::String&& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = std::move(value); }

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group for an Application Load Balancer attached to the
     * Auto Scaling group, Spot Fleet request, or ECS service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN.</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline void SetResourceLabel(const char* value) { m_resourceLabelHasBeenSet = true; m_resourceLabel.assign(value); }

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group for an Application Load Balancer attached to the
     * Auto Scaling group, Spot Fleet request, or ECS service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN.</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline PredefinedScalingMetricSpecification& WithResourceLabel(const Aws::String& value) { SetResourceLabel(value); return *this;}

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group for an Application Load Balancer attached to the
     * Auto Scaling group, Spot Fleet request, or ECS service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN.</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline PredefinedScalingMetricSpecification& WithResourceLabel(Aws::String&& value) { SetResourceLabel(std::move(value)); return *this;}

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group for an Application Load Balancer attached to the
     * Auto Scaling group, Spot Fleet request, or ECS service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN.</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline PredefinedScalingMetricSpecification& WithResourceLabel(const char* value) { SetResourceLabel(value); return *this;}

  private:

    ScalingMetricType m_predefinedScalingMetricType;
    bool m_predefinedScalingMetricTypeHasBeenSet;

    Aws::String m_resourceLabel;
    bool m_resourceLabelHasBeenSet;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
