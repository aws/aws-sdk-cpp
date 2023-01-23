/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/CreateChatTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivschat::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateChatTokenRequest::CreateChatTokenRequest() : 
    m_attributesHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_roomIdentifierHasBeenSet(false),
    m_sessionDurationInMinutes(0),
    m_sessionDurationInMinutesHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String CreateChatTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_capabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
   for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
   {
     capabilitiesJsonList[capabilitiesIndex].AsString(ChatTokenCapabilityMapper::GetNameForChatTokenCapability(m_capabilities[capabilitiesIndex]));
   }
   payload.WithArray("capabilities", std::move(capabilitiesJsonList));

  }

  if(m_roomIdentifierHasBeenSet)
  {
   payload.WithString("roomIdentifier", m_roomIdentifier);

  }

  if(m_sessionDurationInMinutesHasBeenSet)
  {
   payload.WithInteger("sessionDurationInMinutes", m_sessionDurationInMinutes);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  return payload.View().WriteReadable();
}




