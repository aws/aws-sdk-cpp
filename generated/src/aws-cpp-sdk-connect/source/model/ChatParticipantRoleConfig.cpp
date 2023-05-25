/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ChatParticipantRoleConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ChatParticipantRoleConfig::ChatParticipantRoleConfig() : 
    m_participantTimerConfigListHasBeenSet(false)
{
}

ChatParticipantRoleConfig::ChatParticipantRoleConfig(JsonView jsonValue) : 
    m_participantTimerConfigListHasBeenSet(false)
{
  *this = jsonValue;
}

ChatParticipantRoleConfig& ChatParticipantRoleConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParticipantTimerConfigList"))
  {
    Aws::Utils::Array<JsonView> participantTimerConfigListJsonList = jsonValue.GetArray("ParticipantTimerConfigList");
    for(unsigned participantTimerConfigListIndex = 0; participantTimerConfigListIndex < participantTimerConfigListJsonList.GetLength(); ++participantTimerConfigListIndex)
    {
      m_participantTimerConfigList.push_back(participantTimerConfigListJsonList[participantTimerConfigListIndex].AsObject());
    }
    m_participantTimerConfigListHasBeenSet = true;
  }

  return *this;
}

JsonValue ChatParticipantRoleConfig::Jsonize() const
{
  JsonValue payload;

  if(m_participantTimerConfigListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> participantTimerConfigListJsonList(m_participantTimerConfigList.size());
   for(unsigned participantTimerConfigListIndex = 0; participantTimerConfigListIndex < participantTimerConfigListJsonList.GetLength(); ++participantTimerConfigListIndex)
   {
     participantTimerConfigListJsonList[participantTimerConfigListIndex].AsObject(m_participantTimerConfigList[participantTimerConfigListIndex].Jsonize());
   }
   payload.WithArray("ParticipantTimerConfigList", std::move(participantTimerConfigListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
