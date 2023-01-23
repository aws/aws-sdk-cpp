/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchDeletePartitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeletePartitionRequest::BatchDeletePartitionRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_partitionsToDeleteHasBeenSet(false)
{
}

Aws::String BatchDeletePartitionRequest::SerializePayload() const
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

  if(m_partitionsToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionsToDeleteJsonList(m_partitionsToDelete.size());
   for(unsigned partitionsToDeleteIndex = 0; partitionsToDeleteIndex < partitionsToDeleteJsonList.GetLength(); ++partitionsToDeleteIndex)
   {
     partitionsToDeleteJsonList[partitionsToDeleteIndex].AsObject(m_partitionsToDelete[partitionsToDeleteIndex].Jsonize());
   }
   payload.WithArray("PartitionsToDelete", std::move(partitionsToDeleteJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeletePartitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchDeletePartition"));
  return headers;

}




