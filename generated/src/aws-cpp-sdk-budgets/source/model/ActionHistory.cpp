/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/ActionHistory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

ActionHistory::ActionHistory() : 
    m_timestampHasBeenSet(false),
    m_status(ActionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_actionHistoryDetailsHasBeenSet(false)
{
}

ActionHistory::ActionHistory(JsonView jsonValue) : 
    m_timestampHasBeenSet(false),
    m_status(ActionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_actionHistoryDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ActionHistory& ActionHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ActionStatusMapper::GetActionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventType"))
  {
    m_eventType = EventTypeMapper::GetEventTypeForName(jsonValue.GetString("EventType"));

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionHistoryDetails"))
  {
    m_actionHistoryDetails = jsonValue.GetObject("ActionHistoryDetails");

    m_actionHistoryDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionHistory::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ActionStatusMapper::GetNameForActionStatus(m_status));
  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("EventType", EventTypeMapper::GetNameForEventType(m_eventType));
  }

  if(m_actionHistoryDetailsHasBeenSet)
  {
   payload.WithObject("ActionHistoryDetails", m_actionHistoryDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
