/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/UpdateStorageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateStorageRequest::UpdateStorageRequest() : 
    m_clusterArnHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_storageMode(StorageMode::NOT_SET),
    m_storageModeHasBeenSet(false),
    m_volumeSizeGB(0),
    m_volumeSizeGBHasBeenSet(false)
{
}

Aws::String UpdateStorageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  if(m_provisionedThroughputHasBeenSet)
  {
   payload.WithObject("provisionedThroughput", m_provisionedThroughput.Jsonize());

  }

  if(m_storageModeHasBeenSet)
  {
   payload.WithString("storageMode", StorageModeMapper::GetNameForStorageMode(m_storageMode));
  }

  if(m_volumeSizeGBHasBeenSet)
  {
   payload.WithInteger("volumeSizeGB", m_volumeSizeGB);

  }

  return payload.View().WriteReadable();
}




