/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> replicationGroupJsonList(m_replicationGroup.size());
   for(unsigned replicationGroupIndex = 0; replicationGroupIndex < replicationGroupJsonList.GetLength(); ++replicationGroupIndex)
   {
     replicationGroupJsonList[replicationGroupIndex].AsObject(m_replicationGroup[replicationGroupIndex].Jsonize());
   }
   payload.WithArray("ReplicationGroup", std::move(replicationGroupJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGlobalTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.CreateGlobalTable"));
  return headers;

}




