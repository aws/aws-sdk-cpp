/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchCreatePartitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchCreatePartitionRequest::BatchCreatePartitionRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_partitionInputListHasBeenSet(false)
{
}

Aws::String BatchCreatePartitionRequest::SerializePayload() const
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

  if(m_partitionInputListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionInputListJsonList(m_partitionInputList.size());
   for(unsigned partitionInputListIndex = 0; partitionInputListIndex < partitionInputListJsonList.GetLength(); ++partitionInputListIndex)
   {
     partitionInputListJsonList[partitionInputListIndex].AsObject(m_partitionInputList[partitionInputListIndex].Jsonize());
   }
   payload.WithArray("PartitionInputList", std::move(partitionInputListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchCreatePartitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchCreatePartition"));
  return headers;

}




