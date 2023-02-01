/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotAliasHistoryEvent.h>
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

BotAliasHistoryEvent::BotAliasHistoryEvent() : 
    m_botVersionHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

BotAliasHistoryEvent::BotAliasHistoryEvent(JsonView jsonValue) : 
    m_botVersionHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
  *this = jsonValue;
}

BotAliasHistoryEvent& BotAliasHistoryEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

    m_botVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startDate"))
  {
    m_startDate = jsonValue.GetDouble("startDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endDate"))
  {
    m_endDate = jsonValue.GetDouble("endDate");

    m_endDateHasBeenSet = true;
  }

  return *this;
}

JsonValue BotAliasHistoryEvent::Jsonize() const
{
  JsonValue payload;

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("startDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_endDateHasBeenSet)
  {
   payload.WithDouble("endDate", m_endDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
