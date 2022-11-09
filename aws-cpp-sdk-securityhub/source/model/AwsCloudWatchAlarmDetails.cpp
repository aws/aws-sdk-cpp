/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudWatchAlarmDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCloudWatchAlarmDetails::AwsCloudWatchAlarmDetails() : 
    m_actionsEnabled(false),
    m_actionsEnabledHasBeenSet(false),
    m_alarmActionsHasBeenSet(false),
    m_alarmArnHasBeenSet(false),
    m_alarmConfigurationUpdatedTimestampHasBeenSet(false),
    m_alarmDescriptionHasBeenSet(false),
    m_alarmNameHasBeenSet(false),
    m_comparisonOperatorHasBeenSet(false),
    m_datapointsToAlarm(0),
    m_datapointsToAlarmHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_evaluateLowSampleCountPercentileHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_extendedStatisticHasBeenSet(false),
    m_insufficientDataActionsHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_okActionsHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_statisticHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_thresholdMetricIdHasBeenSet(false),
    m_treatMissingDataHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

AwsCloudWatchAlarmDetails::AwsCloudWatchAlarmDetails(JsonView jsonValue) : 
    m_actionsEnabled(false),
    m_actionsEnabledHasBeenSet(false),
    m_alarmActionsHasBeenSet(false),
    m_alarmArnHasBeenSet(false),
    m_alarmConfigurationUpdatedTimestampHasBeenSet(false),
    m_alarmDescriptionHasBeenSet(false),
    m_alarmNameHasBeenSet(false),
    m_comparisonOperatorHasBeenSet(false),
    m_datapointsToAlarm(0),
    m_datapointsToAlarmHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_evaluateLowSampleCountPercentileHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_extendedStatisticHasBeenSet(false),
    m_insufficientDataActionsHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_okActionsHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_statisticHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_thresholdMetricIdHasBeenSet(false),
    m_treatMissingDataHasBeenSet(false),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudWatchAlarmDetails& AwsCloudWatchAlarmDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionsEnabled"))
  {
    m_actionsEnabled = jsonValue.GetBool("ActionsEnabled");

    m_actionsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlarmActions"))
  {
    Aws::Utils::Array<JsonView> alarmActionsJsonList = jsonValue.GetArray("AlarmActions");
    for(unsigned alarmActionsIndex = 0; alarmActionsIndex < alarmActionsJsonList.GetLength(); ++alarmActionsIndex)
    {
      m_alarmActions.push_back(alarmActionsJsonList[alarmActionsIndex].AsString());
    }
    m_alarmActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlarmArn"))
  {
    m_alarmArn = jsonValue.GetString("AlarmArn");

    m_alarmArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlarmConfigurationUpdatedTimestamp"))
  {
    m_alarmConfigurationUpdatedTimestamp = jsonValue.GetString("AlarmConfigurationUpdatedTimestamp");

    m_alarmConfigurationUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlarmDescription"))
  {
    m_alarmDescription = jsonValue.GetString("AlarmDescription");

    m_alarmDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlarmName"))
  {
    m_alarmName = jsonValue.GetString("AlarmName");

    m_alarmNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = jsonValue.GetString("ComparisonOperator");

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatapointsToAlarm"))
  {
    m_datapointsToAlarm = jsonValue.GetInteger("DatapointsToAlarm");

    m_datapointsToAlarmHasBeenSet = true;
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

  if(jsonValue.ValueExists("EvaluateLowSampleCountPercentile"))
  {
    m_evaluateLowSampleCountPercentile = jsonValue.GetString("EvaluateLowSampleCountPercentile");

    m_evaluateLowSampleCountPercentileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationPeriods"))
  {
    m_evaluationPeriods = jsonValue.GetInteger("EvaluationPeriods");

    m_evaluationPeriodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtendedStatistic"))
  {
    m_extendedStatistic = jsonValue.GetString("ExtendedStatistic");

    m_extendedStatisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InsufficientDataActions"))
  {
    Aws::Utils::Array<JsonView> insufficientDataActionsJsonList = jsonValue.GetArray("InsufficientDataActions");
    for(unsigned insufficientDataActionsIndex = 0; insufficientDataActionsIndex < insufficientDataActionsJsonList.GetLength(); ++insufficientDataActionsIndex)
    {
      m_insufficientDataActions.push_back(insufficientDataActionsJsonList[insufficientDataActionsIndex].AsString());
    }
    m_insufficientDataActionsHasBeenSet = true;
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

  if(jsonValue.ValueExists("OkActions"))
  {
    Aws::Utils::Array<JsonView> okActionsJsonList = jsonValue.GetArray("OkActions");
    for(unsigned okActionsIndex = 0; okActionsIndex < okActionsJsonList.GetLength(); ++okActionsIndex)
    {
      m_okActions.push_back(okActionsJsonList[okActionsIndex].AsString());
    }
    m_okActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Period"))
  {
    m_period = jsonValue.GetInteger("Period");

    m_periodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statistic"))
  {
    m_statistic = jsonValue.GetString("Statistic");

    m_statisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Threshold"))
  {
    m_threshold = jsonValue.GetDouble("Threshold");

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThresholdMetricId"))
  {
    m_thresholdMetricId = jsonValue.GetString("ThresholdMetricId");

    m_thresholdMetricIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TreatMissingData"))
  {
    m_treatMissingData = jsonValue.GetString("TreatMissingData");

    m_treatMissingDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudWatchAlarmDetails::Jsonize() const
{
  JsonValue payload;

  if(m_actionsEnabledHasBeenSet)
  {
   payload.WithBool("ActionsEnabled", m_actionsEnabled);

  }

  if(m_alarmActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> alarmActionsJsonList(m_alarmActions.size());
   for(unsigned alarmActionsIndex = 0; alarmActionsIndex < alarmActionsJsonList.GetLength(); ++alarmActionsIndex)
   {
     alarmActionsJsonList[alarmActionsIndex].AsString(m_alarmActions[alarmActionsIndex]);
   }
   payload.WithArray("AlarmActions", std::move(alarmActionsJsonList));

  }

  if(m_alarmArnHasBeenSet)
  {
   payload.WithString("AlarmArn", m_alarmArn);

  }

  if(m_alarmConfigurationUpdatedTimestampHasBeenSet)
  {
   payload.WithString("AlarmConfigurationUpdatedTimestamp", m_alarmConfigurationUpdatedTimestamp);

  }

  if(m_alarmDescriptionHasBeenSet)
  {
   payload.WithString("AlarmDescription", m_alarmDescription);

  }

  if(m_alarmNameHasBeenSet)
  {
   payload.WithString("AlarmName", m_alarmName);

  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", m_comparisonOperator);

  }

  if(m_datapointsToAlarmHasBeenSet)
  {
   payload.WithInteger("DatapointsToAlarm", m_datapointsToAlarm);

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

  if(m_evaluateLowSampleCountPercentileHasBeenSet)
  {
   payload.WithString("EvaluateLowSampleCountPercentile", m_evaluateLowSampleCountPercentile);

  }

  if(m_evaluationPeriodsHasBeenSet)
  {
   payload.WithInteger("EvaluationPeriods", m_evaluationPeriods);

  }

  if(m_extendedStatisticHasBeenSet)
  {
   payload.WithString("ExtendedStatistic", m_extendedStatistic);

  }

  if(m_insufficientDataActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> insufficientDataActionsJsonList(m_insufficientDataActions.size());
   for(unsigned insufficientDataActionsIndex = 0; insufficientDataActionsIndex < insufficientDataActionsJsonList.GetLength(); ++insufficientDataActionsIndex)
   {
     insufficientDataActionsJsonList[insufficientDataActionsIndex].AsString(m_insufficientDataActions[insufficientDataActionsIndex]);
   }
   payload.WithArray("InsufficientDataActions", std::move(insufficientDataActionsJsonList));

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_okActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> okActionsJsonList(m_okActions.size());
   for(unsigned okActionsIndex = 0; okActionsIndex < okActionsJsonList.GetLength(); ++okActionsIndex)
   {
     okActionsJsonList[okActionsIndex].AsString(m_okActions[okActionsIndex]);
   }
   payload.WithArray("OkActions", std::move(okActionsJsonList));

  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("Period", m_period);

  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("Statistic", m_statistic);

  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("Threshold", m_threshold);

  }

  if(m_thresholdMetricIdHasBeenSet)
  {
   payload.WithString("ThresholdMetricId", m_thresholdMetricId);

  }

  if(m_treatMissingDataHasBeenSet)
  {
   payload.WithString("TreatMissingData", m_treatMissingData);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
