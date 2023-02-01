/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/BatchPutMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchPutMessageRequest::BatchPutMessageRequest() : 
    m_channelNameHasBeenSet(false),
    m_messagesHasBeenSet(false)
{
}

Aws::String BatchPutMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("channelName", m_channelName);

  }

  if(m_messagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
   for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
   {
     messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
   }
   payload.WithArray("messages", std::move(messagesJsonList));

  }

  return payload.View().WriteReadable();
}




