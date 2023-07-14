/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/UpdateTableStorageOptimizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTableStorageOptimizerRequest::UpdateTableStorageOptimizerRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_storageOptimizerConfigHasBeenSet(false)
{
}

Aws::String UpdateTableStorageOptimizerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_storageOptimizerConfigHasBeenSet)
  {
   JsonValue storageOptimizerConfigJsonMap;
   for(auto& storageOptimizerConfigItem : m_storageOptimizerConfig)
   {
     JsonValue storageOptimizerConfigInnerJsonMap;
     for(auto& storageOptimizerConfigInnerItem : storageOptimizerConfigItem.second)
     {
       storageOptimizerConfigInnerJsonMap.WithString(storageOptimizerConfigInnerItem.first, storageOptimizerConfigInnerItem.second);
     }
     storageOptimizerConfigJsonMap.WithObject(OptimizerTypeMapper::GetNameForOptimizerType(storageOptimizerConfigItem.first), std::move(storageOptimizerConfigJsonMap));
   }
   payload.WithObject("StorageOptimizerConfig", std::move(storageOptimizerConfigJsonMap));

  }

  return payload.View().WriteReadable();
}




