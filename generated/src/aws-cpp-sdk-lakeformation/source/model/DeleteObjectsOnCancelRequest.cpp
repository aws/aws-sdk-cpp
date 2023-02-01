/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/DeleteObjectsOnCancelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteObjectsOnCancelRequest::DeleteObjectsOnCancelRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_objectsHasBeenSet(false)
{
}

Aws::String DeleteObjectsOnCancelRequest::SerializePayload() const
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

  if(m_objectsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectsJsonList(m_objects.size());
   for(unsigned objectsIndex = 0; objectsIndex < objectsJsonList.GetLength(); ++objectsIndex)
   {
     objectsJsonList[objectsIndex].AsObject(m_objects[objectsIndex].Jsonize());
   }
   payload.WithArray("Objects", std::move(objectsJsonList));

  }

  return payload.View().WriteReadable();
}




