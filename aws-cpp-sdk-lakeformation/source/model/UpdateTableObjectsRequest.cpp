/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/UpdateTableObjectsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTableObjectsRequest::UpdateTableObjectsRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_writeOperationsHasBeenSet(false)
{
}

Aws::String UpdateTableObjectsRequest::SerializePayload() const
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

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  if(m_writeOperationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> writeOperationsJsonList(m_writeOperations.size());
   for(unsigned writeOperationsIndex = 0; writeOperationsIndex < writeOperationsJsonList.GetLength(); ++writeOperationsIndex)
   {
     writeOperationsJsonList[writeOperationsIndex].AsObject(m_writeOperations[writeOperationsIndex].Jsonize());
   }
   payload.WithArray("WriteOperations", std::move(writeOperationsJsonList));

  }

  return payload.View().WriteReadable();
}




