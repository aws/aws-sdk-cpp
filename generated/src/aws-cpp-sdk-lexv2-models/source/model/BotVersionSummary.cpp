/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotVersionSummary.h>
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

BotVersionSummary::BotVersionSummary() : 
    m_botNameHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botStatus(BotStatus::NOT_SET),
    m_botStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false)
{
}

BotVersionSummary::BotVersionSummary(JsonView jsonValue) : 
    m_botNameHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botStatus(BotStatus::NOT_SET),
    m_botStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

BotVersionSummary& BotVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botName"))
  {
    m_botName = jsonValue.GetString("botName");

    m_botNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

    m_botVersionHasBeenSet = true;
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

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue BotVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_botNameHasBeenSet)
  {
   payload.WithString("botName", m_botName);

  }

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_botStatusHasBeenSet)
  {
   payload.WithString("botStatus", BotStatusMapper::GetNameForBotStatus(m_botStatus));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
