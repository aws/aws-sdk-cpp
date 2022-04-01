/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/Replay.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

Replay::Replay() : 
    m_replayNameHasBeenSet(false),
    m_eventSourceArnHasBeenSet(false),
    m_state(ReplayState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_eventStartTimeHasBeenSet(false),
    m_eventEndTimeHasBeenSet(false),
    m_eventLastReplayedTimeHasBeenSet(false),
    m_replayStartTimeHasBeenSet(false),
    m_replayEndTimeHasBeenSet(false)
{
}

Replay::Replay(JsonView jsonValue) : 
    m_replayNameHasBeenSet(false),
    m_eventSourceArnHasBeenSet(false),
    m_state(ReplayState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_eventStartTimeHasBeenSet(false),
    m_eventEndTimeHasBeenSet(false),
    m_eventLastReplayedTimeHasBeenSet(false),
    m_replayStartTimeHasBeenSet(false),
    m_replayEndTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Replay& Replay::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplayName"))
  {
    m_replayName = jsonValue.GetString("ReplayName");

    m_replayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventSourceArn"))
  {
    m_eventSourceArn = jsonValue.GetString("EventSourceArn");

    m_eventSourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ReplayStateMapper::GetReplayStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

    m_stateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventStartTime"))
  {
    m_eventStartTime = jsonValue.GetDouble("EventStartTime");

    m_eventStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventEndTime"))
  {
    m_eventEndTime = jsonValue.GetDouble("EventEndTime");

    m_eventEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventLastReplayedTime"))
  {
    m_eventLastReplayedTime = jsonValue.GetDouble("EventLastReplayedTime");

    m_eventLastReplayedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplayStartTime"))
  {
    m_replayStartTime = jsonValue.GetDouble("ReplayStartTime");

    m_replayStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplayEndTime"))
  {
    m_replayEndTime = jsonValue.GetDouble("ReplayEndTime");

    m_replayEndTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Replay::Jsonize() const
{
  JsonValue payload;

  if(m_replayNameHasBeenSet)
  {
   payload.WithString("ReplayName", m_replayName);

  }

  if(m_eventSourceArnHasBeenSet)
  {
   payload.WithString("EventSourceArn", m_eventSourceArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ReplayStateMapper::GetNameForReplayState(m_state));
  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  if(m_eventStartTimeHasBeenSet)
  {
   payload.WithDouble("EventStartTime", m_eventStartTime.SecondsWithMSPrecision());
  }

  if(m_eventEndTimeHasBeenSet)
  {
   payload.WithDouble("EventEndTime", m_eventEndTime.SecondsWithMSPrecision());
  }

  if(m_eventLastReplayedTimeHasBeenSet)
  {
   payload.WithDouble("EventLastReplayedTime", m_eventLastReplayedTime.SecondsWithMSPrecision());
  }

  if(m_replayStartTimeHasBeenSet)
  {
   payload.WithDouble("ReplayStartTime", m_replayStartTime.SecondsWithMSPrecision());
  }

  if(m_replayEndTimeHasBeenSet)
  {
   payload.WithDouble("ReplayEndTime", m_replayEndTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
