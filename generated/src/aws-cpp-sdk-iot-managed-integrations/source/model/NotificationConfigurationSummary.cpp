/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/NotificationConfigurationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

NotificationConfigurationSummary::NotificationConfigurationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

NotificationConfigurationSummary& NotificationConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventType"))
  {
    m_eventType = EventTypeMapper::GetEventTypeForName(jsonValue.GetString("EventType"));
    m_eventTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationName"))
  {
    m_destinationName = jsonValue.GetString("DestinationName");
    m_destinationNameHasBeenSet = true;
  }
  return *this;
}

JsonValue NotificationConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("EventType", EventTypeMapper::GetNameForEventType(m_eventType));
  }

  if(m_destinationNameHasBeenSet)
  {
   payload.WithString("DestinationName", m_destinationName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
