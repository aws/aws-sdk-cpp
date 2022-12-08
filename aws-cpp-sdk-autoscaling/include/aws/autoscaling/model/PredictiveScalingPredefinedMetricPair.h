/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/PredefinedMetricPairType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents a metric pair for a predictive scaling policy. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PredictiveScalingPredefinedMetricPair">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingPredefinedMetricPair
  {
  public:
    AWS_AUTOSCALING_API PredictiveScalingPredefinedMetricPair();
    AWS_AUTOSCALING_API PredictiveScalingPredefinedMetricPair(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API PredictiveScalingPredefinedMetricPair& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates which metrics to use. There are two different types of metrics for
     * each metric type: one is a load metric and one is a scaling metric. For example,
     * if the metric type is <code>ASGCPUUtilization</code>, the Auto Scaling group's
     * total CPU metric is used as the load metric, and the average CPU metric is used
     * for the scaling metric.</p>
     */
    inline const PredefinedMetricPairType& GetPredefinedMetricType() const{ return m_predefinedMetricType; }

    /**
     * <p>Indicates which metrics to use. There are two different types of metrics for
     * each metric type: one is a load metric and one is a scaling metric. For example,
     * if the metric type is <code>ASGCPUUtilization</code>, the Auto Scaling group's
     * total CPU metric is used as the load metric, and the average CPU metric is used
     * for the scaling metric.</p>
     */
    inline bool PredefinedMetricTypeHasBeenSet() const { return m_predefinedMetricTypeHasBeenSet; }

    /**
     * <p>Indicates which metrics to use. There are two different types of metrics for
     * each metric type: one is a load metric and one is a scaling metric. For example,
     * if the metric type is <code>ASGCPUUtilization</code>, the Auto Scaling group's
     * total CPU metric is used as the load metric, and the average CPU metric is used
     * for the scaling metric.</p>
     */
    inline void SetPredefinedMetricType(const PredefinedMetricPairType& value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = value; }

    /**
     * <p>Indicates which metrics to use. There are two different types of metrics for
     * each metric type: one is a load metric and one is a scaling metric. For example,
     * if the metric type is <code>ASGCPUUtilization</code>, the Auto Scaling group's
     * total CPU metric is used as the load metric, and the average CPU metric is used
     * for the scaling metric.</p>
     */
    inline void SetPredefinedMetricType(PredefinedMetricPairType&& value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = std::move(value); }

    /**
     * <p>Indicates which metrics to use. There are two different types of metrics for
     * each metric type: one is a load metric and one is a scaling metric. For example,
     * if the metric type is <code>ASGCPUUtilization</code>, the Auto Scaling group's
     * total CPU metric is used as the load metric, and the average CPU metric is used
     * for the scaling metric.</p>
     */
    inline PredictiveScalingPredefinedMetricPair& WithPredefinedMetricType(const PredefinedMetricPairType& value) { SetPredefinedMetricType(value); return *this;}

    /**
     * <p>Indicates which metrics to use. There are two different types of metrics for
     * each metric type: one is a load metric and one is a scaling metric. For example,
     * if the metric type is <code>ASGCPUUtilization</code>, the Auto Scaling group's
     * total CPU metric is used as the load metric, and the average CPU metric is used
     * for the scaling metric.</p>
     */
    inline PredictiveScalingPredefinedMetricPair& WithPredefinedMetricType(PredefinedMetricPairType&& value) { SetPredefinedMetricType(std::move(value)); return *this;}


    /**
     * <p>A label that uniquely identifies a specific Application Load Balancer target
     * group from which to determine the total and average request count served by your
     * Auto Scaling group. You can't specify a resource label unless the target group
     * is attached to the Auto Scaling group.</p> <p>You create the resource label by
     * appending the final portion of the load balancer ARN and the final portion of
     * the target group ARN into a single value, separated by a forward slash (/). The
     * format of the resource label is:</p> <p>
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
    inline const Aws::String& GetResourceLabel() const{ return m_resourceLabel; }

    /**
     * <p>A label that uniquely identifies a specific Application Load Balancer target
     * group from which to determine the total and average request count served by your
     * Auto Scaling group. You can't specify a resource label unless the target group
     * is attached to the Auto Scaling group.</p> <p>You create the resource label by
     * appending the final portion of the load balancer ARN and the final portion of
     * the target group ARN into a single value, separated by a forward slash (/). The
     * format of the resource label is:</p> <p>
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
    inline bool ResourceLabelHasBeenSet() const { return m_resourceLabelHasBeenSet; }

    /**
     * <p>A label that uniquely identifies a specific Application Load Balancer target
     * group from which to determine the total and average request count served by your
     * Auto Scaling group. You can't specify a resource label unless the target group
     * is attached to the Auto Scaling group.</p> <p>You create the resource label by
     * appending the final portion of the load balancer ARN and the final portion of
     * the target group ARN into a single value, separated by a forward slash (/). The
     * format of the resource label is:</p> <p>
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
    inline void SetResourceLabel(const Aws::String& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = value; }

    /**
     * <p>A label that uniquely identifies a specific Application Load Balancer target
     * group from which to determine the total and average request count served by your
     * Auto Scaling group. You can't specify a resource label unless the target group
     * is attached to the Auto Scaling group.</p> <p>You create the resource label by
     * appending the final portion of the load balancer ARN and the final portion of
     * the target group ARN into a single value, separated by a forward slash (/). The
     * format of the resource label is:</p> <p>
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
    inline void SetResourceLabel(Aws::String&& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = std::move(value); }

    /**
     * <p>A label that uniquely identifies a specific Application Load Balancer target
     * group from which to determine the total and average request count served by your
     * Auto Scaling group. You can't specify a resource label unless the target group
     * is attached to the Auto Scaling group.</p> <p>You create the resource label by
     * appending the final portion of the load balancer ARN and the final portion of
     * the target group ARN into a single value, separated by a forward slash (/). The
     * format of the resource label is:</p> <p>
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
    inline void SetResourceLabel(const char* value) { m_resourceLabelHasBeenSet = true; m_resourceLabel.assign(value); }

    /**
     * <p>A label that uniquely identifies a specific Application Load Balancer target
     * group from which to determine the total and average request count served by your
     * Auto Scaling group. You can't specify a resource label unless the target group
     * is attached to the Auto Scaling group.</p> <p>You create the resource label by
     * appending the final portion of the load balancer ARN and the final portion of
     * the target group ARN into a single value, separated by a forward slash (/). The
     * format of the resource label is:</p> <p>
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
    inline PredictiveScalingPredefinedMetricPair& WithResourceLabel(const Aws::String& value) { SetResourceLabel(value); return *this;}

    /**
     * <p>A label that uniquely identifies a specific Application Load Balancer target
     * group from which to determine the total and average request count served by your
     * Auto Scaling group. You can't specify a resource label unless the target group
     * is attached to the Auto Scaling group.</p> <p>You create the resource label by
     * appending the final portion of the load balancer ARN and the final portion of
     * the target group ARN into a single value, separated by a forward slash (/). The
     * format of the resource label is:</p> <p>
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
    inline PredictiveScalingPredefinedMetricPair& WithResourceLabel(Aws::String&& value) { SetResourceLabel(std::move(value)); return *this;}

    /**
     * <p>A label that uniquely identifies a specific Application Load Balancer target
     * group from which to determine the total and average request count served by your
     * Auto Scaling group. You can't specify a resource label unless the target group
     * is attached to the Auto Scaling group.</p> <p>You create the resource label by
     * appending the final portion of the load balancer ARN and the final portion of
     * the target group ARN into a single value, separated by a forward slash (/). The
     * format of the resource label is:</p> <p>
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
    inline PredictiveScalingPredefinedMetricPair& WithResourceLabel(const char* value) { SetResourceLabel(value); return *this;}

  private:

    PredefinedMetricPairType m_predefinedMetricType;
    bool m_predefinedMetricTypeHasBeenSet = false;

    Aws::String m_resourceLabel;
    bool m_resourceLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
