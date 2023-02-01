/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/Backup.h>
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

Backup::Backup() : 
    m_backupIdHasBeenSet(false),
    m_lifecycle(BackupLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_type(BackupType::NOT_SET),
    m_typeHasBeenSet(false),
    m_progressPercent(0),
    m_progressPercentHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_fileSystemHasBeenSet(false),
    m_directoryInformationHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_sourceBackupIdHasBeenSet(false),
    m_sourceBackupRegionHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
}

Backup::Backup(JsonView jsonValue) : 
    m_backupIdHasBeenSet(false),
    m_lifecycle(BackupLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_type(BackupType::NOT_SET),
    m_typeHasBeenSet(false),
    m_progressPercent(0),
    m_progressPercentHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_fileSystemHasBeenSet(false),
    m_directoryInformationHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_sourceBackupIdHasBeenSet(false),
    m_sourceBackupRegionHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
  *this = jsonValue;
}

Backup& Backup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupId"))
  {
    m_backupId = jsonValue.GetString("BackupId");

    m_backupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = BackupLifecycleMapper::GetBackupLifecycleForName(jsonValue.GetString("Lifecycle"));

    m_lifecycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureDetails"))
  {
    m_failureDetails = jsonValue.GetObject("FailureDetails");

    m_failureDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = BackupTypeMapper::GetBackupTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProgressPercent"))
  {
    m_progressPercent = jsonValue.GetInteger("ProgressPercent");

    m_progressPercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("FileSystem"))
  {
    m_fileSystem = jsonValue.GetObject("FileSystem");

    m_fileSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryInformation"))
  {
    m_directoryInformation = jsonValue.GetObject("DirectoryInformation");

    m_directoryInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceBackupId"))
  {
    m_sourceBackupId = jsonValue.GetString("SourceBackupId");

    m_sourceBackupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceBackupRegion"))
  {
    m_sourceBackupRegion = jsonValue.GetString("SourceBackupRegion");

    m_sourceBackupRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Volume"))
  {
    m_volume = jsonValue.GetObject("Volume");

    m_volumeHasBeenSet = true;
  }

  return *this;
}

JsonValue Backup::Jsonize() const
{
  JsonValue payload;

  if(m_backupIdHasBeenSet)
  {
   payload.WithString("BackupId", m_backupId);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithString("Lifecycle", BackupLifecycleMapper::GetNameForBackupLifecycle(m_lifecycle));
  }

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("FailureDetails", m_failureDetails.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", BackupTypeMapper::GetNameForBackupType(m_type));
  }

  if(m_progressPercentHasBeenSet)
  {
   payload.WithInteger("ProgressPercent", m_progressPercent);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

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

  if(m_fileSystemHasBeenSet)
  {
   payload.WithObject("FileSystem", m_fileSystem.Jsonize());

  }

  if(m_directoryInformationHasBeenSet)
  {
   payload.WithObject("DirectoryInformation", m_directoryInformation.Jsonize());

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_sourceBackupIdHasBeenSet)
  {
   payload.WithString("SourceBackupId", m_sourceBackupId);

  }

  if(m_sourceBackupRegionHasBeenSet)
  {
   payload.WithString("SourceBackupRegion", m_sourceBackupRegion);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_volumeHasBeenSet)
  {
   payload.WithObject("Volume", m_volume.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
