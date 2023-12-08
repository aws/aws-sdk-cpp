/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxDataviewListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxDataviewListEntry::KxDataviewListEntry() : 
    m_environmentIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dataviewNameHasBeenSet(false),
    m_azMode(KxAzMode::NOT_SET),
    m_azModeHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_changesetIdHasBeenSet(false),
    m_segmentConfigurationsHasBeenSet(false),
    m_activeVersionsHasBeenSet(false),
    m_status(KxDataviewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_autoUpdate(false),
    m_autoUpdateHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

KxDataviewListEntry::KxDataviewListEntry(JsonView jsonValue) : 
    m_environmentIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dataviewNameHasBeenSet(false),
    m_azMode(KxAzMode::NOT_SET),
    m_azModeHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_changesetIdHasBeenSet(false),
    m_segmentConfigurationsHasBeenSet(false),
    m_activeVersionsHasBeenSet(false),
    m_status(KxDataviewStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_autoUpdate(false),
    m_autoUpdateHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

KxDataviewListEntry& KxDataviewListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataviewName"))
  {
    m_dataviewName = jsonValue.GetString("dataviewName");

    m_dataviewNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("azMode"))
  {
    m_azMode = KxAzModeMapper::GetKxAzModeForName(jsonValue.GetString("azMode"));

    m_azModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");

    m_availabilityZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("changesetId"))
  {
    m_changesetId = jsonValue.GetString("changesetId");

    m_changesetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentConfigurations"))
  {
    Aws::Utils::Array<JsonView> segmentConfigurationsJsonList = jsonValue.GetArray("segmentConfigurations");
    for(unsigned segmentConfigurationsIndex = 0; segmentConfigurationsIndex < segmentConfigurationsJsonList.GetLength(); ++segmentConfigurationsIndex)
    {
      m_segmentConfigurations.push_back(segmentConfigurationsJsonList[segmentConfigurationsIndex].AsObject());
    }
    m_segmentConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeVersions"))
  {
    Aws::Utils::Array<JsonView> activeVersionsJsonList = jsonValue.GetArray("activeVersions");
    for(unsigned activeVersionsIndex = 0; activeVersionsIndex < activeVersionsJsonList.GetLength(); ++activeVersionsIndex)
    {
      m_activeVersions.push_back(activeVersionsJsonList[activeVersionsIndex].AsObject());
    }
    m_activeVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = KxDataviewStatusMapper::GetKxDataviewStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoUpdate"))
  {
    m_autoUpdate = jsonValue.GetBool("autoUpdate");

    m_autoUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");

    m_lastModifiedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue KxDataviewListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_dataviewNameHasBeenSet)
  {
   payload.WithString("dataviewName", m_dataviewName);

  }

  if(m_azModeHasBeenSet)
  {
   payload.WithString("azMode", KxAzModeMapper::GetNameForKxAzMode(m_azMode));
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("availabilityZoneId", m_availabilityZoneId);

  }

  if(m_changesetIdHasBeenSet)
  {
   payload.WithString("changesetId", m_changesetId);

  }

  if(m_segmentConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> segmentConfigurationsJsonList(m_segmentConfigurations.size());
   for(unsigned segmentConfigurationsIndex = 0; segmentConfigurationsIndex < segmentConfigurationsJsonList.GetLength(); ++segmentConfigurationsIndex)
   {
     segmentConfigurationsJsonList[segmentConfigurationsIndex].AsObject(m_segmentConfigurations[segmentConfigurationsIndex].Jsonize());
   }
   payload.WithArray("segmentConfigurations", std::move(segmentConfigurationsJsonList));

  }

  if(m_activeVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> activeVersionsJsonList(m_activeVersions.size());
   for(unsigned activeVersionsIndex = 0; activeVersionsIndex < activeVersionsJsonList.GetLength(); ++activeVersionsIndex)
   {
     activeVersionsJsonList[activeVersionsIndex].AsObject(m_activeVersions[activeVersionsIndex].Jsonize());
   }
   payload.WithArray("activeVersions", std::move(activeVersionsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", KxDataviewStatusMapper::GetNameForKxDataviewStatus(m_status));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_autoUpdateHasBeenSet)
  {
   payload.WithBool("autoUpdate", m_autoUpdate);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("createdTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimestampHasBeenSet)
  {
   payload.WithDouble("lastModifiedTimestamp", m_lastModifiedTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
