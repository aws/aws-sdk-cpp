/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/PredictorMonitorEvaluation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

PredictorMonitorEvaluation::PredictorMonitorEvaluation() : 
    m_resourceArnHasBeenSet(false),
    m_monitorArnHasBeenSet(false),
    m_evaluationTimeHasBeenSet(false),
    m_evaluationStateHasBeenSet(false),
    m_windowStartDatetimeHasBeenSet(false),
    m_windowEndDatetimeHasBeenSet(false),
    m_predictorEventHasBeenSet(false),
    m_monitorDataSourceHasBeenSet(false),
    m_metricResultsHasBeenSet(false),
    m_numItemsEvaluated(0),
    m_numItemsEvaluatedHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

PredictorMonitorEvaluation::PredictorMonitorEvaluation(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_monitorArnHasBeenSet(false),
    m_evaluationTimeHasBeenSet(false),
    m_evaluationStateHasBeenSet(false),
    m_windowStartDatetimeHasBeenSet(false),
    m_windowEndDatetimeHasBeenSet(false),
    m_predictorEventHasBeenSet(false),
    m_monitorDataSourceHasBeenSet(false),
    m_metricResultsHasBeenSet(false),
    m_numItemsEvaluated(0),
    m_numItemsEvaluatedHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

PredictorMonitorEvaluation& PredictorMonitorEvaluation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitorArn"))
  {
    m_monitorArn = jsonValue.GetString("MonitorArn");

    m_monitorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationTime"))
  {
    m_evaluationTime = jsonValue.GetDouble("EvaluationTime");

    m_evaluationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationState"))
  {
    m_evaluationState = jsonValue.GetString("EvaluationState");

    m_evaluationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WindowStartDatetime"))
  {
    m_windowStartDatetime = jsonValue.GetDouble("WindowStartDatetime");

    m_windowStartDatetimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WindowEndDatetime"))
  {
    m_windowEndDatetime = jsonValue.GetDouble("WindowEndDatetime");

    m_windowEndDatetimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredictorEvent"))
  {
    m_predictorEvent = jsonValue.GetObject("PredictorEvent");

    m_predictorEventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitorDataSource"))
  {
    m_monitorDataSource = jsonValue.GetObject("MonitorDataSource");

    m_monitorDataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricResults"))
  {
    Aws::Utils::Array<JsonView> metricResultsJsonList = jsonValue.GetArray("MetricResults");
    for(unsigned metricResultsIndex = 0; metricResultsIndex < metricResultsJsonList.GetLength(); ++metricResultsIndex)
    {
      m_metricResults.push_back(metricResultsJsonList[metricResultsIndex].AsObject());
    }
    m_metricResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumItemsEvaluated"))
  {
    m_numItemsEvaluated = jsonValue.GetInt64("NumItemsEvaluated");

    m_numItemsEvaluatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictorMonitorEvaluation::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_monitorArnHasBeenSet)
  {
   payload.WithString("MonitorArn", m_monitorArn);

  }

  if(m_evaluationTimeHasBeenSet)
  {
   payload.WithDouble("EvaluationTime", m_evaluationTime.SecondsWithMSPrecision());
  }

  if(m_evaluationStateHasBeenSet)
  {
   payload.WithString("EvaluationState", m_evaluationState);

  }

  if(m_windowStartDatetimeHasBeenSet)
  {
   payload.WithDouble("WindowStartDatetime", m_windowStartDatetime.SecondsWithMSPrecision());
  }

  if(m_windowEndDatetimeHasBeenSet)
  {
   payload.WithDouble("WindowEndDatetime", m_windowEndDatetime.SecondsWithMSPrecision());
  }

  if(m_predictorEventHasBeenSet)
  {
   payload.WithObject("PredictorEvent", m_predictorEvent.Jsonize());

  }

  if(m_monitorDataSourceHasBeenSet)
  {
   payload.WithObject("MonitorDataSource", m_monitorDataSource.Jsonize());

  }

  if(m_metricResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricResultsJsonList(m_metricResults.size());
   for(unsigned metricResultsIndex = 0; metricResultsIndex < metricResultsJsonList.GetLength(); ++metricResultsIndex)
   {
     metricResultsJsonList[metricResultsIndex].AsObject(m_metricResults[metricResultsIndex].Jsonize());
   }
   payload.WithArray("MetricResults", std::move(metricResultsJsonList));

  }

  if(m_numItemsEvaluatedHasBeenSet)
  {
   payload.WithInt64("NumItemsEvaluated", m_numItemsEvaluated);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
