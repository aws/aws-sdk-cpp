/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/UpdateGlobalTableSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGlobalTableSettingsRequest::UpdateGlobalTableSettingsRequest() : 
    m_globalTableNameHasBeenSet(false),
    m_globalTableBillingMode(BillingMode::NOT_SET),
    m_globalTableBillingModeHasBeenSet(false),
    m_globalTableProvisionedWriteCapacityUnits(0),
    m_globalTableProvisionedWriteCapacityUnitsHasBeenSet(false),
    m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet(false),
    m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet(false),
    m_replicaSettingsUpdateHasBeenSet(false)
{
}

Aws::String UpdateGlobalTableSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_globalTableNameHasBeenSet)
  {
   payload.WithString("GlobalTableName", m_globalTableName);

  }

  if(m_globalTableBillingModeHasBeenSet)
  {
   payload.WithString("GlobalTableBillingMode", BillingModeMapper::GetNameForBillingMode(m_globalTableBillingMode));
  }

  if(m_globalTableProvisionedWriteCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("GlobalTableProvisionedWriteCapacityUnits", m_globalTableProvisionedWriteCapacityUnits);

  }

  if(m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet)
  {
   payload.WithObject("GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate", m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate.Jsonize());

  }

  if(m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> globalTableGlobalSecondaryIndexSettingsUpdateJsonList(m_globalTableGlobalSecondaryIndexSettingsUpdate.size());
   for(unsigned globalTableGlobalSecondaryIndexSettingsUpdateIndex = 0; globalTableGlobalSecondaryIndexSettingsUpdateIndex < globalTableGlobalSecondaryIndexSettingsUpdateJsonList.GetLength(); ++globalTableGlobalSecondaryIndexSettingsUpdateIndex)
   {
     globalTableGlobalSecondaryIndexSettingsUpdateJsonList[globalTableGlobalSecondaryIndexSettingsUpdateIndex].AsObject(m_globalTableGlobalSecondaryIndexSettingsUpdate[globalTableGlobalSecondaryIndexSettingsUpdateIndex].Jsonize());
   }
   payload.WithArray("GlobalTableGlobalSecondaryIndexSettingsUpdate", std::move(globalTableGlobalSecondaryIndexSettingsUpdateJsonList));

  }

  if(m_replicaSettingsUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicaSettingsUpdateJsonList(m_replicaSettingsUpdate.size());
   for(unsigned replicaSettingsUpdateIndex = 0; replicaSettingsUpdateIndex < replicaSettingsUpdateJsonList.GetLength(); ++replicaSettingsUpdateIndex)
   {
     replicaSettingsUpdateJsonList[replicaSettingsUpdateIndex].AsObject(m_replicaSettingsUpdate[replicaSettingsUpdateIndex].Jsonize());
   }
   payload.WithArray("ReplicaSettingsUpdate", std::move(replicaSettingsUpdateJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGlobalTableSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateGlobalTableSettings"));
  return headers;

}




