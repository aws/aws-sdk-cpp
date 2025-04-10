﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/CreateFileSystemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateFileSystemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_creationTokenHasBeenSet)
  {
   payload.WithString("CreationToken", m_creationToken);

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

  if(m_backupHasBeenSet)
  {
   payload.WithBool("Backup", m_backup);

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

  return payload.View().WriteReadable();
}




