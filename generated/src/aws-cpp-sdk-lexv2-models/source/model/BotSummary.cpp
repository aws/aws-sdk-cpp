/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

BotSummary::BotSummary() : 
    m_botIdHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botStatus(BotStatus::NOT_SET),
    m_botStatusHasBeenSet(false),
    m_latestBotVersionHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_botType(BotType::NOT_SET),
    m_botTypeHasBeenSet(false)
{
}

BotSummary::BotSummary(JsonView jsonValue) : 
    m_botIdHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botStatus(BotStatus::NOT_SET),
    m_botStatusHasBeenSet(false),
    m_latestBotVersionHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_botType(BotType::NOT_SET),
    m_botTypeHasBeenSet(false)
{
  *this = jsonValue;
}

BotSummary& BotSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

    m_botIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botName"))
  {
    m_botName = jsonValue.GetString("botName");

    m_botNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botStatus"))
  {
    m_botStatus = BotStatusMapper::GetBotStatusForName(jsonValue.GetString("botStatus"));

    m_botStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestBotVersion"))
  {
    m_latestBotVersion = jsonValue.GetString("latestBotVersion");

    m_latestBotVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botType"))
  {
    m_botType = BotTypeMapper::GetBotTypeForName(jsonValue.GetString("botType"));

    m_botTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue BotSummary::Jsonize() const
{
  JsonValue payload;

  if(m_botIdHasBeenSet)
  {
   payload.WithString("botId", m_botId);

  }

  if(m_botNameHasBeenSet)
  {
   payload.WithString("botName", m_botName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_botStatusHasBeenSet)
  {
   payload.WithString("botStatus", BotStatusMapper::GetNameForBotStatus(m_botStatus));
  }

  if(m_latestBotVersionHasBeenSet)
  {
   payload.WithString("latestBotVersion", m_latestBotVersion);

  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_botTypeHasBeenSet)
  {
   payload.WithString("botType", BotTypeMapper::GetNameForBotType(m_botType));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
