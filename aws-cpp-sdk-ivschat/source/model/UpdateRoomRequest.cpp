/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/UpdateRoomRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivschat::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRoomRequest::UpdateRoomRequest() : 
    m_identifierHasBeenSet(false),
    m_loggingConfigurationIdentifiersHasBeenSet(false),
    m_maximumMessageLength(0),
    m_maximumMessageLengthHasBeenSet(false),
    m_maximumMessageRatePerSecond(0),
    m_maximumMessageRatePerSecondHasBeenSet(false),
    m_messageReviewHandlerHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateRoomRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

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

  if(m_maximumMessageLengthHasBeenSet)
  {
   payload.WithInteger("maximumMessageLength", m_maximumMessageLength);

  }

  if(m_maximumMessageRatePerSecondHasBeenSet)
  {
   payload.WithInteger("maximumMessageRatePerSecond", m_maximumMessageRatePerSecond);

  }

  if(m_messageReviewHandlerHasBeenSet)
  {
   payload.WithObject("messageReviewHandler", m_messageReviewHandler.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload.View().WriteReadable();
}




