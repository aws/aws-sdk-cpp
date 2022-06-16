/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshiftserverless/model/ConvertRecoveryPointToSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConvertRecoveryPointToSnapshotRequest::ConvertRecoveryPointToSnapshotRequest() : 
    m_recoveryPointIdHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_snapshotNameHasBeenSet(false)
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ConvertRecoveryPointToSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.ConvertRecoveryPointToSnapshot"));
  return headers;

}




