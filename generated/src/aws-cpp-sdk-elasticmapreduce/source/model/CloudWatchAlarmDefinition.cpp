/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/CloudWatchAlarmDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

CloudWatchAlarmDefinition::CloudWatchAlarmDefinition() : 
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_statistic(Statistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false),
    m_dimensionsHasBeenSet(false)
{
}

CloudWatchAlarmDefinition::CloudWatchAlarmDefinition(JsonView jsonValue) : 
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_statistic(Statistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false),
    m_dimensionsHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchAlarmDefinition& CloudWatchAlarmDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("ComparisonOperator"));

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationPeriods"))
  {
    m_evaluationPeriods = jsonValue.GetInteger("EvaluationPeriods");

    m_evaluationPeriodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Period"))
  {
    m_period = jsonValue.GetInteger("Period");

    m_periodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statistic"))
  {
    m_statistic = StatisticMapper::GetStatisticForName(jsonValue.GetString("Statistic"));

    m_statisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Threshold"))
  {
    m_threshold = jsonValue.GetDouble("Threshold");

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = UnitMapper::GetUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Utils::Array<JsonView> dimensionsJsonList = jsonValue.GetArray("Dimensions");
    for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
    {
      m_dimensions.push_back(dimensionsJsonList[dimensionsIndex].AsObject());
    }
    m_dimensionsHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchAlarmDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  if(m_evaluationPeriodsHasBeenSet)
  {
   payload.WithInteger("EvaluationPeriods", m_evaluationPeriods);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("Period", m_period);

  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("Statistic", StatisticMapper::GetNameForStatistic(m_statistic));
  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("Threshold", m_threshold);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", UnitMapper::GetNameForUnit(m_unit));
  }

  if(m_dimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionsJsonList(m_dimensions.size());
   for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
   {
     dimensionsJsonList[dimensionsIndex].AsObject(m_dimensions[dimensionsIndex].Jsonize());
   }
   payload.WithArray("Dimensions", std::move(dimensionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
