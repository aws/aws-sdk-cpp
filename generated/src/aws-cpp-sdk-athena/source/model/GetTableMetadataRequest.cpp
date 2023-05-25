/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetTableMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTableMetadataRequest::GetTableMetadataRequest() : 
    m_catalogNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

Aws::String GetTableMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogNameHasBeenSet)
  {
   payload.WithString("CatalogName", m_catalogName);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTableMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.GetTableMetadata"));
  return headers;

}




