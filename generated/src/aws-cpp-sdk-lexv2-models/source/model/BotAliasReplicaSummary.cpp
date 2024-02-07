/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotAliasReplicaSummary.h>
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

BotAliasReplicaSummary::BotAliasReplicaSummary() : 
    m_botAliasIdHasBeenSet(false),
    m_botAliasReplicationStatus(BotAliasReplicationStatus::NOT_SET),
    m_botAliasReplicationStatusHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_failureReasonsHasBeenSet(false)
{
}

BotAliasReplicaSummary::BotAliasReplicaSummary(JsonView jsonValue) : 
    m_botAliasIdHasBeenSet(false),
    m_botAliasReplicationStatus(BotAliasReplicationStatus::NOT_SET),
    m_botAliasReplicationStatusHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_failureReasonsHasBeenSet(false)
{
  *this = jsonValue;
}

BotAliasReplicaSummary& BotAliasReplicaSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botAliasId"))
  {
    m_botAliasId = jsonValue.GetString("botAliasId");

    m_botAliasIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botAliasReplicationStatus"))
  {
    m_botAliasReplicationStatus = BotAliasReplicationStatusMapper::GetBotAliasReplicationStatusForName(jsonValue.GetString("botAliasReplicationStatus"));

    m_botAliasReplicationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

    m_botVersionHasBeenSet = true;
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

  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
    m_failureReasonsHasBeenSet = true;
  }

  return *this;
}

JsonValue BotAliasReplicaSummary::Jsonize() const
{
  JsonValue payload;

  if(m_botAliasIdHasBeenSet)
  {
   payload.WithString("botAliasId", m_botAliasId);

  }

  if(m_botAliasReplicationStatusHasBeenSet)
  {
   payload.WithString("botAliasReplicationStatus", BotAliasReplicationStatusMapper::GetNameForBotAliasReplicationStatus(m_botAliasReplicationStatus));
  }

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failureReasonsJsonList(m_failureReasons.size());
   for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
   {
     failureReasonsJsonList[failureReasonsIndex].AsString(m_failureReasons[failureReasonsIndex]);
   }
   payload.WithArray("failureReasons", std::move(failureReasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
