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
   * with Application Auto Scaling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PredefinedMetricSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONAUTOSCALING_API PredefinedMetricSpecification
  {
  public:
    PredefinedMetricSpecification();
    PredefinedMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    PredefinedMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Spot fleet requests and ECS services.</p>
     */
    inline const MetricType& GetPredefinedMetricType() const{ return m_predefinedMetricType; }

    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Spot fleet requests and ECS services.</p>
     */
    inline bool PredefinedMetricTypeHasBeenSet() const { return m_predefinedMetricTypeHasBeenSet; }

    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Spot fleet requests and ECS services.</p>
     */
    inline void SetPredefinedMetricType(const MetricType& value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = value; }

    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Spot fleet requests and ECS services.</p>
     */
    inline void SetPredefinedMetricType(MetricType&& value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = std::move(value); }

    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Spot fleet requests and ECS services.</p>
     */
    inline PredefinedMetricSpecification& WithPredefinedMetricType(const MetricType& value) { SetPredefinedMetricType(value); return *this;}

    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Spot fleet requests and ECS services.</p>
     */
    inline PredefinedMetricSpecification& WithPredefinedMetricType(MetricType&& value) { SetPredefinedMetricType(std::move(value)); return *this;}


    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group attached to the Spot fleet request or ECS
     * service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline const Aws::String& GetResourceLabel() const{ return m_resourceLabel; }

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group attached to the Spot fleet request or ECS
     * service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline bool ResourceLabelHasBeenSet() const { return m_resourceLabelHasBeenSet; }

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group attached to the Spot fleet request or ECS
     * service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline void SetResourceLabel(const Aws::String& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = value; }

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group attached to the Spot fleet request or ECS
     * service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline void SetResourceLabel(Aws::String&& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = std::move(value); }

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group attached to the Spot fleet request or ECS
     * service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline void SetResourceLabel(const char* value) { m_resourceLabelHasBeenSet = true; m_resourceLabel.assign(value); }

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group attached to the Spot fleet request or ECS
     * service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline PredefinedMetricSpecification& WithResourceLabel(const Aws::String& value) { SetResourceLabel(value); return *this;}

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group attached to the Spot fleet request or ECS
     * service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline PredefinedMetricSpecification& WithResourceLabel(Aws::String&& value) { SetResourceLabel(std::move(value)); return *this;}

    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group attached to the Spot fleet request or ECS
     * service.</p> <p>The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul>
     */
    inline PredefinedMetricSpecification& WithResourceLabel(const char* value) { SetResourceLabel(value); return *this;}

  private:

    MetricType m_predefinedMetricType;
    bool m_predefinedMetricTypeHasBeenSet;

    Aws::String m_resourceLabel;
    bool m_resourceLabelHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
