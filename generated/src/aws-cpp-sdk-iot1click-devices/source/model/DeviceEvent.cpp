/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-devices/model/DeviceEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT1ClickDevicesService
{
namespace Model
{

DeviceEvent::DeviceEvent() : 
    m_deviceHasBeenSet(false),
    m_stdEventHasBeenSet(false)
{
}

DeviceEvent::DeviceEvent(JsonView jsonValue) : 
    m_deviceHasBeenSet(false),
    m_stdEventHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceEvent& DeviceEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("device"))
  {
    m_device = jsonValue.GetObject("device");

    m_deviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stdEvent"))
  {
    m_stdEvent = jsonValue.GetString("stdEvent");

    m_stdEventHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceEvent::Jsonize() const
{
  JsonValue payload;

  if(m_deviceHasBeenSet)
  {
   payload.WithObject("device", m_device.Jsonize());

  }

  if(m_stdEventHasBeenSet)
  {
   payload.WithString("stdEvent", m_stdEvent);

  }

  return payload;
}

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
