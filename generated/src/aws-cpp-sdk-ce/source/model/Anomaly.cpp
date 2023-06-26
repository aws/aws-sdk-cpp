/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/Anomaly.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

Anomaly::Anomaly() : 
    m_anomalyIdHasBeenSet(false),
    m_anomalyStartDateHasBeenSet(false),
    m_anomalyEndDateHasBeenSet(false),
    m_dimensionValueHasBeenSet(false),
    m_rootCausesHasBeenSet(false),
    m_anomalyScoreHasBeenSet(false),
    m_impactHasBeenSet(false),
    m_monitorArnHasBeenSet(false),
    m_feedback(AnomalyFeedbackType::NOT_SET),
    m_feedbackHasBeenSet(false)
{
}

Anomaly::Anomaly(JsonView jsonValue) : 
    m_anomalyIdHasBeenSet(false),
    m_anomalyStartDateHasBeenSet(false),
    m_anomalyEndDateHasBeenSet(false),
    m_dimensionValueHasBeenSet(false),
    m_rootCausesHasBeenSet(false),
    m_anomalyScoreHasBeenSet(false),
    m_impactHasBeenSet(false),
    m_monitorArnHasBeenSet(false),
    m_feedback(AnomalyFeedbackType::NOT_SET),
    m_feedbackHasBeenSet(false)
{
  *this = jsonValue;
}

Anomaly& Anomaly::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnomalyId"))
  {
    m_anomalyId = jsonValue.GetString("AnomalyId");

    m_anomalyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyStartDate"))
  {
    m_anomalyStartDate = jsonValue.GetString("AnomalyStartDate");

    m_anomalyStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyEndDate"))
  {
    m_anomalyEndDate = jsonValue.GetString("AnomalyEndDate");

    m_anomalyEndDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DimensionValue"))
  {
    m_dimensionValue = jsonValue.GetString("DimensionValue");

    m_dimensionValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootCauses"))
  {
    Aws::Utils::Array<JsonView> rootCausesJsonList = jsonValue.GetArray("RootCauses");
    for(unsigned rootCausesIndex = 0; rootCausesIndex < rootCausesJsonList.GetLength(); ++rootCausesIndex)
    {
      m_rootCauses.push_back(rootCausesJsonList[rootCausesIndex].AsObject());
    }
    m_rootCausesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyScore"))
  {
    m_anomalyScore = jsonValue.GetObject("AnomalyScore");

    m_anomalyScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Impact"))
  {
    m_impact = jsonValue.GetObject("Impact");

    m_impactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitorArn"))
  {
    m_monitorArn = jsonValue.GetString("MonitorArn");

    m_monitorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Feedback"))
  {
    m_feedback = AnomalyFeedbackTypeMapper::GetAnomalyFeedbackTypeForName(jsonValue.GetString("Feedback"));

    m_feedbackHasBeenSet = true;
  }

  return *this;
}

JsonValue Anomaly::Jsonize() const
{
  JsonValue payload;

  if(m_anomalyIdHasBeenSet)
  {
   payload.WithString("AnomalyId", m_anomalyId);

  }

  if(m_anomalyStartDateHasBeenSet)
  {
   payload.WithString("AnomalyStartDate", m_anomalyStartDate);

  }

  if(m_anomalyEndDateHasBeenSet)
  {
   payload.WithString("AnomalyEndDate", m_anomalyEndDate);

  }

  if(m_dimensionValueHasBeenSet)
  {
   payload.WithString("DimensionValue", m_dimensionValue);

  }

  if(m_rootCausesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rootCausesJsonList(m_rootCauses.size());
   for(unsigned rootCausesIndex = 0; rootCausesIndex < rootCausesJsonList.GetLength(); ++rootCausesIndex)
   {
     rootCausesJsonList[rootCausesIndex].AsObject(m_rootCauses[rootCausesIndex].Jsonize());
   }
   payload.WithArray("RootCauses", std::move(rootCausesJsonList));

  }

  if(m_anomalyScoreHasBeenSet)
  {
   payload.WithObject("AnomalyScore", m_anomalyScore.Jsonize());

  }

  if(m_impactHasBeenSet)
  {
   payload.WithObject("Impact", m_impact.Jsonize());

  }

  if(m_monitorArnHasBeenSet)
  {
   payload.WithString("MonitorArn", m_monitorArn);

  }

  if(m_feedbackHasBeenSet)
  {
   payload.WithString("Feedback", AnomalyFeedbackTypeMapper::GetNameForAnomalyFeedbackType(m_feedback));
  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
