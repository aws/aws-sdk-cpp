/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetRelationalDatabaseSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRelationalDatabaseSnapshotRequest::GetRelationalDatabaseSnapshotRequest() : 
    m_relationalDatabaseSnapshotNameHasBeenSet(false)
{
}

Aws::String GetRelationalDatabaseSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_relationalDatabaseSnapshotNameHasBeenSet)
  {
   payload.WithString("relationalDatabaseSnapshotName", m_relationalDatabaseSnapshotName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRelationalDatabaseSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetRelationalDatabaseSnapshot"));
  return headers;

}




