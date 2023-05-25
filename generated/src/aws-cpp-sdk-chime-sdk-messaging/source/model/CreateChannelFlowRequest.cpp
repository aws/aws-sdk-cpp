/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/CreateChannelFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateChannelFlowRequest::CreateChannelFlowRequest() : 
    m_appInstanceArnHasBeenSet(false),
    m_processorsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String CreateChannelFlowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appInstanceArnHasBeenSet)
  {
   payload.WithString("AppInstanceArn", m_appInstanceArn);

  }

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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




