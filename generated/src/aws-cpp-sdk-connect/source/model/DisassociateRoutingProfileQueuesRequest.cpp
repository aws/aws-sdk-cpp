/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociateRoutingProfileQueuesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateRoutingProfileQueuesRequest::DisassociateRoutingProfileQueuesRequest() : 
    m_instanceIdHasBeenSet(false),
    m_routingProfileIdHasBeenSet(false),
    m_queueReferencesHasBeenSet(false)
{
}

Aws::String DisassociateRoutingProfileQueuesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queueReferencesJsonList(m_queueReferences.size());
   for(unsigned queueReferencesIndex = 0; queueReferencesIndex < queueReferencesJsonList.GetLength(); ++queueReferencesIndex)
   {
     queueReferencesJsonList[queueReferencesIndex].AsObject(m_queueReferences[queueReferencesIndex].Jsonize());
   }
   payload.WithArray("QueueReferences", std::move(queueReferencesJsonList));

  }

  return payload.View().WriteReadable();
}




