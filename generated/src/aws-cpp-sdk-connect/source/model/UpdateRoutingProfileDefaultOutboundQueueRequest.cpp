/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateRoutingProfileDefaultOutboundQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRoutingProfileDefaultOutboundQueueRequest::UpdateRoutingProfileDefaultOutboundQueueRequest() : 
    m_instanceIdHasBeenSet(false),
    m_routingProfileIdHasBeenSet(false),
    m_defaultOutboundQueueIdHasBeenSet(false)
{
}

Aws::String UpdateRoutingProfileDefaultOutboundQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_defaultOutboundQueueIdHasBeenSet)
  {
   payload.WithString("DefaultOutboundQueueId", m_defaultOutboundQueueId);

  }

  return payload.View().WriteReadable();
}




