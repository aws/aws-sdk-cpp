/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotReplicaSummary.h>
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

BotReplicaSummary::BotReplicaSummary() : 
    m_replicaRegionHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_botReplicaStatus(BotReplicaStatus::NOT_SET),
    m_botReplicaStatusHasBeenSet(false),
    m_failureReasonsHasBeenSet(false)
{
}

BotReplicaSummary::BotReplicaSummary(JsonView jsonValue) : 
    m_replicaRegionHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_botReplicaStatus(BotReplicaStatus::NOT_SET),
    m_botReplicaStatusHasBeenSet(false),
    m_failureReasonsHasBeenSet(false)
{
  *this = jsonValue;
}

BotReplicaSummary& BotReplicaSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("replicaRegion"))
  {
    m_replicaRegion = jsonValue.GetString("replicaRegion");

    m_replicaRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botReplicaStatus"))
  {
    m_botReplicaStatus = BotReplicaStatusMapper::GetBotReplicaStatusForName(jsonValue.GetString("botReplicaStatus"));

    m_botReplicaStatusHasBeenSet = true;
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

JsonValue BotReplicaSummary::Jsonize() const
{
  JsonValue payload;

  if(m_replicaRegionHasBeenSet)
  {
   payload.WithString("replicaRegion", m_replicaRegion);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_botReplicaStatusHasBeenSet)
  {
   payload.WithString("botReplicaStatus", BotReplicaStatusMapper::GetNameForBotReplicaStatus(m_botReplicaStatus));
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
