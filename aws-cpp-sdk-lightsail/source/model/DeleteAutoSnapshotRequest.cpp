/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DeleteAutoSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAutoSnapshotRequest::DeleteAutoSnapshotRequest() : 
    m_resourceNameHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

Aws::String DeleteAutoSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_dateHasBeenSet)
  {
   payload.WithString("date", m_date);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAutoSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DeleteAutoSnapshot"));
  return headers;

}




