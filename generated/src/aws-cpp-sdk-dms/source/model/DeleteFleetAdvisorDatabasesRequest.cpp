/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DeleteFleetAdvisorDatabasesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFleetAdvisorDatabasesRequest::DeleteFleetAdvisorDatabasesRequest() : 
    m_databaseIdsHasBeenSet(false)
{
}

Aws::String DeleteFleetAdvisorDatabasesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_databaseIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> databaseIdsJsonList(m_databaseIds.size());
   for(unsigned databaseIdsIndex = 0; databaseIdsIndex < databaseIdsJsonList.GetLength(); ++databaseIdsIndex)
   {
     databaseIdsJsonList[databaseIdsIndex].AsString(m_databaseIds[databaseIdsIndex]);
   }
   payload.WithArray("DatabaseIds", std::move(databaseIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteFleetAdvisorDatabasesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.DeleteFleetAdvisorDatabases"));
  return headers;

}




