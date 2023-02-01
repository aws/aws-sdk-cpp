/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetPartitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetPartitionRequest::BatchGetPartitionRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_partitionsToGetHasBeenSet(false)
{
}

Aws::String BatchGetPartitionRequest::SerializePayload() const
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

  if(m_partitionsToGetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionsToGetJsonList(m_partitionsToGet.size());
   for(unsigned partitionsToGetIndex = 0; partitionsToGetIndex < partitionsToGetJsonList.GetLength(); ++partitionsToGetIndex)
   {
     partitionsToGetJsonList[partitionsToGetIndex].AsObject(m_partitionsToGet[partitionsToGetIndex].Jsonize());
   }
   payload.WithArray("PartitionsToGet", std::move(partitionsToGetJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetPartitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchGetPartition"));
  return headers;

}




