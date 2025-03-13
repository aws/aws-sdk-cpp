/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CloudWatchAlarmDefinition
  {
  public:
    AWS_EMR_API CloudWatchAlarmDefinition() = default;
    AWS_EMR_API CloudWatchAlarmDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API CloudWatchAlarmDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines how the metric specified by <code>MetricName</code> is compared to
     * the value specified by <code>Threshold</code>.</p>
     */
    inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline CloudWatchAlarmDefinition& WithComparisonOperator(ComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of periods, in five-minute increments, during which the alarm
     * condition must exist before the alarm triggers automatic scaling activity. The
     * default value is <code>1</code>.</p>
     */
    inline int GetEvaluationPeriods() const { return m_evaluationPeriods; }
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }
    inline CloudWatchAlarmDefinition& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CloudWatch metric that is watched to determine an alarm
     * condition.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    CloudWatchAlarmDefinition& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace for the CloudWatch metric. The default is
     * <code>AWS/ElasticMapReduce</code>.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    CloudWatchAlarmDefinition& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period, in seconds, over which the statistic is applied. CloudWatch
     * metrics for Amazon EMR are emitted every five minutes (300 seconds), so if you
     * specify a CloudWatch metric, specify <code>300</code>.</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline CloudWatchAlarmDefinition& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic to apply to the metric associated with the alarm. The default
     * is <code>AVERAGE</code>.</p>
     */
    inline Statistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(Statistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline CloudWatchAlarmDefinition& WithStatistic(Statistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline CloudWatchAlarmDefinition& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measure associated with the CloudWatch metric being watched. The
     * value specified for <code>Unit</code> must correspond to the units specified in
     * the CloudWatch metric.</p>
     */
    inline Unit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(Unit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline CloudWatchAlarmDefinition& WithUnit(Unit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CloudWatch metric dimension.</p>
     */
    inline const Aws::Vector<MetricDimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<MetricDimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<MetricDimension>>
    CloudWatchAlarmDefinition& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = MetricDimension>
    CloudWatchAlarmDefinition& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}
  private:

    ComparisonOperator m_comparisonOperator{ComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;

    int m_evaluationPeriods{0};
    bool m_evaluationPeriodsHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    Statistic m_statistic{Statistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;

    Unit m_unit{Unit::NOT_SET};
    bool m_unitHasBeenSet = false;

    Aws::Vector<MetricDimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
