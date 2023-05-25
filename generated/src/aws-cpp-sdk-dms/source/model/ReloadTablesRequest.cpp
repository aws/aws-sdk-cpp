/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReloadTablesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReloadTablesRequest::ReloadTablesRequest() : 
    m_replicationTaskArnHasBeenSet(false),
    m_tablesToReloadHasBeenSet(false),
    m_reloadOption(ReloadOptionValue::NOT_SET),
    m_reloadOptionHasBeenSet(false)
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
   Aws::Utils::Array<JsonValue> tablesToReloadJsonList(m_tablesToReload.size());
   for(unsigned tablesToReloadIndex = 0; tablesToReloadIndex < tablesToReloadJsonList.GetLength(); ++tablesToReloadIndex)
   {
     tablesToReloadJsonList[tablesToReloadIndex].AsObject(m_tablesToReload[tablesToReloadIndex].Jsonize());
   }
   payload.WithArray("TablesToReload", std::move(tablesToReloadJsonList));

  }

  if(m_reloadOptionHasBeenSet)
  {
   payload.WithString("ReloadOption", ReloadOptionValueMapper::GetNameForReloadOptionValue(m_reloadOption));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ReloadTablesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ReloadTables"));
  return headers;

}




