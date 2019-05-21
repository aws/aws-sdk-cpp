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

#include <aws/alexaforbusiness/model/Device.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

Device::Device() : 
    m_deviceArnHasBeenSet(false),
    m_deviceSerialNumberHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_softwareVersionHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_roomArnHasBeenSet(false),
    m_deviceStatus(DeviceStatus::NOT_SET),
    m_deviceStatusHasBeenSet(false),
    m_deviceStatusInfoHasBeenSet(false),
    m_networkProfileInfoHasBeenSet(false)
{
}

Device::Device(JsonView jsonValue) : 
    m_deviceArnHasBeenSet(false),
    m_deviceSerialNumberHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_softwareVersionHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_roomArnHasBeenSet(false),
    m_deviceStatus(DeviceStatus::NOT_SET),
    m_deviceStatusHasBeenSet(false),
    m_deviceStatusInfoHasBeenSet(false),
    m_networkProfileInfoHasBeenSet(false)
{
  *this = jsonValue;
}

Device& Device::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceArn"))
  {
    m_deviceArn = jsonValue.GetString("DeviceArn");

    m_deviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceSerialNumber"))
  {
    m_deviceSerialNumber = jsonValue.GetString("DeviceSerialNumber");

    m_deviceSerialNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceType"))
  {
    m_deviceType = jsonValue.GetString("DeviceType");

    m_deviceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SoftwareVersion"))
  {
    m_softwareVersion = jsonValue.GetString("SoftwareVersion");

    m_softwareVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MacAddress"))
  {
    m_macAddress = jsonValue.GetString("MacAddress");

    m_macAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoomArn"))
  {
    m_roomArn = jsonValue.GetString("RoomArn");

    m_roomArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceStatus"))
  {
    m_deviceStatus = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("DeviceStatus"));

    m_deviceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceStatusInfo"))
  {
    m_deviceStatusInfo = jsonValue.GetObject("DeviceStatusInfo");

    m_deviceStatusInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkProfileInfo"))
  {
    m_networkProfileInfo = jsonValue.GetObject("NetworkProfileInfo");

    m_networkProfileInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue Device::Jsonize() const
{
  JsonValue payload;

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("DeviceArn", m_deviceArn);

  }

  if(m_deviceSerialNumberHasBeenSet)
  {
   payload.WithString("DeviceSerialNumber", m_deviceSerialNumber);

  }

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithString("DeviceType", m_deviceType);

  }

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  if(m_softwareVersionHasBeenSet)
  {
   payload.WithString("SoftwareVersion", m_softwareVersion);

  }

  if(m_macAddressHasBeenSet)
  {
   payload.WithString("MacAddress", m_macAddress);

  }

  if(m_roomArnHasBeenSet)
  {
   payload.WithString("RoomArn", m_roomArn);

  }

  if(m_deviceStatusHasBeenSet)
  {
   payload.WithString("DeviceStatus", DeviceStatusMapper::GetNameForDeviceStatus(m_deviceStatus));
  }

  if(m_deviceStatusInfoHasBeenSet)
  {
   payload.WithObject("DeviceStatusInfo", m_deviceStatusInfo.Jsonize());

  }

  if(m_networkProfileInfoHasBeenSet)
  {
   payload.WithObject("NetworkProfileInfo", m_networkProfileInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
