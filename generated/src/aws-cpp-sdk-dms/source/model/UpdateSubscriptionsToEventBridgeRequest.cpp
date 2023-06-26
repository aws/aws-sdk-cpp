/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/UpdateSubscriptionsToEventBridgeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSubscriptionsToEventBridgeRequest::UpdateSubscriptionsToEventBridgeRequest() : 
    m_forceMove(false),
    m_forceMoveHasBeenSet(false)
{
}

Aws::String UpdateSubscriptionsToEventBridgeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_forceMoveHasBeenSet)
  {
   payload.WithBool("ForceMove", m_forceMove);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSubscriptionsToEventBridgeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.UpdateSubscriptionsToEventBridge"));
  return headers;

}




