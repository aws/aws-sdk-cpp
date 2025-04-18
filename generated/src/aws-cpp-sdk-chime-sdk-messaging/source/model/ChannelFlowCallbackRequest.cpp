﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelFlowCallbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ChannelFlowCallbackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_callbackIdHasBeenSet)
  {
   payload.WithString("CallbackId", m_callbackId);

  }

  if(m_deleteResourceHasBeenSet)
  {
   payload.WithBool("DeleteResource", m_deleteResource);

  }

  if(m_channelMessageHasBeenSet)
  {
   payload.WithObject("ChannelMessage", m_channelMessage.Jsonize());

  }

  return payload.View().WriteReadable();
}




