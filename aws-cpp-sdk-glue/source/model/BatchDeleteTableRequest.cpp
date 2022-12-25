/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchDeleteTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteTableRequest::BatchDeleteTableRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tablesToDeleteHasBeenSet(false),
    m_transactionIdHasBeenSet(false)
{
}

Aws::String BatchDeleteTableRequest::SerializePayload() const
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

  if(m_tablesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tablesToDeleteJsonList(m_tablesToDelete.size());
   for(unsigned tablesToDeleteIndex = 0; tablesToDeleteIndex < tablesToDeleteJsonList.GetLength(); ++tablesToDeleteIndex)
   {
     tablesToDeleteJsonList[tablesToDeleteIndex].AsString(m_tablesToDelete[tablesToDeleteIndex]);
   }
   payload.WithArray("TablesToDelete", std::move(tablesToDeleteJsonList));

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchDeleteTable"));
  return headers;

}




