/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantTimerConfiguration.h>
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

ParticipantTimerConfiguration::ParticipantTimerConfiguration() : 
    m_participantRole(TimerEligibleParticipantRoles::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_timerType(ParticipantTimerType::NOT_SET),
    m_timerTypeHasBeenSet(false),
    m_timerValueHasBeenSet(false)
{
}

ParticipantTimerConfiguration::ParticipantTimerConfiguration(JsonView jsonValue) : 
    m_participantRole(TimerEligibleParticipantRoles::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_timerType(ParticipantTimerType::NOT_SET),
    m_timerTypeHasBeenSet(false),
    m_timerValueHasBeenSet(false)
{
  *this = jsonValue;
}

ParticipantTimerConfiguration& ParticipantTimerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParticipantRole"))
  {
    m_participantRole = TimerEligibleParticipantRolesMapper::GetTimerEligibleParticipantRolesForName(jsonValue.GetString("ParticipantRole"));

    m_participantRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimerType"))
  {
    m_timerType = ParticipantTimerTypeMapper::GetParticipantTimerTypeForName(jsonValue.GetString("TimerType"));

    m_timerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimerValue"))
  {
    m_timerValue = jsonValue.GetObject("TimerValue");

    m_timerValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ParticipantTimerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_participantRoleHasBeenSet)
  {
   payload.WithString("ParticipantRole", TimerEligibleParticipantRolesMapper::GetNameForTimerEligibleParticipantRoles(m_participantRole));
  }

  if(m_timerTypeHasBeenSet)
  {
   payload.WithString("TimerType", ParticipantTimerTypeMapper::GetNameForParticipantTimerType(m_timerType));
  }

  if(m_timerValueHasBeenSet)
  {
   payload.WithObject("TimerValue", m_timerValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
