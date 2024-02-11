/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/EventStreamDestinationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

EventStreamDestinationDetails::EventStreamDestinationDetails() : 
    m_uriHasBeenSet(false),
    m_status(EventStreamDestinationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_unhealthySinceHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

EventStreamDestinationDetails::EventStreamDestinationDetails(JsonView jsonValue) : 
    m_uriHasBeenSet(false),
    m_status(EventStreamDestinationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_unhealthySinceHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

EventStreamDestinationDetails& EventStreamDestinationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uri"))
  {
    m_uri = jsonValue.GetString("Uri");

    m_uriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EventStreamDestinationStatusMapper::GetEventStreamDestinationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnhealthySince"))
  {
    m_unhealthySince = jsonValue.GetDouble("UnhealthySince");

    m_unhealthySinceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue EventStreamDestinationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EventStreamDestinationStatusMapper::GetNameForEventStreamDestinationStatus(m_status));
  }

  if(m_unhealthySinceHasBeenSet)
  {
   payload.WithDouble("UnhealthySince", m_unhealthySince.SecondsWithMSPrecision());
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
