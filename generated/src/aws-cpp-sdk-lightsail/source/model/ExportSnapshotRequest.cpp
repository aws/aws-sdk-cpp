/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ExportSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportSnapshotRequest::ExportSnapshotRequest() : 
    m_sourceSnapshotNameHasBeenSet(false)
{
}

Aws::String ExportSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceSnapshotNameHasBeenSet)
  {
   payload.WithString("sourceSnapshotName", m_sourceSnapshotName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExportSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.ExportSnapshot"));
  return headers;

}




