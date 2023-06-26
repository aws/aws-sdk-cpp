/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/MoveReplicationTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MoveReplicationTaskRequest::MoveReplicationTaskRequest() : 
    m_replicationTaskArnHasBeenSet(false),
    m_targetReplicationInstanceArnHasBeenSet(false)
{
}

Aws::String MoveReplicationTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationTaskArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskArn", m_replicationTaskArn);

  }

  if(m_targetReplicationInstanceArnHasBeenSet)
  {
   payload.WithString("TargetReplicationInstanceArn", m_targetReplicationInstanceArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection MoveReplicationTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.MoveReplicationTask"));
  return headers;

}




