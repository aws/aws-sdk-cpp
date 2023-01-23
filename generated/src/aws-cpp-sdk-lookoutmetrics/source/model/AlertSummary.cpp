/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AlertSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

AlertSummary::AlertSummary() : 
    m_alertArnHasBeenSet(false),
    m_anomalyDetectorArnHasBeenSet(false),
    m_alertNameHasBeenSet(false),
    m_alertSensitivityThreshold(0),
    m_alertSensitivityThresholdHasBeenSet(false),
    m_alertType(AlertType::NOT_SET),
    m_alertTypeHasBeenSet(false),
    m_alertStatus(AlertStatus::NOT_SET),
    m_alertStatusHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

AlertSummary::AlertSummary(JsonView jsonValue) : 
    m_alertArnHasBeenSet(false),
    m_anomalyDetectorArnHasBeenSet(false),
    m_alertNameHasBeenSet(false),
    m_alertSensitivityThreshold(0),
    m_alertSensitivityThresholdHasBeenSet(false),
    m_alertType(AlertType::NOT_SET),
    m_alertTypeHasBeenSet(false),
    m_alertStatus(AlertStatus::NOT_SET),
    m_alertStatusHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

AlertSummary& AlertSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlertArn"))
  {
    m_alertArn = jsonValue.GetString("AlertArn");

    m_alertArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyDetectorArn"))
  {
    m_anomalyDetectorArn = jsonValue.GetString("AnomalyDetectorArn");

    m_anomalyDetectorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlertName"))
  {
    m_alertName = jsonValue.GetString("AlertName");

    m_alertNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlertSensitivityThreshold"))
  {
    m_alertSensitivityThreshold = jsonValue.GetInteger("AlertSensitivityThreshold");

    m_alertSensitivityThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlertType"))
  {
    m_alertType = AlertTypeMapper::GetAlertTypeForName(jsonValue.GetString("AlertType"));

    m_alertTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlertStatus"))
  {
    m_alertStatus = AlertStatusMapper::GetAlertStatusForName(jsonValue.GetString("AlertStatus"));

    m_alertStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

    m_lastModificationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue AlertSummary::Jsonize() const
{
  JsonValue payload;

  if(m_alertArnHasBeenSet)
  {
   payload.WithString("AlertArn", m_alertArn);

  }

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("AnomalyDetectorArn", m_anomalyDetectorArn);

  }

  if(m_alertNameHasBeenSet)
  {
   payload.WithString("AlertName", m_alertName);

  }

  if(m_alertSensitivityThresholdHasBeenSet)
  {
   payload.WithInteger("AlertSensitivityThreshold", m_alertSensitivityThreshold);

  }

  if(m_alertTypeHasBeenSet)
  {
   payload.WithString("AlertType", AlertTypeMapper::GetNameForAlertType(m_alertType));
  }

  if(m_alertStatusHasBeenSet)
  {
   payload.WithString("AlertStatus", AlertStatusMapper::GetNameForAlertStatus(m_alertStatus));
  }

  if(m_lastModificationTimeHasBeenSet)
  {
   payload.WithDouble("LastModificationTime", m_lastModificationTime.SecondsWithMSPrecision());
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
