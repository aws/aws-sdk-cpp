/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryCluster::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRoutingControlStateRequest::UpdateRoutingControlStateRequest() : 
    m_routingControlArnHasBeenSet(false),
    m_routingControlState(RoutingControlState::NOT_SET),
    m_routingControlStateHasBeenSet(false)
{
}

Aws::String UpdateRoutingControlStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_routingControlArnHasBeenSet)
  {
   payload.WithString("RoutingControlArn", m_routingControlArn);

  }

  if(m_routingControlStateHasBeenSet)
  {
   payload.WithString("RoutingControlState", RoutingControlStateMapper::GetNameForRoutingControlState(m_routingControlState));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRoutingControlStateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ToggleCustomerAPI.UpdateRoutingControlState"));
  return headers;

}




