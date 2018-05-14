/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

DeviceEvent::DeviceEvent(const JsonValue& jsonValue) : 
    m_deviceHasBeenSet(false),
    m_stdEventHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceEvent& DeviceEvent::operator =(const JsonValue& jsonValue)
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
