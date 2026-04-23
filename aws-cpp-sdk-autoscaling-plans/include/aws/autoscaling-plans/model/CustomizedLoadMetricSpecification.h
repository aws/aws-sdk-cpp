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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling-plans/model/MetricStatistic.h>
#include <aws/autoscaling-plans/model/MetricDimension.h>
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
   * <p>Represents a CloudWatch metric of your choosing that can be used for
   * predictive scaling. </p> <p>For predictive scaling to work with a customized
   * load metric specification, AWS Auto Scaling needs access to the <code>Sum</code>
   * and <code>Average</code> statistics that CloudWatch computes from metric data.
   * Statistics are calculations used to aggregate data over specified time
   * periods.</p> <p>When you choose a load metric, make sure that the required
   * <code>Sum</code> and <code>Average</code> statistics for your metric are
   * available in CloudWatch and that they provide relevant data for predictive
   * scaling. The <code>Sum</code> statistic must represent the total load on the
   * resource, and the <code>Average</code> statistic must represent the average load
   * per capacity unit of the resource. For example, there is a metric that counts
   * the number of requests processed by your Auto Scaling group. If the
   * <code>Sum</code> statistic represents the total request count processed by the
   * group, then the <code>Average</code> statistic for the specified metric must
   * represent the average request count processed by each instance of the group.</p>
   * <p>For information about terminology, available metrics, or how to publish new
   * metrics, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html">Amazon
   * CloudWatch Concepts</a> in the <i>Amazon CloudWatch User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/CustomizedLoadMetricSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALINGPLANS_API CustomizedLoadMetricSpecification
  {
  public:
    CustomizedLoadMetricSpecification();
    CustomizedLoadMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    CustomizedLoadMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline CustomizedLoadMetricSpecification& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline CustomizedLoadMetricSpecification& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline CustomizedLoadMetricSpecification& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The namespace of the metric.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline CustomizedLoadMetricSpecification& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric.</p>
     */
    inline CustomizedLoadMetricSpecification& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the metric.</p>
     */
    inline CustomizedLoadMetricSpecification& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * load metric specification.</p>
     */
    inline const Aws::Vector<MetricDimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * load metric specification.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * load metric specification.</p>
     */
    inline void SetDimensions(const Aws::Vector<MetricDimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * load metric specification.</p>
     */
    inline void SetDimensions(Aws::Vector<MetricDimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * load metric specification.</p>
     */
    inline CustomizedLoadMetricSpecification& WithDimensions(const Aws::Vector<MetricDimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * load metric specification.</p>
     */
    inline CustomizedLoadMetricSpecification& WithDimensions(Aws::Vector<MetricDimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * load metric specification.</p>
     */
    inline CustomizedLoadMetricSpecification& AddDimensions(const MetricDimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * load metric specification.</p>
     */
    inline CustomizedLoadMetricSpecification& AddDimensions(MetricDimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The statistic of the metric. Currently, the value must always be
     * <code>Sum</code>. </p>
     */
    inline const MetricStatistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic of the metric. Currently, the value must always be
     * <code>Sum</code>. </p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic of the metric. Currently, the value must always be
     * <code>Sum</code>. </p>
     */
    inline void SetStatistic(const MetricStatistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic of the metric. Currently, the value must always be
     * <code>Sum</code>. </p>
     */
    inline void SetStatistic(MetricStatistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic of the metric. Currently, the value must always be
     * <code>Sum</code>. </p>
     */
    inline CustomizedLoadMetricSpecification& WithStatistic(const MetricStatistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic of the metric. Currently, the value must always be
     * <code>Sum</code>. </p>
     */
    inline CustomizedLoadMetricSpecification& WithStatistic(MetricStatistic&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>The unit of the metric.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of the metric.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of the metric.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the metric.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of the metric.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of the metric.</p>
     */
    inline CustomizedLoadMetricSpecification& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of the metric.</p>
     */
    inline CustomizedLoadMetricSpecification& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of the metric.</p>
     */
    inline CustomizedLoadMetricSpecification& WithUnit(const char* value) { SetUnit(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::Vector<MetricDimension> m_dimensions;
    bool m_dimensionsHasBeenSet;

    MetricStatistic m_statistic;
    bool m_statisticHasBeenSet;

    Aws::String m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
