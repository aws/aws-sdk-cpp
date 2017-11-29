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
   Array<JsonValue> replicaUpdatesJsonList(m_replicaUpdates.size());
   for(unsigned replicaUpdatesIndex = 0; replicaUpdatesIndex < replicaUpdatesJsonList.GetLength(); ++replicaUpdatesIndex)
   {
     replicaUpdatesJsonList[replicaUpdatesIndex].AsObject(m_replicaUpdates[replicaUpdatesIndex].Jsonize());
   }
   payload.WithArray("ReplicaUpdates", std::move(replicaUpdatesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGlobalTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateGlobalTable"));
  return headers;

}




