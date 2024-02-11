/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/HealthEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

HealthEvent::HealthEvent() : 
    m_eventArnHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_impactedLocationsHasBeenSet(false),
    m_status(HealthEventStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_percentOfTotalTrafficImpacted(0.0),
    m_percentOfTotalTrafficImpactedHasBeenSet(false),
    m_impactType(HealthEventImpactType::NOT_SET),
    m_impactTypeHasBeenSet(false),
    m_healthScoreThreshold(0.0),
    m_healthScoreThresholdHasBeenSet(false)
{
}

HealthEvent::HealthEvent(JsonView jsonValue) : 
    m_eventArnHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_impactedLocationsHasBeenSet(false),
    m_status(HealthEventStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_percentOfTotalTrafficImpacted(0.0),
    m_percentOfTotalTrafficImpactedHasBeenSet(false),
    m_impactType(HealthEventImpactType::NOT_SET),
    m_impactTypeHasBeenSet(false),
    m_healthScoreThreshold(0.0),
    m_healthScoreThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

HealthEvent& HealthEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventArn"))
  {
    m_eventArn = jsonValue.GetString("EventArn");

    m_eventArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventId"))
  {
    m_eventId = jsonValue.GetString("EventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetString("StartedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndedAt"))
  {
    m_endedAt = jsonValue.GetString("EndedAt");

    m_endedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImpactedLocations"))
  {
    Aws::Utils::Array<JsonView> impactedLocationsJsonList = jsonValue.GetArray("ImpactedLocations");
    for(unsigned impactedLocationsIndex = 0; impactedLocationsIndex < impactedLocationsJsonList.GetLength(); ++impactedLocationsIndex)
    {
      m_impactedLocations.push_back(impactedLocationsJsonList[impactedLocationsIndex].AsObject());
    }
    m_impactedLocationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = HealthEventStatusMapper::GetHealthEventStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PercentOfTotalTrafficImpacted"))
  {
    m_percentOfTotalTrafficImpacted = jsonValue.GetDouble("PercentOfTotalTrafficImpacted");

    m_percentOfTotalTrafficImpactedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImpactType"))
  {
    m_impactType = HealthEventImpactTypeMapper::GetHealthEventImpactTypeForName(jsonValue.GetString("ImpactType"));

    m_impactTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthScoreThreshold"))
  {
    m_healthScoreThreshold = jsonValue.GetDouble("HealthScoreThreshold");

    m_healthScoreThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue HealthEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventArnHasBeenSet)
  {
   payload.WithString("EventArn", m_eventArn);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("EventId", m_eventId);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("StartedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("EndedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("LastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_impactedLocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> impactedLocationsJsonList(m_impactedLocations.size());
   for(unsigned impactedLocationsIndex = 0; impactedLocationsIndex < impactedLocationsJsonList.GetLength(); ++impactedLocationsIndex)
   {
     impactedLocationsJsonList[impactedLocationsIndex].AsObject(m_impactedLocations[impactedLocationsIndex].Jsonize());
   }
   payload.WithArray("ImpactedLocations", std::move(impactedLocationsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", HealthEventStatusMapper::GetNameForHealthEventStatus(m_status));
  }

  if(m_percentOfTotalTrafficImpactedHasBeenSet)
  {
   payload.WithDouble("PercentOfTotalTrafficImpacted", m_percentOfTotalTrafficImpacted);

  }

  if(m_impactTypeHasBeenSet)
  {
   payload.WithString("ImpactType", HealthEventImpactTypeMapper::GetNameForHealthEventImpactType(m_impactType));
  }

  if(m_healthScoreThresholdHasBeenSet)
  {
   payload.WithDouble("HealthScoreThreshold", m_healthScoreThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
