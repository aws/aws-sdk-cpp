/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ApplyPendingMaintenanceActionRequest::ApplyPendingMaintenanceActionRequest() : 
    m_replicationInstanceArnHasBeenSet(false),
    m_applyActionHasBeenSet(false),
    m_optInTypeHasBeenSet(false)
{
}

Aws::String ApplyPendingMaintenanceActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationInstanceArnHasBeenSet)
  {
   payload.WithString("ReplicationInstanceArn", m_replicationInstanceArn);

  }

  if(m_applyActionHasBeenSet)
  {
   payload.WithString("ApplyAction", m_applyAction);

  }

  if(m_optInTypeHasBeenSet)
  {
   payload.WithString("OptInType", m_optInType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ApplyPendingMaintenanceActionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ApplyPendingMaintenanceAction"));
  return headers;

}




