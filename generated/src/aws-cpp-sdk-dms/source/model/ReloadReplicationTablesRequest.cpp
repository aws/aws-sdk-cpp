/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReloadReplicationTablesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReloadReplicationTablesRequest::ReloadReplicationTablesRequest() : 
    m_replicationConfigArnHasBeenSet(false),
    m_tablesToReloadHasBeenSet(false),
    m_reloadOption(ReloadOptionValue::NOT_SET),
    m_reloadOptionHasBeenSet(false)
{
}

Aws::String ReloadReplicationTablesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationConfigArnHasBeenSet)
  {
   payload.WithString("ReplicationConfigArn", m_replicationConfigArn);

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

Aws::Http::HeaderValueCollection ReloadReplicationTablesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ReloadReplicationTables"));
  return headers;

}




