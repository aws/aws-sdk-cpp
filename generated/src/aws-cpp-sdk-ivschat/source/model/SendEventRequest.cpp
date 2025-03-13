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

Aws::String SendEventRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roomIdentifierHasBeenSet)
  {
   payload.WithString("roomIdentifier", m_roomIdentifier);

  }

  if(m_eventNameHasBeenSet)
  {
   payload.WithString("eventName", m_eventName);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  return payload.View().WriteReadable();
}




