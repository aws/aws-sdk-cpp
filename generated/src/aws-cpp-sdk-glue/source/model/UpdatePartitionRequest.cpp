/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdatePartitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePartitionRequest::UpdatePartitionRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_partitionValueListHasBeenSet(false),
    m_partitionInputHasBeenSet(false)
{
}

Aws::String UpdatePartitionRequest::SerializePayload() const
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

  if(m_partitionValueListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionValueListJsonList(m_partitionValueList.size());
   for(unsigned partitionValueListIndex = 0; partitionValueListIndex < partitionValueListJsonList.GetLength(); ++partitionValueListIndex)
   {
     partitionValueListJsonList[partitionValueListIndex].AsString(m_partitionValueList[partitionValueListIndex]);
   }
   payload.WithArray("PartitionValueList", std::move(partitionValueListJsonList));

  }

  if(m_partitionInputHasBeenSet)
  {
   payload.WithObject("PartitionInput", m_partitionInput.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePartitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdatePartition"));
  return headers;

}




