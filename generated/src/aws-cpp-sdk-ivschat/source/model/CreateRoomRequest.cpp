/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/CreateRoomRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivschat::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRoomRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_maximumMessageRatePerSecondHasBeenSet)
  {
   payload.WithInteger("maximumMessageRatePerSecond", m_maximumMessageRatePerSecond);

  }

  if(m_maximumMessageLengthHasBeenSet)
  {
   payload.WithInteger("maximumMessageLength", m_maximumMessageLength);

  }

  if(m_messageReviewHandlerHasBeenSet)
  {
   payload.WithObject("messageReviewHandler", m_messageReviewHandler.Jsonize());

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

  if(m_loggingConfigurationIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> loggingConfigurationIdentifiersJsonList(m_loggingConfigurationIdentifiers.size());
   for(unsigned loggingConfigurationIdentifiersIndex = 0; loggingConfigurationIdentifiersIndex < loggingConfigurationIdentifiersJsonList.GetLength(); ++loggingConfigurationIdentifiersIndex)
   {
     loggingConfigurationIdentifiersJsonList[loggingConfigurationIdentifiersIndex].AsString(m_loggingConfigurationIdentifiers[loggingConfigurationIdentifiersIndex]);
   }
   payload.WithArray("loggingConfigurationIdentifiers", std::move(loggingConfigurationIdentifiersJsonList));

  }

  return payload.View().WriteReadable();
}




