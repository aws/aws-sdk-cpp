/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/Volume.h>
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

Volume::Volume() : 
    m_creationTimeHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_lifecycle(VolumeLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ontapConfigurationHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false),
    m_lifecycleTransitionReasonHasBeenSet(false),
    m_administrativeActionsHasBeenSet(false),
    m_openZFSConfigurationHasBeenSet(false)
{
}

Volume::Volume(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_lifecycle(VolumeLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ontapConfigurationHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false),
    m_lifecycleTransitionReasonHasBeenSet(false),
    m_administrativeActionsHasBeenSet(false),
    m_openZFSConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Volume& Volume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = VolumeLifecycleMapper::GetVolumeLifecycleForName(jsonValue.GetString("Lifecycle"));

    m_lifecycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OntapConfiguration"))
  {
    m_ontapConfiguration = jsonValue.GetObject("OntapConfiguration");

    m_ontapConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceARN"))
  {
    m_resourceARN = jsonValue.GetString("ResourceARN");

    m_resourceARNHasBeenSet = true;
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

  if(jsonValue.ValueExists("VolumeId"))
  {
    m_volumeId = jsonValue.GetString("VolumeId");

    m_volumeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeType"))
  {
    m_volumeType = VolumeTypeMapper::GetVolumeTypeForName(jsonValue.GetString("VolumeType"));

    m_volumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifecycleTransitionReason"))
  {
    m_lifecycleTransitionReason = jsonValue.GetObject("LifecycleTransitionReason");

    m_lifecycleTransitionReasonHasBeenSet = true;
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

  if(jsonValue.ValueExists("OpenZFSConfiguration"))
  {
    m_openZFSConfiguration = jsonValue.GetObject("OpenZFSConfiguration");

    m_openZFSConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Volume::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithString("Lifecycle", VolumeLifecycleMapper::GetNameForVolumeLifecycle(m_lifecycle));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ontapConfigurationHasBeenSet)
  {
   payload.WithObject("OntapConfiguration", m_ontapConfiguration.Jsonize());

  }

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

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

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("VolumeId", m_volumeId);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", VolumeTypeMapper::GetNameForVolumeType(m_volumeType));
  }

  if(m_lifecycleTransitionReasonHasBeenSet)
  {
   payload.WithObject("LifecycleTransitionReason", m_lifecycleTransitionReason.Jsonize());

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

  if(m_openZFSConfigurationHasBeenSet)
  {
   payload.WithObject("OpenZFSConfiguration", m_openZFSConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
