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

#include <aws/dms/model/ReloadTablesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReloadTablesRequest::ReloadTablesRequest() : 
    m_replicationTaskArnHasBeenSet(false),
    m_tablesToReloadHasBeenSet(false)
{
}

Aws::String ReloadTablesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationTaskArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskArn", m_replicationTaskArn);

  }

  if(m_tablesToReloadHasBeenSet)
  {
   Array<JsonValue> tablesToReloadJsonList(m_tablesToReload.size());
   for(unsigned tablesToReloadIndex = 0; tablesToReloadIndex < tablesToReloadJsonList.GetLength(); ++tablesToReloadIndex)
   {
     tablesToReloadJsonList[tablesToReloadIndex].AsObject(m_tablesToReload[tablesToReloadIndex].Jsonize());
   }
   payload.WithArray("TablesToReload", std::move(tablesToReloadJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ReloadTablesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ReloadTables"));
  return headers;

}




