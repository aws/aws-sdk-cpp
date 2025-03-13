/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * and <code>Average</code> statistics that CloudWatch computes from metric
   * data.</p> <p>When you choose a load metric, make sure that the required
   * <code>Sum</code> and <code>Average</code> statistics for your metric are
   * available in CloudWatch and that they provide relevant data for predictive
   * scaling. The <code>Sum</code> statistic must represent the total load on the
   * resource, and the <code>Average</code> statistic must represent the average load
   * per capacity unit of the resource. For example, there is a metric that counts
   * the number of requests processed by your Auto Scaling group. If the
   * <code>Sum</code> statistic represents the total request count processed by the
   * group, then the <code>Average</code> statistic for the specified metric must
   * represent the average request count processed by each instance of the group.
   * </p> <p>If you publish your own metrics, you can aggregate the data points at a
   * given interval and then publish the aggregated data points to CloudWatch. Before
   * AWS Auto Scaling generates the forecast, it sums up all the metric data points
   * that occurred within each hour to match the granularity period that is used in
   * the forecast (60 minutes).</p> <p>For information about terminology, available
   * metrics, or how to publish new metrics, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html">Amazon
   * CloudWatch Concepts</a> in the <i>Amazon CloudWatch User Guide</i>. </p>
   * <p>After creating your scaling plan, you can use the AWS Auto Scaling console to
   * visualize forecasts for the specified metric. For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/plans/userguide/gs-create-scaling-plan.html#gs-view-resource">View
   * Scaling Information for a Resource</a> in the <i>AWS Auto Scaling User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/CustomizedLoadMetricSpecification">AWS
   * API Reference</a></p>
   */
  class CustomizedLoadMetricSpecification
  {
  public:
    AWS_AUTOSCALINGPLANS_API CustomizedLoadMetricSpecification() = default;
    AWS_AUTOSCALINGPLANS_API CustomizedLoadMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API CustomizedLoadMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    CustomizedLoadMetricSpecification& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the metric.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    CustomizedLoadMetricSpecification& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * load metric specification.</p>
     */
    inline const Aws::Vector<MetricDimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<MetricDimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<MetricDimension>>
    CustomizedLoadMetricSpecification& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = MetricDimension>
    CustomizedLoadMetricSpecification& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The statistic of the metric. The only valid value is <code>Sum</code>.</p>
     */
    inline MetricStatistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(MetricStatistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline CustomizedLoadMetricSpecification& WithStatistic(MetricStatistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of the metric.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    CustomizedLoadMetricSpecification& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<MetricDimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    MetricStatistic m_statistic{MetricStatistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
