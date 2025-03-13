/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/InternetEventSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

InternetEventSummary::InternetEventSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

InternetEventSummary& InternetEventSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventId"))
  {
    m_eventId = jsonValue.GetString("EventId");
    m_eventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventArn"))
  {
    m_eventArn = jsonValue.GetString("EventArn");
    m_eventArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetString("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndedAt"))
  {
    m_endedAt = jsonValue.GetString("EndedAt");
    m_endedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClientLocation"))
  {
    m_clientLocation = jsonValue.GetObject("ClientLocation");
    m_clientLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventType"))
  {
    m_eventType = InternetEventTypeMapper::GetInternetEventTypeForName(jsonValue.GetString("EventType"));
    m_eventTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventStatus"))
  {
    m_eventStatus = InternetEventStatusMapper::GetInternetEventStatusForName(jsonValue.GetString("EventStatus"));
    m_eventStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue InternetEventSummary::Jsonize() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("EventId", m_eventId);

  }

  if(m_eventArnHasBeenSet)
  {
   payload.WithString("EventArn", m_eventArn);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("StartedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("EndedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_clientLocationHasBeenSet)
  {
   payload.WithObject("ClientLocation", m_clientLocation.Jsonize());

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("EventType", InternetEventTypeMapper::GetNameForInternetEventType(m_eventType));
  }

  if(m_eventStatusHasBeenSet)
  {
   payload.WithString("EventStatus", InternetEventStatusMapper::GetNameForInternetEventStatus(m_eventStatus));
  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
