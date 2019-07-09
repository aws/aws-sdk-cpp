/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/gamelift/model/MatchmakingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

MatchmakingConfiguration::MatchmakingConfiguration() : 
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
    m_creationTimeHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_gameSessionDataHasBeenSet(false),
    m_backfillMode(BackfillMode::NOT_SET),
    m_backfillModeHasBeenSet(false)
{
}

MatchmakingConfiguration::MatchmakingConfiguration(JsonView jsonValue) : 
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
    m_creationTimeHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_gameSessionDataHasBeenSet(false),
    m_backfillMode(BackfillMode::NOT_SET),
    m_backfillModeHasBeenSet(false)
{
  *this = jsonValue;
}

MatchmakingConfiguration& MatchmakingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionQueueArns"))
  {
    Array<JsonView> gameSessionQueueArnsJsonList = jsonValue.GetArray("GameSessionQueueArns");
    for(unsigned gameSessionQueueArnsIndex = 0; gameSessionQueueArnsIndex < gameSessionQueueArnsJsonList.GetLength(); ++gameSessionQueueArnsIndex)
    {
      m_gameSessionQueueArns.push_back(gameSessionQueueArnsJsonList[gameSessionQueueArnsIndex].AsString());
    }
    m_gameSessionQueueArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestTimeoutSeconds"))
  {
    m_requestTimeoutSeconds = jsonValue.GetInteger("RequestTimeoutSeconds");

    m_requestTimeoutSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AcceptanceTimeoutSeconds"))
  {
    m_acceptanceTimeoutSeconds = jsonValue.GetInteger("AcceptanceTimeoutSeconds");

    m_acceptanceTimeoutSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AcceptanceRequired"))
  {
    m_acceptanceRequired = jsonValue.GetBool("AcceptanceRequired");

    m_acceptanceRequiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleSetName"))
  {
    m_ruleSetName = jsonValue.GetString("RuleSetName");

    m_ruleSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationTarget"))
  {
    m_notificationTarget = jsonValue.GetString("NotificationTarget");

    m_notificationTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalPlayerCount"))
  {
    m_additionalPlayerCount = jsonValue.GetInteger("AdditionalPlayerCount");

    m_additionalPlayerCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomEventData"))
  {
    m_customEventData = jsonValue.GetString("CustomEventData");

    m_customEventDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameProperties"))
  {
    Array<JsonView> gamePropertiesJsonList = jsonValue.GetArray("GameProperties");
    for(unsigned gamePropertiesIndex = 0; gamePropertiesIndex < gamePropertiesJsonList.GetLength(); ++gamePropertiesIndex)
    {
      m_gameProperties.push_back(gamePropertiesJsonList[gamePropertiesIndex].AsObject());
    }
    m_gamePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionData"))
  {
    m_gameSessionData = jsonValue.GetString("GameSessionData");

    m_gameSessionDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackfillMode"))
  {
    m_backfillMode = BackfillModeMapper::GetBackfillModeForName(jsonValue.GetString("BackfillMode"));

    m_backfillModeHasBeenSet = true;
  }

  return *this;
}

JsonValue MatchmakingConfiguration::Jsonize() const
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
   Array<JsonValue> gameSessionQueueArnsJsonList(m_gameSessionQueueArns.size());
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

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_gamePropertiesHasBeenSet)
  {
   Array<JsonValue> gamePropertiesJsonList(m_gameProperties.size());
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

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
