/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantTimerValue.h>
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

ParticipantTimerValue::ParticipantTimerValue(JsonView jsonValue)
{
  *this = jsonValue;
}

ParticipantTimerValue& ParticipantTimerValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParticipantTimerAction"))
  {
    m_participantTimerAction = ParticipantTimerActionMapper::GetParticipantTimerActionForName(jsonValue.GetString("ParticipantTimerAction"));
    m_participantTimerActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParticipantTimerDurationInMinutes"))
  {
    m_participantTimerDurationInMinutes = jsonValue.GetInteger("ParticipantTimerDurationInMinutes");
    m_participantTimerDurationInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue ParticipantTimerValue::Jsonize() const
{
  JsonValue payload;

  if(m_participantTimerActionHasBeenSet)
  {
   payload.WithString("ParticipantTimerAction", ParticipantTimerActionMapper::GetNameForParticipantTimerAction(m_participantTimerAction));
  }

  if(m_participantTimerDurationInMinutesHasBeenSet)
  {
   payload.WithInteger("ParticipantTimerDurationInMinutes", m_participantTimerDurationInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
