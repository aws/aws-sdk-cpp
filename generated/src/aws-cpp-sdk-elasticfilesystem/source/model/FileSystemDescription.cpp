/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/FileSystemDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

FileSystemDescription::FileSystemDescription() : 
    m_ownerIdHasBeenSet(false),
    m_creationTokenHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_fileSystemArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lifeCycleState(LifeCycleState::NOT_SET),
    m_lifeCycleStateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_numberOfMountTargets(0),
    m_numberOfMountTargetsHasBeenSet(false),
    m_sizeInBytesHasBeenSet(false),
    m_performanceMode(PerformanceMode::NOT_SET),
    m_performanceModeHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_throughputMode(ThroughputMode::NOT_SET),
    m_throughputModeHasBeenSet(false),
    m_provisionedThroughputInMibps(0.0),
    m_provisionedThroughputInMibpsHasBeenSet(false),
    m_availabilityZoneNameHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

FileSystemDescription::FileSystemDescription(JsonView jsonValue) : 
    m_ownerIdHasBeenSet(false),
    m_creationTokenHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_fileSystemArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lifeCycleState(LifeCycleState::NOT_SET),
    m_lifeCycleStateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_numberOfMountTargets(0),
    m_numberOfMountTargetsHasBeenSet(false),
    m_sizeInBytesHasBeenSet(false),
    m_performanceMode(PerformanceMode::NOT_SET),
    m_performanceModeHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_throughputMode(ThroughputMode::NOT_SET),
    m_throughputModeHasBeenSet(false),
    m_provisionedThroughputInMibps(0.0),
    m_provisionedThroughputInMibpsHasBeenSet(false),
    m_availabilityZoneNameHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystemDescription& FileSystemDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationToken"))
  {
    m_creationToken = jsonValue.GetString("CreationToken");

    m_creationTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemArn"))
  {
    m_fileSystemArn = jsonValue.GetString("FileSystemArn");

    m_fileSystemArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifeCycleState"))
  {
    m_lifeCycleState = LifeCycleStateMapper::GetLifeCycleStateForName(jsonValue.GetString("LifeCycleState"));

    m_lifeCycleStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfMountTargets"))
  {
    m_numberOfMountTargets = jsonValue.GetInteger("NumberOfMountTargets");

    m_numberOfMountTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeInBytes"))
  {
    m_sizeInBytes = jsonValue.GetObject("SizeInBytes");

    m_sizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PerformanceMode"))
  {
    m_performanceMode = PerformanceModeMapper::GetPerformanceModeForName(jsonValue.GetString("PerformanceMode"));

    m_performanceModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encrypted"))
  {
    m_encrypted = jsonValue.GetBool("Encrypted");

    m_encryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThroughputMode"))
  {
    m_throughputMode = ThroughputModeMapper::GetThroughputModeForName(jsonValue.GetString("ThroughputMode"));

    m_throughputModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedThroughputInMibps"))
  {
    m_provisionedThroughputInMibps = jsonValue.GetDouble("ProvisionedThroughputInMibps");

    m_provisionedThroughputInMibpsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZoneName"))
  {
    m_availabilityZoneName = jsonValue.GetString("AvailabilityZoneName");

    m_availabilityZoneNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("AvailabilityZoneId");

    m_availabilityZoneIdHasBeenSet = true;
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

  return *this;
}

JsonValue FileSystemDescription::Jsonize() const
{
  JsonValue payload;

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_creationTokenHasBeenSet)
  {
   payload.WithString("CreationToken", m_creationToken);

  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_fileSystemArnHasBeenSet)
  {
   payload.WithString("FileSystemArn", m_fileSystemArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lifeCycleStateHasBeenSet)
  {
   payload.WithString("LifeCycleState", LifeCycleStateMapper::GetNameForLifeCycleState(m_lifeCycleState));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_numberOfMountTargetsHasBeenSet)
  {
   payload.WithInteger("NumberOfMountTargets", m_numberOfMountTargets);

  }

  if(m_sizeInBytesHasBeenSet)
  {
   payload.WithObject("SizeInBytes", m_sizeInBytes.Jsonize());

  }

  if(m_performanceModeHasBeenSet)
  {
   payload.WithString("PerformanceMode", PerformanceModeMapper::GetNameForPerformanceMode(m_performanceMode));
  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("Encrypted", m_encrypted);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_throughputModeHasBeenSet)
  {
   payload.WithString("ThroughputMode", ThroughputModeMapper::GetNameForThroughputMode(m_throughputMode));
  }

  if(m_provisionedThroughputInMibpsHasBeenSet)
  {
   payload.WithDouble("ProvisionedThroughputInMibps", m_provisionedThroughputInMibps);

  }

  if(m_availabilityZoneNameHasBeenSet)
  {
   payload.WithString("AvailabilityZoneName", m_availabilityZoneName);

  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("AvailabilityZoneId", m_availabilityZoneId);

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

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
