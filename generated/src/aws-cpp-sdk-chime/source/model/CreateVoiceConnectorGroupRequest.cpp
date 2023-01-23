/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateVoiceConnectorGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVoiceConnectorGroupRequest::CreateVoiceConnectorGroupRequest() : 
    m_nameHasBeenSet(false),
    m_voiceConnectorItemsHasBeenSet(false)
{
}

Aws::String CreateVoiceConnectorGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_voiceConnectorItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> voiceConnectorItemsJsonList(m_voiceConnectorItems.size());
   for(unsigned voiceConnectorItemsIndex = 0; voiceConnectorItemsIndex < voiceConnectorItemsJsonList.GetLength(); ++voiceConnectorItemsIndex)
   {
     voiceConnectorItemsJsonList[voiceConnectorItemsIndex].AsObject(m_voiceConnectorItems[voiceConnectorItemsIndex].Jsonize());
   }
   payload.WithArray("VoiceConnectorItems", std::move(voiceConnectorItemsJsonList));

  }

  return payload.View().WriteReadable();
}




