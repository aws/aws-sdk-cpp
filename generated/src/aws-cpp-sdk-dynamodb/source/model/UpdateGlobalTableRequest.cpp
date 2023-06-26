/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/UpdateGlobalTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGlobalTableRequest::UpdateGlobalTableRequest() : 
    m_globalTableNameHasBeenSet(false),
    m_replicaUpdatesHasBeenSet(false)
{
}

Aws::String UpdateGlobalTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_globalTableNameHasBeenSet)
  {
   payload.WithString("GlobalTableName", m_globalTableName);

  }

  if(m_replicaUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicaUpdatesJsonList(m_replicaUpdates.size());
   for(unsigned replicaUpdatesIndex = 0; replicaUpdatesIndex < replicaUpdatesJsonList.GetLength(); ++replicaUpdatesIndex)
   {
     replicaUpdatesJsonList[replicaUpdatesIndex].AsObject(m_replicaUpdates[replicaUpdatesIndex].Jsonize());
   }
   payload.WithArray("ReplicaUpdates", std::move(replicaUpdatesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGlobalTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateGlobalTable"));
  return headers;

}




