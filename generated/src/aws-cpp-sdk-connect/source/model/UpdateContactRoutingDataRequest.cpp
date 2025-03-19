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

  if(m_routingCriteriaHasBeenSet)
  {
   payload.WithObject("RoutingCriteria", m_routingCriteria.Jsonize());

  }

  return payload.View().WriteReadable();
}




