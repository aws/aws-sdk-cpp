/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/SendEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivschat::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendEventRequest::SendEventRequest() : 
    m_attributesHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_roomIdentifierHasBeenSet(false)
{
}

Aws::String SendEventRequest::SerializePayload() const
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

  if(m_eventNameHasBeenSet)
  {
   payload.WithString("eventName", m_eventName);

  }

  if(m_roomIdentifierHasBeenSet)
  {
   payload.WithString("roomIdentifier", m_roomIdentifier);

  }

  return payload.View().WriteReadable();
}




