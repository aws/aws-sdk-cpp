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

#include <aws/glue/model/BatchDeleteTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteTableRequest::BatchDeleteTableRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tablesToDeleteHasBeenSet(false)
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
   Array<JsonValue> tablesToDeleteJsonList(m_tablesToDelete.size());
   for(unsigned tablesToDeleteIndex = 0; tablesToDeleteIndex < tablesToDeleteJsonList.GetLength(); ++tablesToDeleteIndex)
   {
     tablesToDeleteJsonList[tablesToDeleteIndex].AsString(m_tablesToDelete[tablesToDeleteIndex]);
   }
   payload.WithArray("TablesToDelete", std::move(tablesToDeleteJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchDeleteTable"));
  return headers;

}




