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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ComparisonOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/Statistic.h>
#include <aws/elasticmapreduce/model/Unit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/MetricDimension.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The definition of a CloudWatch metric alarm, which determines when an
   * automatic scaling activity is triggered. When the defined alarm conditions are
   * satisfied, scaling activity begins.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CloudWatchAlarmDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API CloudWatchAlarmDefinition
  {
  public:
    CloudWatchAlarmDefinition();
    CloudWatchAlarmDefinition(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchAlarmDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines how the metric specified by <code>MetricName</code> is compared to
     * the value specified by <code>Threshold</code>.</p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>Determines how the metric specified by <code>MetricName</code> is compared to
     * the value specified by <code>Threshold</code>.</p>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>Determines how the metric specified by <code>MetricName</code> is compared to
     * the value specified by <code>Threshold</code>.</p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>Determines how the metric specified by <code>MetricName</code> is compared to
     * the value specified by <code>Threshold</code>.</p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>Determines how the metric specified by <code>MetricName</code> is compared to
     * the value specified by <code>Threshold</code>.</p>
     */
    inline CloudWatchAlarmDefinition& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>Determines how the metric specified by <code>MetricName</code> is compared to
     * the value specified by <code>Threshold</code>.</p>
     */
    inline CloudWatchAlarmDefinition& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>The number of periods, expressed in seconds using <code>Period</code>, during
     * which the alarm condition must exist before the alarm triggers automatic scaling
     * activity. The default value is <code>1</code>.</p>
     */
    inline int GetEvaluationPeriods() const{ return m_evaluationPeriods; }

    /**
     * <p>The number of periods, expressed in seconds using <code>Period</code>, during
     * which the alarm condition must exist before the alarm triggers automatic scaling
     * activity. The default value is <code>1</code>.</p>
     */
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }

    /**
     * <p>The number of periods, expressed in seconds using <code>Period</code>, during
     * which the alarm condition must exist before the alarm triggers automatic scaling
     * activity. The default value is <code>1</code>.</p>
     */
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }

    /**
     * <p>The number of periods, expressed in seconds using <code>Period</code>, during
     * which the alarm condition must exist before the alarm triggers automatic scaling
     * activity. The default value is <code>1</code>.</p>
     */
    inline CloudWatchAlarmDefinition& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}


    /**
     * <p>The name of the CloudWatch metric that is watched to determine an alarm
     * condition.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the CloudWatch metric that is watched to determine an alarm
     * condition.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch metric that is watched to determine an alarm
     * condition.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the CloudWatch metric that is watched to determine an alarm
     * condition.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the CloudWatch metric that is watched to determine an alarm
     * condition.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the CloudWatch metric that is watched to determine an alarm
     * condition.</p>
     */
    inline CloudWatchAlarmDefinition& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the CloudWatch metric that is watched to determine an alarm
     * condition.</p>
     */
    inline CloudWatchAlarmDefinition& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch metric that is watched to determine an alarm
     * condition.</p>
     */
    inline CloudWatchAlarmDefinition& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The namespace for the CloudWatch metric. The default is
     * <code>AWS/ElasticMapReduce</code>.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace for the CloudWatch metric. The default is
     * <code>AWS/ElasticMapReduce</code>.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace for the CloudWatch metric. The default is
     * <code>AWS/ElasticMapReduce</code>.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace for the CloudWatch metric. The default is
     * <code>AWS/ElasticMapReduce</code>.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace for the CloudWatch metric. The default is
     * <code>AWS/ElasticMapReduce</code>.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace for the CloudWatch metric. The default is
     * <code>AWS/ElasticMapReduce</code>.</p>
     */
    inline CloudWatchAlarmDefinition& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace for the CloudWatch metric. The default is
     * <code>AWS/ElasticMapReduce</code>.</p>
     */
    inline CloudWatchAlarmDefinition& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace for the CloudWatch metric. The default is
     * <code>AWS/ElasticMapReduce</code>.</p>
     */
    inline CloudWatchAlarmDefinition& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The period, in seconds, over which the statistic is applied. EMR CloudWatch
     * metrics are emitted every five minutes (300 seconds), so if an EMR CloudWatch
     * metric is specified, specify <code>300</code>.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The period, in seconds, over which the statistic is applied. EMR CloudWatch
     * metrics are emitted every five minutes (300 seconds), so if an EMR CloudWatch
     * metric is specified, specify <code>300</code>.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The period, in seconds, over which the statistic is applied. EMR CloudWatch
     * metrics are emitted every five minutes (300 seconds), so if an EMR CloudWatch
     * metric is specified, specify <code>300</code>.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period, in seconds, over which the statistic is applied. EMR CloudWatch
     * metrics are emitted every five minutes (300 seconds), so if an EMR CloudWatch
     * metric is specified, specify <code>300</code>.</p>
     */
    inline CloudWatchAlarmDefinition& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The statistic to apply to the metric associated with the alarm. The default
     * is <code>AVERAGE</code>.</p>
     */
    inline const Statistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic to apply to the metric associated with the alarm. The default
     * is <code>AVERAGE</code>.</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic to apply to the metric associated with the alarm. The default
     * is <code>AVERAGE</code>.</p>
     */
    inline void SetStatistic(const Statistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic to apply to the metric associated with the alarm. The default
     * is <code>AVERAGE</code>.</p>
     */
    inline void SetStatistic(Statistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic to apply to the metric associated with the alarm. The default
     * is <code>AVERAGE</code>.</p>
     */
    inline CloudWatchAlarmDefinition& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic to apply to the metric associated with the alarm. The default
     * is <code>AVERAGE</code>.</p>
     */
    inline CloudWatchAlarmDefinition& WithStatistic(Statistic&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline CloudWatchAlarmDefinition& WithThreshold(double value) { SetThreshold(value); return *this;}


    /**
     * <p>The unit of measure associated with the CloudWatch metric being watched. The
     * value specified for <code>Unit</code> must correspond to the units specified in
     * the CloudWatch metric.</p>
     */
    inline const Unit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of measure associated with the CloudWatch metric being watched. The
     * value specified for <code>Unit</code> must correspond to the units specified in
     * the CloudWatch metric.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of measure associated with the CloudWatch metric being watched. The
     * value specified for <code>Unit</code> must correspond to the units specified in
     * the CloudWatch metric.</p>
     */
    inline void SetUnit(const Unit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of measure associated with the CloudWatch metric being watched. The
     * value specified for <code>Unit</code> must correspond to the units specified in
     * the CloudWatch metric.</p>
     */
    inline void SetUnit(Unit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of measure associated with the CloudWatch metric being watched. The
     * value specified for <code>Unit</code> must correspond to the units specified in
     * the CloudWatch metric.</p>
     */
    inline CloudWatchAlarmDefinition& WithUnit(const Unit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of measure associated with the CloudWatch metric being watched. The
     * value specified for <code>Unit</code> must correspond to the units specified in
     * the CloudWatch metric.</p>
     */
    inline CloudWatchAlarmDefinition& WithUnit(Unit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>A CloudWatch metric dimension.</p>
     */
    inline const Aws::Vector<MetricDimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>A CloudWatch metric dimension.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>A CloudWatch metric dimension.</p>
     */
    inline void SetDimensions(const Aws::Vector<MetricDimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>A CloudWatch metric dimension.</p>
     */
    inline void SetDimensions(Aws::Vector<MetricDimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>A CloudWatch metric dimension.</p>
     */
    inline CloudWatchAlarmDefinition& WithDimensions(const Aws::Vector<MetricDimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>A CloudWatch metric dimension.</p>
     */
    inline CloudWatchAlarmDefinition& WithDimensions(Aws::Vector<MetricDimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>A CloudWatch metric dimension.</p>
     */
    inline CloudWatchAlarmDefinition& AddDimensions(const MetricDimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>A CloudWatch metric dimension.</p>
     */
    inline CloudWatchAlarmDefinition& AddDimensions(MetricDimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }

  private:

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;

    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    int m_period;
    bool m_periodHasBeenSet;

    Statistic m_statistic;
    bool m_statisticHasBeenSet;

    double m_threshold;
    bool m_thresholdHasBeenSet;

    Unit m_unit;
    bool m_unitHasBeenSet;

    Aws::Vector<MetricDimension> m_dimensions;
    bool m_dimensionsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
