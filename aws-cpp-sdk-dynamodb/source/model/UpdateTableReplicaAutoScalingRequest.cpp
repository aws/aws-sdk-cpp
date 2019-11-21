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

#include <aws/dynamodb/model/UpdateTableReplicaAutoScalingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTableReplicaAutoScalingRequest::UpdateTableReplicaAutoScalingRequest() : 
    m_globalSecondaryIndexUpdatesHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet(false),
    m_replicaUpdatesHasBeenSet(false)
{
}

Aws::String UpdateTableReplicaAutoScalingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_globalSecondaryIndexUpdatesHasBeenSet)
  {
   Array<JsonValue> globalSecondaryIndexUpdatesJsonList(m_globalSecondaryIndexUpdates.size());
   for(unsigned globalSecondaryIndexUpdatesIndex = 0; globalSecondaryIndexUpdatesIndex < globalSecondaryIndexUpdatesJsonList.GetLength(); ++globalSecondaryIndexUpdatesIndex)
   {
     globalSecondaryIndexUpdatesJsonList[globalSecondaryIndexUpdatesIndex].AsObject(m_globalSecondaryIndexUpdates[globalSecondaryIndexUpdatesIndex].Jsonize());
   }
   payload.WithArray("GlobalSecondaryIndexUpdates", std::move(globalSecondaryIndexUpdatesJsonList));

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet)
  {
   payload.WithObject("ProvisionedWriteCapacityAutoScalingUpdate", m_provisionedWriteCapacityAutoScalingUpdate.Jsonize());

  }

  if(m_replicaUpdatesHasBeenSet)
  {
   Array<JsonValue> replicaUpdatesJsonList(m_replicaUpdates.size());
   for(unsigned replicaUpdatesIndex = 0; replicaUpdatesIndex < replicaUpdatesJsonList.GetLength(); ++replicaUpdatesIndex)
   {
     replicaUpdatesJsonList[replicaUpdatesIndex].AsObject(m_replicaUpdates[replicaUpdatesIndex].Jsonize());
   }
   payload.WithArray("ReplicaUpdates", std::move(replicaUpdatesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTableReplicaAutoScalingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateTableReplicaAutoScaling"));
  return headers;

}




