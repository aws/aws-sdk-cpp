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

#include <aws/dynamodb/model/CreateGlobalTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGlobalTableRequest::CreateGlobalTableRequest() : 
    m_globalTableNameHasBeenSet(false),
    m_replicationGroupHasBeenSet(false)
{
}

Aws::String CreateGlobalTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_globalTableNameHasBeenSet)
  {
   payload.WithString("GlobalTableName", m_globalTableName);

  }

  if(m_replicationGroupHasBeenSet)
  {
   Array<JsonValue> replicationGroupJsonList(m_replicationGroup.size());
   for(unsigned replicationGroupIndex = 0; replicationGroupIndex < replicationGroupJsonList.GetLength(); ++replicationGroupIndex)
   {
     replicationGroupJsonList[replicationGroupIndex].AsObject(m_replicationGroup[replicationGroupIndex].Jsonize());
   }
   payload.WithArray("ReplicationGroup", std::move(replicationGroupJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGlobalTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.CreateGlobalTable"));
  return headers;

}




