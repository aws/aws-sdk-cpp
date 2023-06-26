/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DeleteRelationalDatabaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRelationalDatabaseRequest::DeleteRelationalDatabaseRequest() : 
    m_relationalDatabaseNameHasBeenSet(false),
    m_skipFinalSnapshot(false),
    m_skipFinalSnapshotHasBeenSet(false),
    m_finalRelationalDatabaseSnapshotNameHasBeenSet(false)
{
}

Aws::String DeleteRelationalDatabaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_relationalDatabaseNameHasBeenSet)
  {
   payload.WithString("relationalDatabaseName", m_relationalDatabaseName);

  }

  if(m_skipFinalSnapshotHasBeenSet)
  {
   payload.WithBool("skipFinalSnapshot", m_skipFinalSnapshot);

  }

  if(m_finalRelationalDatabaseSnapshotNameHasBeenSet)
  {
   payload.WithString("finalRelationalDatabaseSnapshotName", m_finalRelationalDatabaseSnapshotName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteRelationalDatabaseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DeleteRelationalDatabase"));
  return headers;

}




