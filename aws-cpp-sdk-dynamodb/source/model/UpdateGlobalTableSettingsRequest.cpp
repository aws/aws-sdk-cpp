/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/dynamodb/model/UpdateGlobalTableSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGlobalTableSettingsRequest::UpdateGlobalTableSettingsRequest() : 
    m_globalTableNameHasBeenSet(false),
    m_globalTableProvisionedWriteCapacityUnits(0),
    m_globalTableProvisionedWriteCapacityUnitsHasBeenSet(false),
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

  if(m_globalTableProvisionedWriteCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("GlobalTableProvisionedWriteCapacityUnits", m_globalTableProvisionedWriteCapacityUnits);

  }

  if(m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet)
  {
   Array<JsonValue> globalTableGlobalSecondaryIndexSettingsUpdateJsonList(m_globalTableGlobalSecondaryIndexSettingsUpdate.size());
   for(unsigned globalTableGlobalSecondaryIndexSettingsUpdateIndex = 0; globalTableGlobalSecondaryIndexSettingsUpdateIndex < globalTableGlobalSecondaryIndexSettingsUpdateJsonList.GetLength(); ++globalTableGlobalSecondaryIndexSettingsUpdateIndex)
   {
     globalTableGlobalSecondaryIndexSettingsUpdateJsonList[globalTableGlobalSecondaryIndexSettingsUpdateIndex].AsObject(m_globalTableGlobalSecondaryIndexSettingsUpdate[globalTableGlobalSecondaryIndexSettingsUpdateIndex].Jsonize());
   }
   payload.WithArray("GlobalTableGlobalSecondaryIndexSettingsUpdate", std::move(globalTableGlobalSecondaryIndexSettingsUpdateJsonList));

  }

  if(m_replicaSettingsUpdateHasBeenSet)
  {
   Array<JsonValue> replicaSettingsUpdateJsonList(m_replicaSettingsUpdate.size());
   for(unsigned replicaSettingsUpdateIndex = 0; replicaSettingsUpdateIndex < replicaSettingsUpdateJsonList.GetLength(); ++replicaSettingsUpdateIndex)
   {
     replicaSettingsUpdateJsonList[replicaSettingsUpdateIndex].AsObject(m_replicaSettingsUpdate[replicaSettingsUpdateIndex].Jsonize());
   }
   payload.WithArray("ReplicaSettingsUpdate", std::move(replicaSettingsUpdateJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGlobalTableSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateGlobalTableSettings"));
  return headers;

}




