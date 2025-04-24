/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CreateChannelNamespaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateChannelNamespaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_subscribeAuthModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribeAuthModesJsonList(m_subscribeAuthModes.size());
   for(unsigned subscribeAuthModesIndex = 0; subscribeAuthModesIndex < subscribeAuthModesJsonList.GetLength(); ++subscribeAuthModesIndex)
   {
     subscribeAuthModesJsonList[subscribeAuthModesIndex].AsObject(m_subscribeAuthModes[subscribeAuthModesIndex].Jsonize());
   }
   payload.WithArray("subscribeAuthModes", std::move(subscribeAuthModesJsonList));

  }

  if(m_publishAuthModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> publishAuthModesJsonList(m_publishAuthModes.size());
   for(unsigned publishAuthModesIndex = 0; publishAuthModesIndex < publishAuthModesJsonList.GetLength(); ++publishAuthModesIndex)
   {
     publishAuthModesJsonList[publishAuthModesIndex].AsObject(m_publishAuthModes[publishAuthModesIndex].Jsonize());
   }
   payload.WithArray("publishAuthModes", std::move(publishAuthModesJsonList));

  }

  if(m_codeHandlersHasBeenSet)
  {
   payload.WithString("codeHandlers", m_codeHandlers);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_handlerConfigsHasBeenSet)
  {
   payload.WithObject("handlerConfigs", m_handlerConfigs.Jsonize());

  }

  return payload.View().WriteReadable();
}




