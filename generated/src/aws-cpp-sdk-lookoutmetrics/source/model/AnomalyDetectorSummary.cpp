/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AnomalyDetectorSummary.h>
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

AnomalyDetectorSummary::AnomalyDetectorSummary() : 
    m_anomalyDetectorArnHasBeenSet(false),
    m_anomalyDetectorNameHasBeenSet(false),
    m_anomalyDetectorDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false),
    m_status(AnomalyDetectorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

AnomalyDetectorSummary::AnomalyDetectorSummary(JsonView jsonValue) : 
    m_anomalyDetectorArnHasBeenSet(false),
    m_anomalyDetectorNameHasBeenSet(false),
    m_anomalyDetectorDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false),
    m_status(AnomalyDetectorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyDetectorSummary& AnomalyDetectorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnomalyDetectorArn"))
  {
    m_anomalyDetectorArn = jsonValue.GetString("AnomalyDetectorArn");

    m_anomalyDetectorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyDetectorName"))
  {
    m_anomalyDetectorName = jsonValue.GetString("AnomalyDetectorName");

    m_anomalyDetectorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyDetectorDescription"))
  {
    m_anomalyDetectorDescription = jsonValue.GetString("AnomalyDetectorDescription");

    m_anomalyDetectorDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

    m_lastModificationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AnomalyDetectorStatusMapper::GetAnomalyDetectorStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
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

JsonValue AnomalyDetectorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("AnomalyDetectorArn", m_anomalyDetectorArn);

  }

  if(m_anomalyDetectorNameHasBeenSet)
  {
   payload.WithString("AnomalyDetectorName", m_anomalyDetectorName);

  }

  if(m_anomalyDetectorDescriptionHasBeenSet)
  {
   payload.WithString("AnomalyDetectorDescription", m_anomalyDetectorDescription);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModificationTimeHasBeenSet)
  {
   payload.WithDouble("LastModificationTime", m_lastModificationTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AnomalyDetectorStatusMapper::GetNameForAnomalyDetectorStatus(m_status));
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
