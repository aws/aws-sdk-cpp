/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/MetricStatistic.h>
#include <aws/autoscaling/model/MetricDimension.h>
#include <aws/autoscaling/model/TargetTrackingMetricDataQuery.h>
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
   * <p>Represents a CloudWatch metric of your choosing for a target tracking scaling
   * policy to use with Amazon EC2 Auto Scaling.</p> <p>To create your customized
   * metric specification:</p> <ul> <li> <p>Add values for each required property
   * from CloudWatch. You can use an existing metric, or a new metric that you
   * create. To use your own metric, you must first publish the metric to CloudWatch.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publish
   * custom metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> </li> <li>
   * <p>Choose a metric that changes proportionally with capacity. The value of the
   * metric should increase or decrease in inverse proportion to the number of
   * capacity units. That is, the value of the metric should decrease when capacity
   * increases.</p> </li> </ul> <p>For more information about the CloudWatch
   * terminology below, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html">Amazon
   * CloudWatch concepts</a>.</p>  <p>Each individual service provides
   * information about the metrics, namespace, and dimensions they use. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/aws-services-cloudwatch-metrics.html">Amazon
   * Web Services services that publish CloudWatch metrics</a> in the <i>Amazon
   * CloudWatch User Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CustomizedMetricSpecification">AWS
   * API Reference</a></p>
   */
  class CustomizedMetricSpecification
  {
  public:
    AWS_AUTOSCALING_API CustomizedMetricSpecification() = default;
    AWS_AUTOSCALING_API CustomizedMetricSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API CustomizedMetricSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the metric. To get the exact metric name, namespace, and
     * dimensions, inspect the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_Metric.html">Metric</a>
     * object that is returned by a call to <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_ListMetrics.html">ListMetrics</a>.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    CustomizedMetricSpecification& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
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
    CustomizedMetricSpecification& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your scaling
     * policy.</p>
     */
    inline const Aws::Vector<MetricDimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<MetricDimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<MetricDimension>>
    CustomizedMetricSpecification& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = MetricDimension>
    CustomizedMetricSpecification& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The statistic of the metric.</p>
     */
    inline MetricStatistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(MetricStatistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline CustomizedMetricSpecification& WithStatistic(MetricStatistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of the metric. For a complete list of the units that CloudWatch
     * supports, see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_MetricDatum.html">MetricDatum</a>
     * data type in the <i>Amazon CloudWatch API Reference</i>.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    CustomizedMetricSpecification& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The period of the metric in seconds. The default value is 60. Accepted
     * values are 10, 30, and 60. For high resolution metric, set the value to less
     * than 60. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/policy-creating-high-resolution-metrics.html">Create
     * a target tracking policy using high-resolution metrics for faster response</a>.
     * </p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline CustomizedMetricSpecification& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics to include in the target tracking scaling policy, as a metric
     * data query. This can include both raw metric and metric math expressions.</p>
     */
    inline const Aws::Vector<TargetTrackingMetricDataQuery>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<TargetTrackingMetricDataQuery>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<TargetTrackingMetricDataQuery>>
    CustomizedMetricSpecification& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = TargetTrackingMetricDataQuery>
    CustomizedMetricSpecification& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
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

    int m_period{0};
    bool m_periodHasBeenSet = false;

    Aws::Vector<TargetTrackingMetricDataQuery> m_metrics;
    bool m_metricsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
