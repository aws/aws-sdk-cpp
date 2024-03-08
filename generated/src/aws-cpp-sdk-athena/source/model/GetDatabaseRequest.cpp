/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetDatabaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDatabaseRequest::GetDatabaseRequest() : 
    m_catalogNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_workGroupHasBeenSet(false)
{
}

Aws::String GetDatabaseRequest::SerializePayload() const
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

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDatabaseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.GetDatabase"));
  return headers;

}




