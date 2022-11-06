/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/UpdateChannelFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateChannelFlowRequest::UpdateChannelFlowRequest() : 
    m_channelFlowArnHasBeenSet(false),
    m_processorsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateChannelFlowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_processorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processorsJsonList(m_processors.size());
   for(unsigned processorsIndex = 0; processorsIndex < processorsJsonList.GetLength(); ++processorsIndex)
   {
     processorsJsonList[processorsIndex].AsObject(m_processors[processorsIndex].Jsonize());
   }
   payload.WithArray("Processors", std::move(processorsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}




