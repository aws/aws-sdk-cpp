/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PutStorageConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutStorageConfigurationRequest::PutStorageConfigurationRequest() : 
    m_storageType(StorageType::NOT_SET),
    m_storageTypeHasBeenSet(false),
    m_multiLayerStorageHasBeenSet(false),
    m_disassociatedDataStorage(DisassociatedDataStorageState::NOT_SET),
    m_disassociatedDataStorageHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_warmTier(WarmTierState::NOT_SET),
    m_warmTierHasBeenSet(false),
    m_warmTierRetentionPeriodHasBeenSet(false)
{
}

Aws::String PutStorageConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("storageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  if(m_multiLayerStorageHasBeenSet)
  {
   payload.WithObject("multiLayerStorage", m_multiLayerStorage.Jsonize());

  }

  if(m_disassociatedDataStorageHasBeenSet)
  {
   payload.WithString("disassociatedDataStorage", DisassociatedDataStorageStateMapper::GetNameForDisassociatedDataStorageState(m_disassociatedDataStorage));
  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithObject("retentionPeriod", m_retentionPeriod.Jsonize());

  }

  if(m_warmTierHasBeenSet)
  {
   payload.WithString("warmTier", WarmTierStateMapper::GetNameForWarmTierState(m_warmTier));
  }

  if(m_warmTierRetentionPeriodHasBeenSet)
  {
   payload.WithObject("warmTierRetentionPeriod", m_warmTierRetentionPeriod.Jsonize());

  }

  return payload.View().WriteReadable();
}




