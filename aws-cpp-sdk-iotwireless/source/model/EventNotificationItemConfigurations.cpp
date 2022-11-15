/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/EventNotificationItemConfigurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

EventNotificationItemConfigurations::EventNotificationItemConfigurations() : 
    m_deviceRegistrationStateHasBeenSet(false),
    m_proximityHasBeenSet(false),
    m_joinHasBeenSet(false),
    m_connectionStatusHasBeenSet(false),
    m_messageDeliveryStatusHasBeenSet(false)
{
}

EventNotificationItemConfigurations::EventNotificationItemConfigurations(JsonView jsonValue) : 
    m_deviceRegistrationStateHasBeenSet(false),
    m_proximityHasBeenSet(false),
    m_joinHasBeenSet(false),
    m_connectionStatusHasBeenSet(false),
    m_messageDeliveryStatusHasBeenSet(false)
{
  *this = jsonValue;
}

EventNotificationItemConfigurations& EventNotificationItemConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceRegistrationState"))
  {
    m_deviceRegistrationState = jsonValue.GetObject("DeviceRegistrationState");

    m_deviceRegistrationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Proximity"))
  {
    m_proximity = jsonValue.GetObject("Proximity");

    m_proximityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Join"))
  {
    m_join = jsonValue.GetObject("Join");

    m_joinHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionStatus"))
  {
    m_connectionStatus = jsonValue.GetObject("ConnectionStatus");

    m_connectionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageDeliveryStatus"))
  {
    m_messageDeliveryStatus = jsonValue.GetObject("MessageDeliveryStatus");

    m_messageDeliveryStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue EventNotificationItemConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_deviceRegistrationStateHasBeenSet)
  {
   payload.WithObject("DeviceRegistrationState", m_deviceRegistrationState.Jsonize());

  }

  if(m_proximityHasBeenSet)
  {
   payload.WithObject("Proximity", m_proximity.Jsonize());

  }

  if(m_joinHasBeenSet)
  {
   payload.WithObject("Join", m_join.Jsonize());

  }

  if(m_connectionStatusHasBeenSet)
  {
   payload.WithObject("ConnectionStatus", m_connectionStatus.Jsonize());

  }

  if(m_messageDeliveryStatusHasBeenSet)
  {
   payload.WithObject("MessageDeliveryStatus", m_messageDeliveryStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
