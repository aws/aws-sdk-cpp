/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateContactRoutingDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContactRoutingDataRequest::UpdateContactRoutingDataRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactIdHasBeenSet(false),
    m_queueTimeAdjustmentSeconds(0),
    m_queueTimeAdjustmentSecondsHasBeenSet(false),
    m_queuePriority(0),
    m_queuePriorityHasBeenSet(false)
{
}

Aws::String UpdateContactRoutingDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueTimeAdjustmentSecondsHasBeenSet)
  {
   payload.WithInteger("QueueTimeAdjustmentSeconds", m_queueTimeAdjustmentSeconds);

  }

  if(m_queuePriorityHasBeenSet)
  {
   payload.WithInt64("QueuePriority", m_queuePriority);

  }

  return payload.View().WriteReadable();
}




