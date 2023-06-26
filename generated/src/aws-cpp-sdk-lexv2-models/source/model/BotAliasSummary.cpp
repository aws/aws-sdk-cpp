/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotAliasSummary.h>
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

BotAliasSummary::BotAliasSummary() : 
    m_botAliasIdHasBeenSet(false),
    m_botAliasNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_botAliasStatus(BotAliasStatus::NOT_SET),
    m_botAliasStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

BotAliasSummary::BotAliasSummary(JsonView jsonValue) : 
    m_botAliasIdHasBeenSet(false),
    m_botAliasNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_botAliasStatus(BotAliasStatus::NOT_SET),
    m_botAliasStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

BotAliasSummary& BotAliasSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botAliasId"))
  {
    m_botAliasId = jsonValue.GetString("botAliasId");

    m_botAliasIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botAliasName"))
  {
    m_botAliasName = jsonValue.GetString("botAliasName");

    m_botAliasNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

    m_botVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botAliasStatus"))
  {
    m_botAliasStatus = BotAliasStatusMapper::GetBotAliasStatusForName(jsonValue.GetString("botAliasStatus"));

    m_botAliasStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue BotAliasSummary::Jsonize() const
{
  JsonValue payload;

  if(m_botAliasIdHasBeenSet)
  {
   payload.WithString("botAliasId", m_botAliasId);

  }

  if(m_botAliasNameHasBeenSet)
  {
   payload.WithString("botAliasName", m_botAliasName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_botAliasStatusHasBeenSet)
  {
   payload.WithString("botAliasStatus", BotAliasStatusMapper::GetNameForBotAliasStatus(m_botAliasStatus));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
