/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateRelationalDatabaseFromSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRelationalDatabaseFromSnapshotRequest::CreateRelationalDatabaseFromSnapshotRequest() : 
    m_relationalDatabaseNameHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_relationalDatabaseSnapshotNameHasBeenSet(false),
    m_relationalDatabaseBundleIdHasBeenSet(false),
    m_sourceRelationalDatabaseNameHasBeenSet(false),
    m_restoreTimeHasBeenSet(false),
    m_useLatestRestorableTime(false),
    m_useLatestRestorableTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateRelationalDatabaseFromSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_relationalDatabaseNameHasBeenSet)
  {
   payload.WithString("relationalDatabaseName", m_relationalDatabaseName);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_relationalDatabaseSnapshotNameHasBeenSet)
  {
   payload.WithString("relationalDatabaseSnapshotName", m_relationalDatabaseSnapshotName);

  }

  if(m_relationalDatabaseBundleIdHasBeenSet)
  {
   payload.WithString("relationalDatabaseBundleId", m_relationalDatabaseBundleId);

  }

  if(m_sourceRelationalDatabaseNameHasBeenSet)
  {
   payload.WithString("sourceRelationalDatabaseName", m_sourceRelationalDatabaseName);

  }

  if(m_restoreTimeHasBeenSet)
  {
   payload.WithDouble("restoreTime", m_restoreTime.SecondsWithMSPrecision());
  }

  if(m_useLatestRestorableTimeHasBeenSet)
  {
   payload.WithBool("useLatestRestorableTime", m_useLatestRestorableTime);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRelationalDatabaseFromSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateRelationalDatabaseFromSnapshot"));
  return headers;

}




