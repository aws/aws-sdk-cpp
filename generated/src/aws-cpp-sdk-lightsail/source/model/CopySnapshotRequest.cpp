/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CopySnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CopySnapshotRequest::CopySnapshotRequest() : 
    m_sourceSnapshotNameHasBeenSet(false),
    m_sourceResourceNameHasBeenSet(false),
    m_restoreDateHasBeenSet(false),
    m_useLatestRestorableAutoSnapshot(false),
    m_useLatestRestorableAutoSnapshotHasBeenSet(false),
    m_targetSnapshotNameHasBeenSet(false),
    m_sourceRegion(RegionName::NOT_SET),
    m_sourceRegionHasBeenSet(false)
{
}

Aws::String CopySnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceSnapshotNameHasBeenSet)
  {
   payload.WithString("sourceSnapshotName", m_sourceSnapshotName);

  }

  if(m_sourceResourceNameHasBeenSet)
  {
   payload.WithString("sourceResourceName", m_sourceResourceName);

  }

  if(m_restoreDateHasBeenSet)
  {
   payload.WithString("restoreDate", m_restoreDate);

  }

  if(m_useLatestRestorableAutoSnapshotHasBeenSet)
  {
   payload.WithBool("useLatestRestorableAutoSnapshot", m_useLatestRestorableAutoSnapshot);

  }

  if(m_targetSnapshotNameHasBeenSet)
  {
   payload.WithString("targetSnapshotName", m_targetSnapshotName);

  }

  if(m_sourceRegionHasBeenSet)
  {
   payload.WithString("sourceRegion", RegionNameMapper::GetNameForRegionName(m_sourceRegion));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CopySnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CopySnapshot"));
  return headers;

}




