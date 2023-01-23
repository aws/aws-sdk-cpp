/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTableRequest::CreateTableRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableInputHasBeenSet(false),
    m_partitionIndexesHasBeenSet(false),
    m_transactionIdHasBeenSet(false)
{
}

Aws::String CreateTableRequest::SerializePayload() const
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

  if(m_tableInputHasBeenSet)
  {
   payload.WithObject("TableInput", m_tableInput.Jsonize());

  }

  if(m_partitionIndexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionIndexesJsonList(m_partitionIndexes.size());
   for(unsigned partitionIndexesIndex = 0; partitionIndexesIndex < partitionIndexesJsonList.GetLength(); ++partitionIndexesIndex)
   {
     partitionIndexesJsonList[partitionIndexesIndex].AsObject(m_partitionIndexes[partitionIndexesIndex].Jsonize());
   }
   payload.WithArray("PartitionIndexes", std::move(partitionIndexesJsonList));

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateTable"));
  return headers;

}




