/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryCluster::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRoutingControlStatesRequest::UpdateRoutingControlStatesRequest() : 
    m_updateRoutingControlStateEntriesHasBeenSet(false)
{
}

Aws::String UpdateRoutingControlStatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updateRoutingControlStateEntriesHasBeenSet)
  {
   Array<JsonValue> updateRoutingControlStateEntriesJsonList(m_updateRoutingControlStateEntries.size());
   for(unsigned updateRoutingControlStateEntriesIndex = 0; updateRoutingControlStateEntriesIndex < updateRoutingControlStateEntriesJsonList.GetLength(); ++updateRoutingControlStateEntriesIndex)
   {
     updateRoutingControlStateEntriesJsonList[updateRoutingControlStateEntriesIndex].AsObject(m_updateRoutingControlStateEntries[updateRoutingControlStateEntriesIndex].Jsonize());
   }
   payload.WithArray("UpdateRoutingControlStateEntries", std::move(updateRoutingControlStateEntriesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRoutingControlStatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ToggleCustomerAPI.UpdateRoutingControlStates"));
  return headers;

}




