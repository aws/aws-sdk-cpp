﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateRoutingProfileQueuesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateRoutingProfileQueuesRequest::AssociateRoutingProfileQueuesRequest() : 
    m_instanceIdHasBeenSet(false),
    m_routingProfileIdHasBeenSet(false),
    m_queueConfigsHasBeenSet(false)
{
}

Aws::String AssociateRoutingProfileQueuesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueConfigsHasBeenSet)
  {
   Array<JsonValue> queueConfigsJsonList(m_queueConfigs.size());
   for(unsigned queueConfigsIndex = 0; queueConfigsIndex < queueConfigsJsonList.GetLength(); ++queueConfigsIndex)
   {
     queueConfigsJsonList[queueConfigsIndex].AsObject(m_queueConfigs[queueConfigsIndex].Jsonize());
   }
   payload.WithArray("QueueConfigs", std::move(queueConfigsJsonList));

  }

  return payload.View().WriteReadable();
}




