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

#include <aws/worklink/model/DeviceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkLink
{
namespace Model
{

DeviceSummary::DeviceSummary() : 
    m_deviceIdHasBeenSet(false),
    m_deviceStatus(DeviceStatus::NOT_SET),
    m_deviceStatusHasBeenSet(false)
{
}

DeviceSummary::DeviceSummary(JsonView jsonValue) : 
    m_deviceIdHasBeenSet(false),
    m_deviceStatus(DeviceStatus::NOT_SET),
    m_deviceStatusHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceSummary& DeviceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceStatus"))
  {
    m_deviceStatus = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("DeviceStatus"));

    m_deviceStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_deviceStatusHasBeenSet)
  {
   payload.WithString("DeviceStatus", DeviceStatusMapper::GetNameForDeviceStatus(m_deviceStatus));
  }

  return payload;
}

} // namespace Model
} // namespace WorkLink
} // namespace Aws
