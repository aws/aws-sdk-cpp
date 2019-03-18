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
  class AWS_AUTOSCALING_API PredefinedMetricSpecification
  {
  public:
    PredefinedMetricSpecification();
    PredefinedMetricSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    PredefinedMetricSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The metric type.</p>
     */
    inline const MetricType& GetPredefinedMetricType() const{ return m_predefinedMetricType; }

    /**
     * <p>The metric type.</p>
     */
    inline bool PredefinedMetricTypeHasBeenSet() const { return m_predefinedMetricTypeHasBeenSet; }

    /**
     * <p>The metric type.</p>
     */
    inline void SetPredefinedMetricType(const MetricType& value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = value; }

    /**
     * <p>The metric type.</p>
     */
    inline void SetPredefinedMetricType(MetricType&& value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = std::move(value); }

    /**
     * <p>The metric type.</p>
     */
    inline PredefinedMetricSpecification& WithPredefinedMetricType(const MetricType& value) { SetPredefinedMetricType(value); return *this;}

    /**
     * <p>The metric type.</p>
     */
    inline PredefinedMetricSpecification& WithPredefinedMetricType(MetricType&& value) { SetPredefinedMetricType(std::move(value)); return *this;}


    /**
     * <p>Identifies the resource associated with the metric type. The following
     * predefined metrics are available:</p> <ul> <li> <p>
     * <code>ASGAverageCPUUtilization</code> - Average CPU utilization of the Auto
     * Scaling group.</p> </li> <li> <p> <code>ASGAverageNetworkIn</code> - Average
     * number of bytes received on all network interfaces by the Auto Scaling
     * group.</p> </li> <li> <p> <code>ASGAverageNetworkOut</code> - Average number of
     * bytes sent out on all network interfaces by the Auto Scaling group.</p> </li>
     * <li> <p> <code>ALBRequestCountPerTarget</code> - Number of requests completed
     * per target in an Application Load Balancer or a Network Load Balancer target
     * group.</p> </li> </ul> <p>For predefined metric types
     * <code>ASGAverageCPUUtilization</code>, <code>ASGAverageNetworkIn</code>, and
     * <code>ASGAverageNetworkOut</code>, the parameter must not be specified as the
     * resource associated with the metric type is the Auto Scaling group. For
     * predefined metric type <code>ALBRequestCountPerTarget</code>, the parameter must
     * be specified in the format:
     * <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>/targetgroup/<i>target-group-name</i>/<i>target-group-id</i>
     * </code>, where <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> is the final portion of the load balancer ARN, and
     * <code>targetgroup/<i>target-group-name</i>/<i>target-group-id</i> </code> is the
     * final portion of the target group ARN. The target group must be attached to the
     * Auto Scaling group.</p>
     */
    inline const Aws::String& GetResourceLabel() const{ return m_resourceLabel; }

    /**
     * <p>Identifies the resource associated with the metric type. The following
     * predefined metrics are available:</p> <ul> <li> <p>
     * <code>ASGAverageCPUUtilization</code> - Average CPU utilization of the Auto
     * Scaling group.</p> </li> <li> <p> <code>ASGAverageNetworkIn</code> - Average
     * number of bytes received on all network interfaces by the Auto Scaling
     * group.</p> </li> <li> <p> <code>ASGAverageNetworkOut</code> - Average number of
     * bytes sent out on all network interfaces by the Auto Scaling group.</p> </li>
     * <li> <p> <code>ALBRequestCountPerTarget</code> - Number of requests completed
     * per target in an Application Load Balancer or a Network Load Balancer target
     * group.</p> </li> </ul> <p>For predefined metric types
     * <code>ASGAverageCPUUtilization</code>, <code>ASGAverageNetworkIn</code>, and
     * <code>ASGAverageNetworkOut</code>, the parameter must not be specified as the
     * resource associated with the metric type is the Auto Scaling group. For
     * predefined metric type <code>ALBRequestCountPerTarget</code>, the parameter must
     * be specified in the format:
     * <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>/targetgroup/<i>target-group-name</i>/<i>target-group-id</i>
     * </code>, where <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> is the final portion of the load balancer ARN, and
     * <code>targetgroup/<i>target-group-name</i>/<i>target-group-id</i> </code> is the
     * final portion of the target group ARN. The target group must be attached to the
     * Auto Scaling group.</p>
     */
    inline bool ResourceLabelHasBeenSet() const { return m_resourceLabelHasBeenSet; }

    /**
     * <p>Identifies the resource associated with the metric type. The following
     * predefined metrics are available:</p> <ul> <li> <p>
     * <code>ASGAverageCPUUtilization</code> - Average CPU utilization of the Auto
     * Scaling group.</p> </li> <li> <p> <code>ASGAverageNetworkIn</code> - Average
     * number of bytes received on all network interfaces by the Auto Scaling
     * group.</p> </li> <li> <p> <code>ASGAverageNetworkOut</code> - Average number of
     * bytes sent out on all network interfaces by the Auto Scaling group.</p> </li>
     * <li> <p> <code>ALBRequestCountPerTarget</code> - Number of requests completed
     * per target in an Application Load Balancer or a Network Load Balancer target
     * group.</p> </li> </ul> <p>For predefined metric types
     * <code>ASGAverageCPUUtilization</code>, <code>ASGAverageNetworkIn</code>, and
     * <code>ASGAverageNetworkOut</code>, the parameter must not be specified as the
     * resource associated with the metric type is the Auto Scaling group. For
     * predefined metric type <code>ALBRequestCountPerTarget</code>, the parameter must
     * be specified in the format:
     * <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>/targetgroup/<i>target-group-name</i>/<i>target-group-id</i>
     * </code>, where <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> is the final portion of the load balancer ARN, and
     * <code>targetgroup/<i>target-group-name</i>/<i>target-group-id</i> </code> is the
     * final portion of the target group ARN. The target group must be attached to the
     * Auto Scaling group.</p>
     */
    inline void SetResourceLabel(const Aws::String& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = value; }

    /**
     * <p>Identifies the resource associated with the metric type. The following
     * predefined metrics are available:</p> <ul> <li> <p>
     * <code>ASGAverageCPUUtilization</code> - Average CPU utilization of the Auto
     * Scaling group.</p> </li> <li> <p> <code>ASGAverageNetworkIn</code> - Average
     * number of bytes received on all network interfaces by the Auto Scaling
     * group.</p> </li> <li> <p> <code>ASGAverageNetworkOut</code> - Average number of
     * bytes sent out on all network interfaces by the Auto Scaling group.</p> </li>
     * <li> <p> <code>ALBRequestCountPerTarget</code> - Number of requests completed
     * per target in an Application Load Balancer or a Network Load Balancer target
     * group.</p> </li> </ul> <p>For predefined metric types
     * <code>ASGAverageCPUUtilization</code>, <code>ASGAverageNetworkIn</code>, and
     * <code>ASGAverageNetworkOut</code>, the parameter must not be specified as the
     * resource associated with the metric type is the Auto Scaling group. For
     * predefined metric type <code>ALBRequestCountPerTarget</code>, the parameter must
     * be specified in the format:
     * <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>/targetgroup/<i>target-group-name</i>/<i>target-group-id</i>
     * </code>, where <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> is the final portion of the load balancer ARN, and
     * <code>targetgroup/<i>target-group-name</i>/<i>target-group-id</i> </code> is the
     * final portion of the target group ARN. The target group must be attached to the
     * Auto Scaling group.</p>
     */
    inline void SetResourceLabel(Aws::String&& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = std::move(value); }

    /**
     * <p>Identifies the resource associated with the metric type. The following
     * predefined metrics are available:</p> <ul> <li> <p>
     * <code>ASGAverageCPUUtilization</code> - Average CPU utilization of the Auto
     * Scaling group.</p> </li> <li> <p> <code>ASGAverageNetworkIn</code> - Average
     * number of bytes received on all network interfaces by the Auto Scaling
     * group.</p> </li> <li> <p> <code>ASGAverageNetworkOut</code> - Average number of
     * bytes sent out on all network interfaces by the Auto Scaling group.</p> </li>
     * <li> <p> <code>ALBRequestCountPerTarget</code> - Number of requests completed
     * per target in an Application Load Balancer or a Network Load Balancer target
     * group.</p> </li> </ul> <p>For predefined metric types
     * <code>ASGAverageCPUUtilization</code>, <code>ASGAverageNetworkIn</code>, and
     * <code>ASGAverageNetworkOut</code>, the parameter must not be specified as the
     * resource associated with the metric type is the Auto Scaling group. For
     * predefined metric type <code>ALBRequestCountPerTarget</code>, the parameter must
     * be specified in the format:
     * <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>/targetgroup/<i>target-group-name</i>/<i>target-group-id</i>
     * </code>, where <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> is the final portion of the load balancer ARN, and
     * <code>targetgroup/<i>target-group-name</i>/<i>target-group-id</i> </code> is the
     * final portion of the target group ARN. The target group must be attached to the
     * Auto Scaling group.</p>
     */
    inline void SetResourceLabel(const char* value) { m_resourceLabelHasBeenSet = true; m_resourceLabel.assign(value); }

    /**
     * <p>Identifies the resource associated with the metric type. The following
     * predefined metrics are available:</p> <ul> <li> <p>
     * <code>ASGAverageCPUUtilization</code> - Average CPU utilization of the Auto
     * Scaling group.</p> </li> <li> <p> <code>ASGAverageNetworkIn</code> - Average
     * number of bytes received on all network interfaces by the Auto Scaling
     * group.</p> </li> <li> <p> <code>ASGAverageNetworkOut</code> - Average number of
     * bytes sent out on all network interfaces by the Auto Scaling group.</p> </li>
     * <li> <p> <code>ALBRequestCountPerTarget</code> - Number of requests completed
     * per target in an Application Load Balancer or a Network Load Balancer target
     * group.</p> </li> </ul> <p>For predefined metric types
     * <code>ASGAverageCPUUtilization</code>, <code>ASGAverageNetworkIn</code>, and
     * <code>ASGAverageNetworkOut</code>, the parameter must not be specified as the
     * resource associated with the metric type is the Auto Scaling group. For
     * predefined metric type <code>ALBRequestCountPerTarget</code>, the parameter must
     * be specified in the format:
     * <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>/targetgroup/<i>target-group-name</i>/<i>target-group-id</i>
     * </code>, where <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> is the final portion of the load balancer ARN, and
     * <code>targetgroup/<i>target-group-name</i>/<i>target-group-id</i> </code> is the
     * final portion of the target group ARN. The target group must be attached to the
     * Auto Scaling group.</p>
     */
    inline PredefinedMetricSpecification& WithResourceLabel(const Aws::String& value) { SetResourceLabel(value); return *this;}

    /**
     * <p>Identifies the resource associated with the metric type. The following
     * predefined metrics are available:</p> <ul> <li> <p>
     * <code>ASGAverageCPUUtilization</code> - Average CPU utilization of the Auto
     * Scaling group.</p> </li> <li> <p> <code>ASGAverageNetworkIn</code> - Average
     * number of bytes received on all network interfaces by the Auto Scaling
     * group.</p> </li> <li> <p> <code>ASGAverageNetworkOut</code> - Average number of
     * bytes sent out on all network interfaces by the Auto Scaling group.</p> </li>
     * <li> <p> <code>ALBRequestCountPerTarget</code> - Number of requests completed
     * per target in an Application Load Balancer or a Network Load Balancer target
     * group.</p> </li> </ul> <p>For predefined metric types
     * <code>ASGAverageCPUUtilization</code>, <code>ASGAverageNetworkIn</code>, and
     * <code>ASGAverageNetworkOut</code>, the parameter must not be specified as the
     * resource associated with the metric type is the Auto Scaling group. For
     * predefined metric type <code>ALBRequestCountPerTarget</code>, the parameter must
     * be specified in the format:
     * <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>/targetgroup/<i>target-group-name</i>/<i>target-group-id</i>
     * </code>, where <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> is the final portion of the load balancer ARN, and
     * <code>targetgroup/<i>target-group-name</i>/<i>target-group-id</i> </code> is the
     * final portion of the target group ARN. The target group must be attached to the
     * Auto Scaling group.</p>
     */
    inline PredefinedMetricSpecification& WithResourceLabel(Aws::String&& value) { SetResourceLabel(std::move(value)); return *this;}

    /**
     * <p>Identifies the resource associated with the metric type. The following
     * predefined metrics are available:</p> <ul> <li> <p>
     * <code>ASGAverageCPUUtilization</code> - Average CPU utilization of the Auto
     * Scaling group.</p> </li> <li> <p> <code>ASGAverageNetworkIn</code> - Average
     * number of bytes received on all network interfaces by the Auto Scaling
     * group.</p> </li> <li> <p> <code>ASGAverageNetworkOut</code> - Average number of
     * bytes sent out on all network interfaces by the Auto Scaling group.</p> </li>
     * <li> <p> <code>ALBRequestCountPerTarget</code> - Number of requests completed
     * per target in an Application Load Balancer or a Network Load Balancer target
     * group.</p> </li> </ul> <p>For predefined metric types
     * <code>ASGAverageCPUUtilization</code>, <code>ASGAverageNetworkIn</code>, and
     * <code>ASGAverageNetworkOut</code>, the parameter must not be specified as the
     * resource associated with the metric type is the Auto Scaling group. For
     * predefined metric type <code>ALBRequestCountPerTarget</code>, the parameter must
     * be specified in the format:
     * <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>/targetgroup/<i>target-group-name</i>/<i>target-group-id</i>
     * </code>, where <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> is the final portion of the load balancer ARN, and
     * <code>targetgroup/<i>target-group-name</i>/<i>target-group-id</i> </code> is the
     * final portion of the target group ARN. The target group must be attached to the
     * Auto Scaling group.</p>
     */
    inline PredefinedMetricSpecification& WithResourceLabel(const char* value) { SetResourceLabel(value); return *this;}

  private:

    MetricType m_predefinedMetricType;
    bool m_predefinedMetricTypeHasBeenSet;

    Aws::String m_resourceLabel;
    bool m_resourceLabelHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
