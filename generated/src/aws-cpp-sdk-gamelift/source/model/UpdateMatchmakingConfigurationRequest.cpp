﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/UpdateMatchmakingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMatchmakingConfigurationRequest::UpdateMatchmakingConfigurationRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_gameSessionQueueArnsHasBeenSet(false),
    m_requestTimeoutSeconds(0),
    m_requestTimeoutSecondsHasBeenSet(false),
    m_acceptanceTimeoutSeconds(0),
    m_acceptanceTimeoutSecondsHasBeenSet(false),
    m_acceptanceRequired(false),
    m_acceptanceRequiredHasBeenSet(false),
    m_ruleSetNameHasBeenSet(false),
    m_notificationTargetHasBeenSet(false),
    m_additionalPlayerCount(0),
    m_additionalPlayerCountHasBeenSet(false),
    m_customEventDataHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_gameSessionDataHasBeenSet(false),
    m_backfillMode(BackfillMode::NOT_SET),
    m_backfillModeHasBeenSet(false),
    m_flexMatchMode(FlexMatchMode::NOT_SET),
    m_flexMatchModeHasBeenSet(false)
{
}

Aws::String UpdateMatchmakingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_gameSessionQueueArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gameSessionQueueArnsJsonList(m_gameSessionQueueArns.size());
   for(unsigned gameSessionQueueArnsIndex = 0; gameSessionQueueArnsIndex < gameSessionQueueArnsJsonList.GetLength(); ++gameSessionQueueArnsIndex)
   {
     gameSessionQueueArnsJsonList[gameSessionQueueArnsIndex].AsString(m_gameSessionQueueArns[gameSessionQueueArnsIndex]);
   }
   payload.WithArray("GameSessionQueueArns", std::move(gameSessionQueueArnsJsonList));

  }

  if(m_requestTimeoutSecondsHasBeenSet)
  {
   payload.WithInteger("RequestTimeoutSeconds", m_requestTimeoutSeconds);

  }

  if(m_acceptanceTimeoutSecondsHasBeenSet)
  {
   payload.WithInteger("AcceptanceTimeoutSeconds", m_acceptanceTimeoutSeconds);

  }

  if(m_acceptanceRequiredHasBeenSet)
  {
   payload.WithBool("AcceptanceRequired", m_acceptanceRequired);

  }

  if(m_ruleSetNameHasBeenSet)
  {
   payload.WithString("RuleSetName", m_ruleSetName);

  }

  if(m_notificationTargetHasBeenSet)
  {
   payload.WithString("NotificationTarget", m_notificationTarget);

  }

  if(m_additionalPlayerCountHasBeenSet)
  {
   payload.WithInteger("AdditionalPlayerCount", m_additionalPlayerCount);

  }

  if(m_customEventDataHasBeenSet)
  {
   payload.WithString("CustomEventData", m_customEventData);

  }

  if(m_gamePropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gamePropertiesJsonList(m_gameProperties.size());
   for(unsigned gamePropertiesIndex = 0; gamePropertiesIndex < gamePropertiesJsonList.GetLength(); ++gamePropertiesIndex)
   {
     gamePropertiesJsonList[gamePropertiesIndex].AsObject(m_gameProperties[gamePropertiesIndex].Jsonize());
   }
   payload.WithArray("GameProperties", std::move(gamePropertiesJsonList));

  }

  if(m_gameSessionDataHasBeenSet)
  {
   payload.WithString("GameSessionData", m_gameSessionData);

  }

  if(m_backfillModeHasBeenSet)
  {
   payload.WithString("BackfillMode", BackfillModeMapper::GetNameForBackfillMode(m_backfillMode));
  }

  if(m_flexMatchModeHasBeenSet)
  {
   payload.WithString("FlexMatchMode", FlexMatchModeMapper::GetNameForFlexMatchMode(m_flexMatchMode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMatchmakingConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateMatchmakingConfiguration"));
  return headers;

}




