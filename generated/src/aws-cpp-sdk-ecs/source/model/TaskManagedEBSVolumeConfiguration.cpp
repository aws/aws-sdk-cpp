/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TaskManagedEBSVolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

TaskManagedEBSVolumeConfiguration::TaskManagedEBSVolumeConfiguration() : 
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_sizeInGiB(0),
    m_sizeInGiBHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_throughput(0),
    m_throughputHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_terminationPolicyHasBeenSet(false),
    m_filesystemType(TaskFilesystemType::NOT_SET),
    m_filesystemTypeHasBeenSet(false)
{
}

TaskManagedEBSVolumeConfiguration::TaskManagedEBSVolumeConfiguration(JsonView jsonValue) : 
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_sizeInGiB(0),
    m_sizeInGiBHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_throughput(0),
    m_throughputHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_terminationPolicyHasBeenSet(false),
    m_filesystemType(TaskFilesystemType::NOT_SET),
    m_filesystemTypeHasBeenSet(false)
{
  *this = jsonValue;
}

TaskManagedEBSVolumeConfiguration& TaskManagedEBSVolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encrypted"))
  {
    m_encrypted = jsonValue.GetBool("encrypted");

    m_encryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeType"))
  {
    m_volumeType = jsonValue.GetString("volumeType");

    m_volumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sizeInGiB"))
  {
    m_sizeInGiB = jsonValue.GetInteger("sizeInGiB");

    m_sizeInGiBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotId"))
  {
    m_snapshotId = jsonValue.GetString("snapshotId");

    m_snapshotIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iops"))
  {
    m_iops = jsonValue.GetInteger("iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("throughput"))
  {
    m_throughput = jsonValue.GetInteger("throughput");

    m_throughputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagSpecifications"))
  {
    Aws::Utils::Array<JsonView> tagSpecificationsJsonList = jsonValue.GetArray("tagSpecifications");
    for(unsigned tagSpecificationsIndex = 0; tagSpecificationsIndex < tagSpecificationsJsonList.GetLength(); ++tagSpecificationsIndex)
    {
      m_tagSpecifications.push_back(tagSpecificationsJsonList[tagSpecificationsIndex].AsObject());
    }
    m_tagSpecificationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("terminationPolicy"))
  {
    m_terminationPolicy = jsonValue.GetObject("terminationPolicy");

    m_terminationPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filesystemType"))
  {
    m_filesystemType = TaskFilesystemTypeMapper::GetTaskFilesystemTypeForName(jsonValue.GetString("filesystemType"));

    m_filesystemTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskManagedEBSVolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("encrypted", m_encrypted);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("volumeType", m_volumeType);

  }

  if(m_sizeInGiBHasBeenSet)
  {
   payload.WithInteger("sizeInGiB", m_sizeInGiB);

  }

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("snapshotId", m_snapshotId);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("iops", m_iops);

  }

  if(m_throughputHasBeenSet)
  {
   payload.WithInteger("throughput", m_throughput);

  }

  if(m_tagSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagSpecificationsJsonList(m_tagSpecifications.size());
   for(unsigned tagSpecificationsIndex = 0; tagSpecificationsIndex < tagSpecificationsJsonList.GetLength(); ++tagSpecificationsIndex)
   {
     tagSpecificationsJsonList[tagSpecificationsIndex].AsObject(m_tagSpecifications[tagSpecificationsIndex].Jsonize());
   }
   payload.WithArray("tagSpecifications", std::move(tagSpecificationsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_terminationPolicyHasBeenSet)
  {
   payload.WithObject("terminationPolicy", m_terminationPolicy.Jsonize());

  }

  if(m_filesystemTypeHasBeenSet)
  {
   payload.WithString("filesystemType", TaskFilesystemTypeMapper::GetNameForTaskFilesystemType(m_filesystemType));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
