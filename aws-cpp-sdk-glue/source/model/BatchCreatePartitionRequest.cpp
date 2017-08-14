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
   Array<JsonValue> partitionInputListJsonList(m_partitionInputList.size());
   for(unsigned partitionInputListIndex = 0; partitionInputListIndex < partitionInputListJsonList.GetLength(); ++partitionInputListIndex)
   {
     partitionInputListJsonList[partitionInputListIndex].AsObject(m_partitionInputList[partitionInputListIndex].Jsonize());
   }
   payload.WithArray("PartitionInputList", std::move(partitionInputListJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection BatchCreatePartitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchCreatePartition"));
  return headers;

}




