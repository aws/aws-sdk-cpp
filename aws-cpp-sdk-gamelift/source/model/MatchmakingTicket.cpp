﻿/*
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

#include <aws/gamelift/model/MatchmakingTicket.h>
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

MatchmakingTicket::MatchmakingTicket() : 
    m_ticketIdHasBeenSet(false),
    m_configurationNameHasBeenSet(false),
    m_status(MatchmakingConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_playersHasBeenSet(false),
    m_gameSessionConnectionInfoHasBeenSet(false),
    m_estimatedWaitTime(0),
    m_estimatedWaitTimeHasBeenSet(false)
{
}

MatchmakingTicket::MatchmakingTicket(JsonView jsonValue) : 
    m_ticketIdHasBeenSet(false),
    m_configurationNameHasBeenSet(false),
    m_status(MatchmakingConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_playersHasBeenSet(false),
    m_gameSessionConnectionInfoHasBeenSet(false),
    m_estimatedWaitTime(0),
    m_estimatedWaitTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MatchmakingTicket& MatchmakingTicket::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TicketId"))
  {
    m_ticketId = jsonValue.GetString("TicketId");

    m_ticketIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationName"))
  {
    m_configurationName = jsonValue.GetString("ConfigurationName");

    m_configurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MatchmakingConfigurationStatusMapper::GetMatchmakingConfigurationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Players"))
  {
    Array<JsonView> playersJsonList = jsonValue.GetArray("Players");
    for(unsigned playersIndex = 0; playersIndex < playersJsonList.GetLength(); ++playersIndex)
    {
      m_players.push_back(playersJsonList[playersIndex].AsObject());
    }
    m_playersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionConnectionInfo"))
  {
    m_gameSessionConnectionInfo = jsonValue.GetObject("GameSessionConnectionInfo");

    m_gameSessionConnectionInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedWaitTime"))
  {
    m_estimatedWaitTime = jsonValue.GetInteger("EstimatedWaitTime");

    m_estimatedWaitTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MatchmakingTicket::Jsonize() const
{
  JsonValue payload;

  if(m_ticketIdHasBeenSet)
  {
   payload.WithString("TicketId", m_ticketId);

  }

  if(m_configurationNameHasBeenSet)
  {
   payload.WithString("ConfigurationName", m_configurationName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MatchmakingConfigurationStatusMapper::GetNameForMatchmakingConfigurationStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_playersHasBeenSet)
  {
   Array<JsonValue> playersJsonList(m_players.size());
   for(unsigned playersIndex = 0; playersIndex < playersJsonList.GetLength(); ++playersIndex)
   {
     playersJsonList[playersIndex].AsObject(m_players[playersIndex].Jsonize());
   }
   payload.WithArray("Players", std::move(playersJsonList));

  }

  if(m_gameSessionConnectionInfoHasBeenSet)
  {
   payload.WithObject("GameSessionConnectionInfo", m_gameSessionConnectionInfo.Jsonize());

  }

  if(m_estimatedWaitTimeHasBeenSet)
  {
   payload.WithInteger("EstimatedWaitTime", m_estimatedWaitTime);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
