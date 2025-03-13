/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/model/MetricType.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p>Represents a predefined metric for a target tracking scaling policy to use
   * with Application Auto Scaling.</p> <p>For more information, <a
   * href="https://docs.aws.amazon.com/autoscaling/application/userguide/monitoring-cloudwatch.html#predefined-metrics">Predefined
   * metrics for target tracking scaling policies</a> in the <i>Application Auto
   * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PredefinedMetricSpecification">AWS
   * API Reference</a></p>
   */
  class PredefinedMetricSpecification
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API PredefinedMetricSpecification() = default;
    AWS_APPLICATIONAUTOSCALING_API PredefinedMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API PredefinedMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Spot Fleets and ECS services.</p>
     */
    inline MetricType GetPredefinedMetricType() const { return m_predefinedMetricType; }
    inline bool PredefinedMetricTypeHasBeenSet() const { return m_predefinedMetricTypeHasBeenSet; }
    inline void SetPredefinedMetricType(MetricType value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = value; }
    inline PredefinedMetricSpecification& WithPredefinedMetricType(MetricType value) { SetPredefinedMetricType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group attached to the Spot Fleet or ECS service.</p>
     * <p>You create the resource label by appending the final portion of the load
     * balancer ARN and the final portion of the target group ARN into a single value,
     * separated by a forward slash (/). The format of the resource label is:</p> <p>
     * <code>app/my-alb/778d41231b141a0f/targetgroup/my-alb-target-group/943f017f100becff</code>.</p>
     * <p>Where:</p> <ul> <li>
     * <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt; is the final portion
     * of the load balancer ARN</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul> <p>To find the ARN for an
     * Application Load Balancer, use the <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/APIReference/API_DescribeLoadBalancers.html">DescribeLoadBalancers</a>
     * API operation. To find the ARN for the target group, use the <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/APIReference/API_DescribeTargetGroups.html">DescribeTargetGroups</a>
     * API operation.</p>
     */
    inline const Aws::String& GetResourceLabel() const { return m_resourceLabel; }
    inline bool ResourceLabelHasBeenSet() const { return m_resourceLabelHasBeenSet; }
    template<typename ResourceLabelT = Aws::String>
    void SetResourceLabel(ResourceLabelT&& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = std::forward<ResourceLabelT>(value); }
    template<typename ResourceLabelT = Aws::String>
    PredefinedMetricSpecification& WithResourceLabel(ResourceLabelT&& value) { SetResourceLabel(std::forward<ResourceLabelT>(value)); return *this;}
    ///@}
  private:

    MetricType m_predefinedMetricType{MetricType::NOT_SET};
    bool m_predefinedMetricTypeHasBeenSet = false;

    Aws::String m_resourceLabel;
    bool m_resourceLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
