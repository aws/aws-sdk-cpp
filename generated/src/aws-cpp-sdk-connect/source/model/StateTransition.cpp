/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StateTransition.h>
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

StateTransition::StateTransition(JsonView jsonValue)
{
  *this = jsonValue;
}

StateTransition& StateTransition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = ParticipantStateMapper::GetParticipantStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateStartTimestamp"))
  {
    m_stateStartTimestamp = jsonValue.GetDouble("StateStartTimestamp");
    m_stateStartTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateEndTimestamp"))
  {
    m_stateEndTimestamp = jsonValue.GetDouble("StateEndTimestamp");
    m_stateEndTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue StateTransition::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ParticipantStateMapper::GetNameForParticipantState(m_state));
  }

  if(m_stateStartTimestampHasBeenSet)
  {
   payload.WithDouble("StateStartTimestamp", m_stateStartTimestamp.SecondsWithMSPrecision());
  }

  if(m_stateEndTimestampHasBeenSet)
  {
   payload.WithDouble("StateEndTimestamp", m_stateEndTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
