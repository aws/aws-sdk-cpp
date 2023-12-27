/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxVolume.h>
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

KxVolume::KxVolume() : 
    m_volumeNameHasBeenSet(false),
    m_volumeType(KxVolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false),
    m_status(KxVolumeStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_azMode(KxAzMode::NOT_SET),
    m_azModeHasBeenSet(false),
    m_availabilityZoneIdsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false)
{
}

KxVolume::KxVolume(JsonView jsonValue) : 
    m_volumeNameHasBeenSet(false),
    m_volumeType(KxVolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false),
    m_status(KxVolumeStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_azMode(KxAzMode::NOT_SET),
    m_azModeHasBeenSet(false),
    m_availabilityZoneIdsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

KxVolume& KxVolume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("volumeName"))
  {
    m_volumeName = jsonValue.GetString("volumeName");

    m_volumeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeType"))
  {
    m_volumeType = KxVolumeTypeMapper::GetKxVolumeTypeForName(jsonValue.GetString("volumeType"));

    m_volumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = KxVolumeStatusMapper::GetKxVolumeStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("azMode"))
  {
    m_azMode = KxAzModeMapper::GetKxAzModeForName(jsonValue.GetString("azMode"));

    m_azModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZoneIds"))
  {
    Aws::Utils::Array<JsonView> availabilityZoneIdsJsonList = jsonValue.GetArray("availabilityZoneIds");
    for(unsigned availabilityZoneIdsIndex = 0; availabilityZoneIdsIndex < availabilityZoneIdsJsonList.GetLength(); ++availabilityZoneIdsIndex)
    {
      m_availabilityZoneIds.push_back(availabilityZoneIdsJsonList[availabilityZoneIdsIndex].AsString());
    }
    m_availabilityZoneIdsHasBeenSet = true;
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

  return *this;
}

JsonValue KxVolume::Jsonize() const
{
  JsonValue payload;

  if(m_volumeNameHasBeenSet)
  {
   payload.WithString("volumeName", m_volumeName);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("volumeType", KxVolumeTypeMapper::GetNameForKxVolumeType(m_volumeType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", KxVolumeStatusMapper::GetNameForKxVolumeStatus(m_status));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_azModeHasBeenSet)
  {
   payload.WithString("azMode", KxAzModeMapper::GetNameForKxAzMode(m_azMode));
  }

  if(m_availabilityZoneIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZoneIdsJsonList(m_availabilityZoneIds.size());
   for(unsigned availabilityZoneIdsIndex = 0; availabilityZoneIdsIndex < availabilityZoneIdsJsonList.GetLength(); ++availabilityZoneIdsIndex)
   {
     availabilityZoneIdsJsonList[availabilityZoneIdsIndex].AsString(m_availabilityZoneIds[availabilityZoneIdsIndex]);
   }
   payload.WithArray("availabilityZoneIds", std::move(availabilityZoneIdsJsonList));

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("createdTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimestampHasBeenSet)
  {
   payload.WithDouble("lastModifiedTimestamp", m_lastModifiedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
