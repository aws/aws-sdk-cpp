/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/UpdateRoutingControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryControlConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRoutingControlRequest::UpdateRoutingControlRequest() : 
    m_routingControlArnHasBeenSet(false),
    m_routingControlNameHasBeenSet(false)
{
}

Aws::String UpdateRoutingControlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_routingControlArnHasBeenSet)
  {
   payload.WithString("RoutingControlArn", m_routingControlArn);

  }

  if(m_routingControlNameHasBeenSet)
  {
   payload.WithString("RoutingControlName", m_routingControlName);

  }

  return payload.View().WriteReadable();
}




