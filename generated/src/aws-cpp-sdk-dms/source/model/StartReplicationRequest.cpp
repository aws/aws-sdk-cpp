/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/StartReplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartReplicationRequest::StartReplicationRequest() : 
    m_replicationConfigArnHasBeenSet(false),
    m_startReplicationTypeHasBeenSet(false),
    m_cdcStartTimeHasBeenSet(false),
    m_cdcStartPositionHasBeenSet(false),
    m_cdcStopPositionHasBeenSet(false)
{
}

Aws::String StartReplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationConfigArnHasBeenSet)
  {
   payload.WithString("ReplicationConfigArn", m_replicationConfigArn);

  }

  if(m_startReplicationTypeHasBeenSet)
  {
   payload.WithString("StartReplicationType", m_startReplicationType);

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

Aws::Http::HeaderValueCollection StartReplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.StartReplication"));
  return headers;

}




