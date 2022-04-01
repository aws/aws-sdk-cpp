/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-cluster/model/GetRoutingControlStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryCluster::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRoutingControlStateRequest::GetRoutingControlStateRequest() : 
    m_routingControlArnHasBeenSet(false)
{
}

Aws::String GetRoutingControlStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_routingControlArnHasBeenSet)
  {
   payload.WithString("RoutingControlArn", m_routingControlArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRoutingControlStateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ToggleCustomerAPI.GetRoutingControlState"));
  return headers;

}




