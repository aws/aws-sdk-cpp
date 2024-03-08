/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotVersionReplicaSummary.h>
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

BotVersionReplicaSummary::BotVersionReplicaSummary() : 
    m_botVersionHasBeenSet(false),
    m_botVersionReplicationStatus(BotVersionReplicationStatus::NOT_SET),
    m_botVersionReplicationStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_failureReasonsHasBeenSet(false)
{
}

BotVersionReplicaSummary::BotVersionReplicaSummary(JsonView jsonValue) : 
    m_botVersionHasBeenSet(false),
    m_botVersionReplicationStatus(BotVersionReplicationStatus::NOT_SET),
    m_botVersionReplicationStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_failureReasonsHasBeenSet(false)
{
  *this = jsonValue;
}

BotVersionReplicaSummary& BotVersionReplicaSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

    m_botVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botVersionReplicationStatus"))
  {
    m_botVersionReplicationStatus = BotVersionReplicationStatusMapper::GetBotVersionReplicationStatusForName(jsonValue.GetString("botVersionReplicationStatus"));

    m_botVersionReplicationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
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

JsonValue BotVersionReplicaSummary::Jsonize() const
{
  JsonValue payload;

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_botVersionReplicationStatusHasBeenSet)
  {
   payload.WithString("botVersionReplicationStatus", BotVersionReplicationStatusMapper::GetNameForBotVersionReplicationStatus(m_botVersionReplicationStatus));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
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
