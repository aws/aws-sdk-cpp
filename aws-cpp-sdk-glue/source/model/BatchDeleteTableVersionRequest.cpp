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

#include <aws/glue/model/BatchDeleteTableVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteTableVersionRequest::BatchDeleteTableVersionRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_versionIdsHasBeenSet(false)
{
}

Aws::String BatchDeleteTableVersionRequest::SerializePayload() const
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

  if(m_versionIdsHasBeenSet)
  {
   Array<JsonValue> versionIdsJsonList(m_versionIds.size());
   for(unsigned versionIdsIndex = 0; versionIdsIndex < versionIdsJsonList.GetLength(); ++versionIdsIndex)
   {
     versionIdsJsonList[versionIdsIndex].AsString(m_versionIds[versionIdsIndex]);
   }
   payload.WithArray("VersionIds", std::move(versionIdsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteTableVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchDeleteTableVersion"));
  return headers;

}




