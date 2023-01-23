/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/Snapshot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

Snapshot::Snapshot() : 
    m_resourceARNHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lifecycle(SnapshotLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_lifecycleTransitionReasonHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_administrativeActionsHasBeenSet(false)
{
}

Snapshot::Snapshot(JsonView jsonValue) : 
    m_resourceARNHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lifecycle(SnapshotLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_lifecycleTransitionReasonHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_administrativeActionsHasBeenSet(false)
{
  *this = jsonValue;
}

Snapshot& Snapshot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceARN"))
  {
    m_resourceARN = jsonValue.GetString("ResourceARN");

    m_resourceARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotId"))
  {
    m_snapshotId = jsonValue.GetString("SnapshotId");

    m_snapshotIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeId"))
  {
    m_volumeId = jsonValue.GetString("VolumeId");

    m_volumeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = SnapshotLifecycleMapper::GetSnapshotLifecycleForName(jsonValue.GetString("Lifecycle"));

    m_lifecycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifecycleTransitionReason"))
  {
    m_lifecycleTransitionReason = jsonValue.GetObject("LifecycleTransitionReason");

    m_lifecycleTransitionReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdministrativeActions"))
  {
    Aws::Utils::Array<JsonView> administrativeActionsJsonList = jsonValue.GetArray("AdministrativeActions");
    for(unsigned administrativeActionsIndex = 0; administrativeActionsIndex < administrativeActionsJsonList.GetLength(); ++administrativeActionsIndex)
    {
      m_administrativeActions.push_back(administrativeActionsJsonList[administrativeActionsIndex].AsObject());
    }
    m_administrativeActionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Snapshot::Jsonize() const
{
  JsonValue payload;

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("SnapshotId", m_snapshotId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("VolumeId", m_volumeId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithString("Lifecycle", SnapshotLifecycleMapper::GetNameForSnapshotLifecycle(m_lifecycle));
  }

  if(m_lifecycleTransitionReasonHasBeenSet)
  {
   payload.WithObject("LifecycleTransitionReason", m_lifecycleTransitionReason.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_administrativeActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> administrativeActionsJsonList(m_administrativeActions.size());
   for(unsigned administrativeActionsIndex = 0; administrativeActionsIndex < administrativeActionsJsonList.GetLength(); ++administrativeActionsIndex)
   {
     administrativeActionsJsonList[administrativeActionsIndex].AsObject(m_administrativeActions[administrativeActionsIndex].Jsonize());
   }
   payload.WithArray("AdministrativeActions", std::move(administrativeActionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
