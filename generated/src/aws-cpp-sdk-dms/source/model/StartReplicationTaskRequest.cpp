/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/StartReplicationTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartReplicationTaskRequest::StartReplicationTaskRequest() : 
    m_replicationTaskArnHasBeenSet(false),
    m_startReplicationTaskType(StartReplicationTaskTypeValue::NOT_SET),
    m_startReplicationTaskTypeHasBeenSet(false),
    m_cdcStartTimeHasBeenSet(false),
    m_cdcStartPositionHasBeenSet(false),
    m_cdcStopPositionHasBeenSet(false)
{
}

Aws::String StartReplicationTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationTaskArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskArn", m_replicationTaskArn);

  }

  if(m_startReplicationTaskTypeHasBeenSet)
  {
   payload.WithString("StartReplicationTaskType", StartReplicationTaskTypeValueMapper::GetNameForStartReplicationTaskTypeValue(m_startReplicationTaskType));
  }

  if(m_cdcStartTimeHasBeenSet)
  {
   payload.WithDouble("CdcStartTime", m_cdcStartTime.SecondsWithMSPrecision());
  }

  if(m_cdcStartPositionHasBeenSet)
  {
   payload.WithString("CdcStartPosition", m_cdcStartPosition);

  }

  if(m_cdcStopPositionHasBeenSet)
  {
   payload.WithString("CdcStopPosition", m_cdcStopPosition);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartReplicationTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.StartReplicationTask"));
  return headers;

}




