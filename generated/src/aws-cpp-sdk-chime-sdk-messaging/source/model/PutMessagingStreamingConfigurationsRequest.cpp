/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/PutMessagingStreamingConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutMessagingStreamingConfigurationsRequest::PutMessagingStreamingConfigurationsRequest() : 
    m_appInstanceArnHasBeenSet(false),
    m_streamingConfigurationsHasBeenSet(false)
{
}

Aws::String PutMessagingStreamingConfigurationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamingConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> streamingConfigurationsJsonList(m_streamingConfigurations.size());
   for(unsigned streamingConfigurationsIndex = 0; streamingConfigurationsIndex < streamingConfigurationsJsonList.GetLength(); ++streamingConfigurationsIndex)
   {
     streamingConfigurationsJsonList[streamingConfigurationsIndex].AsObject(m_streamingConfigurations[streamingConfigurationsIndex].Jsonize());
   }
   payload.WithArray("StreamingConfigurations", std::move(streamingConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}




