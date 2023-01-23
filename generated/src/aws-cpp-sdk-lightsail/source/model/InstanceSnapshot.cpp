/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InstanceSnapshot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

InstanceSnapshot::InstanceSnapshot() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_state(InstanceSnapshotState::NOT_SET),
    m_stateHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_fromAttachedDisksHasBeenSet(false),
    m_fromInstanceNameHasBeenSet(false),
    m_fromInstanceArnHasBeenSet(false),
    m_fromBlueprintIdHasBeenSet(false),
    m_fromBundleIdHasBeenSet(false),
    m_isFromAutoSnapshot(false),
    m_isFromAutoSnapshotHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false)
{
}

InstanceSnapshot::InstanceSnapshot(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_state(InstanceSnapshotState::NOT_SET),
    m_stateHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_fromAttachedDisksHasBeenSet(false),
    m_fromInstanceNameHasBeenSet(false),
    m_fromInstanceArnHasBeenSet(false),
    m_fromBlueprintIdHasBeenSet(false),
    m_fromBundleIdHasBeenSet(false),
    m_isFromAutoSnapshot(false),
    m_isFromAutoSnapshotHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceSnapshot& InstanceSnapshot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportCode"))
  {
    m_supportCode = jsonValue.GetString("supportCode");

    m_supportCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = InstanceSnapshotStateMapper::GetInstanceSnapshotStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progress"))
  {
    m_progress = jsonValue.GetString("progress");

    m_progressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromAttachedDisks"))
  {
    Aws::Utils::Array<JsonView> fromAttachedDisksJsonList = jsonValue.GetArray("fromAttachedDisks");
    for(unsigned fromAttachedDisksIndex = 0; fromAttachedDisksIndex < fromAttachedDisksJsonList.GetLength(); ++fromAttachedDisksIndex)
    {
      m_fromAttachedDisks.push_back(fromAttachedDisksJsonList[fromAttachedDisksIndex].AsObject());
    }
    m_fromAttachedDisksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromInstanceName"))
  {
    m_fromInstanceName = jsonValue.GetString("fromInstanceName");

    m_fromInstanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromInstanceArn"))
  {
    m_fromInstanceArn = jsonValue.GetString("fromInstanceArn");

    m_fromInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromBlueprintId"))
  {
    m_fromBlueprintId = jsonValue.GetString("fromBlueprintId");

    m_fromBlueprintIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromBundleId"))
  {
    m_fromBundleId = jsonValue.GetString("fromBundleId");

    m_fromBundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isFromAutoSnapshot"))
  {
    m_isFromAutoSnapshot = jsonValue.GetBool("isFromAutoSnapshot");

    m_isFromAutoSnapshotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sizeInGb"))
  {
    m_sizeInGb = jsonValue.GetInteger("sizeInGb");

    m_sizeInGbHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceSnapshot::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_supportCodeHasBeenSet)
  {
   payload.WithString("supportCode", m_supportCode);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", InstanceSnapshotStateMapper::GetNameForInstanceSnapshotState(m_state));
  }

  if(m_progressHasBeenSet)
  {
   payload.WithString("progress", m_progress);

  }

  if(m_fromAttachedDisksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fromAttachedDisksJsonList(m_fromAttachedDisks.size());
   for(unsigned fromAttachedDisksIndex = 0; fromAttachedDisksIndex < fromAttachedDisksJsonList.GetLength(); ++fromAttachedDisksIndex)
   {
     fromAttachedDisksJsonList[fromAttachedDisksIndex].AsObject(m_fromAttachedDisks[fromAttachedDisksIndex].Jsonize());
   }
   payload.WithArray("fromAttachedDisks", std::move(fromAttachedDisksJsonList));

  }

  if(m_fromInstanceNameHasBeenSet)
  {
   payload.WithString("fromInstanceName", m_fromInstanceName);

  }

  if(m_fromInstanceArnHasBeenSet)
  {
   payload.WithString("fromInstanceArn", m_fromInstanceArn);

  }

  if(m_fromBlueprintIdHasBeenSet)
  {
   payload.WithString("fromBlueprintId", m_fromBlueprintId);

  }

  if(m_fromBundleIdHasBeenSet)
  {
   payload.WithString("fromBundleId", m_fromBundleId);

  }

  if(m_isFromAutoSnapshotHasBeenSet)
  {
   payload.WithBool("isFromAutoSnapshot", m_isFromAutoSnapshot);

  }

  if(m_sizeInGbHasBeenSet)
  {
   payload.WithInteger("sizeInGb", m_sizeInGb);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
