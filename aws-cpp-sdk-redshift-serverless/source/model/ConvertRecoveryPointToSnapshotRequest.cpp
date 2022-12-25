/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ConvertRecoveryPointToSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConvertRecoveryPointToSnapshotRequest::ConvertRecoveryPointToSnapshotRequest() : 
    m_recoveryPointIdHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ConvertRecoveryPointToSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recoveryPointIdHasBeenSet)
  {
   payload.WithString("recoveryPointId", m_recoveryPointId);

  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithInteger("retentionPeriod", m_retentionPeriod);

  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("snapshotName", m_snapshotName);

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

Aws::Http::HeaderValueCollection ConvertRecoveryPointToSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.ConvertRecoveryPointToSnapshot"));
  return headers;

}




