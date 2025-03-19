/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/MetricType.h>
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
   * <p>Represents a predefined metric for a target tracking scaling policy to use
   * with Amazon EC2 Auto Scaling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PredefinedMetricSpecification">AWS
   * API Reference</a></p>
   */
  class PredefinedMetricSpecification
  {
  public:
    AWS_AUTOSCALING_API PredefinedMetricSpecification() = default;
    AWS_AUTOSCALING_API PredefinedMetricSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API PredefinedMetricSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The metric type. The following predefined metrics are available:</p> <ul>
     * <li> <p> <code>ASGAverageCPUUtilization</code> - Average CPU utilization of the
     * Auto Scaling group.</p> </li> <li> <p> <code>ASGAverageNetworkIn</code> -
     * Average number of bytes received on all network interfaces by the Auto Scaling
     * group.</p> </li> <li> <p> <code>ASGAverageNetworkOut</code> - Average number of
     * bytes sent out on all network interfaces by the Auto Scaling group.</p> </li>
     * <li> <p> <code>ALBRequestCountPerTarget</code> - Average Application Load
     * Balancer request count per target for your Auto Scaling group.</p> </li> </ul>
     */
    inline MetricType GetPredefinedMetricType() const { return m_predefinedMetricType; }
    inline bool PredefinedMetricTypeHasBeenSet() const { return m_predefinedMetricTypeHasBeenSet; }
    inline void SetPredefinedMetricType(MetricType value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = value; }
    inline PredefinedMetricSpecification& WithPredefinedMetricType(MetricType value) { SetPredefinedMetricType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A label that uniquely identifies a specific Application Load Balancer target
     * group from which to determine the average request count served by your Auto
     * Scaling group. You can't specify a resource label unless the target group is
     * attached to the Auto Scaling group.</p> <p>You create the resource label by
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
} // namespace AutoScaling
} // namespace Aws
