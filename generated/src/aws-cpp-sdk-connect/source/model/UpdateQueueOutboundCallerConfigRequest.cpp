/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateQueueOutboundCallerConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateQueueOutboundCallerConfigRequest::UpdateQueueOutboundCallerConfigRequest() : 
    m_instanceIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_outboundCallerConfigHasBeenSet(false)
{
}

Aws::String UpdateQueueOutboundCallerConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_outboundCallerConfigHasBeenSet)
  {
   payload.WithObject("OutboundCallerConfig", m_outboundCallerConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




