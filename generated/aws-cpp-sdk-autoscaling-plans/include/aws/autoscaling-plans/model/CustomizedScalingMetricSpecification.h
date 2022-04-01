﻿/**
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
   * <p>Represents a CloudWatch metric of your choosing that can be used for dynamic
   * scaling as part of a target tracking scaling policy. </p> <p>To create your
   * customized scaling metric specification:</p> <ul> <li> <p>Add values for each
   * required parameter from CloudWatch. You can use an existing metric, or a new
   * metric that you create. To use your own metric, you must first publish the
   * metric to CloudWatch. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publish
   * Custom Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> </li> <li>
   * <p>Choose a metric that changes proportionally with capacity. The value of the
   * metric should increase or decrease in inverse proportion to the number of
   * capacity units. That is, the value of the metric should decrease when capacity
   * increases. </p> </li> </ul> <p>For information about terminology, available
   * metrics, or how to publish new metrics, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html">Amazon
   * CloudWatch Concepts</a> in the <i>Amazon CloudWatch User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/CustomizedScalingMetricSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALINGPLANS_API CustomizedScalingMetricSpecification
  {
  public:
    CustomizedScalingMetricSpecification();
    CustomizedScalingMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    CustomizedScalingMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CustomizedScalingMetricSpecification& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline CustomizedScalingMetricSpecification& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline CustomizedScalingMetricSpecification& WithMetricName(const char* value) { SetMetricName(value); return *this;}


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
    inline CustomizedScalingMetricSpecification& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric.</p>
     */
    inline CustomizedScalingMetricSpecification& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the metric.</p>
     */
    inline CustomizedScalingMetricSpecification& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * scaling metric specification.</p>
     */
    inline const Aws::Vector<MetricDimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * scaling metric specification.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * scaling metric specification.</p>
     */
    inline void SetDimensions(const Aws::Vector<MetricDimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * scaling metric specification.</p>
     */
    inline void SetDimensions(Aws::Vector<MetricDimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * scaling metric specification.</p>
     */
    inline CustomizedScalingMetricSpecification& WithDimensions(const Aws::Vector<MetricDimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * scaling metric specification.</p>
     */
    inline CustomizedScalingMetricSpecification& WithDimensions(Aws::Vector<MetricDimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * scaling metric specification.</p>
     */
    inline CustomizedScalingMetricSpecification& AddDimensions(const MetricDimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The dimensions of the metric.</p> <p>Conditional: If you published your
     * metric with dimensions, you must specify the same dimensions in your customized
     * scaling metric specification.</p>
     */
    inline CustomizedScalingMetricSpecification& AddDimensions(MetricDimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The statistic of the metric.</p>
     */
    inline const MetricStatistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic of the metric.</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic of the metric.</p>
     */
    inline void SetStatistic(const MetricStatistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic of the metric.</p>
     */
    inline void SetStatistic(MetricStatistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic of the metric.</p>
     */
    inline CustomizedScalingMetricSpecification& WithStatistic(const MetricStatistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic of the metric.</p>
     */
    inline CustomizedScalingMetricSpecification& WithStatistic(MetricStatistic&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>The unit of the metric. </p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of the metric. </p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of the metric. </p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the metric. </p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of the metric. </p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of the metric. </p>
     */
    inline CustomizedScalingMetricSpecification& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of the metric. </p>
     */
    inline CustomizedScalingMetricSpecification& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of the metric. </p>
     */
    inline CustomizedScalingMetricSpecification& WithUnit(const char* value) { SetUnit(value); return *this;}

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
