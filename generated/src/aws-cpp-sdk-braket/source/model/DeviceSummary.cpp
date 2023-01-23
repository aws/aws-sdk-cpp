/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/DeviceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

DeviceSummary::DeviceSummary() : 
    m_deviceArnHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceStatus(DeviceStatus::NOT_SET),
    m_deviceStatusHasBeenSet(false),
    m_deviceType(DeviceType::NOT_SET),
    m_deviceTypeHasBeenSet(false),
    m_providerNameHasBeenSet(false)
{
}

DeviceSummary::DeviceSummary(JsonView jsonValue) : 
    m_deviceArnHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceStatus(DeviceStatus::NOT_SET),
    m_deviceStatusHasBeenSet(false),
    m_deviceType(DeviceType::NOT_SET),
    m_deviceTypeHasBeenSet(false),
    m_providerNameHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceSummary& DeviceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deviceArn"))
  {
    m_deviceArn = jsonValue.GetString("deviceArn");

    m_deviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceName"))
  {
    m_deviceName = jsonValue.GetString("deviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceStatus"))
  {
    m_deviceStatus = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("deviceStatus"));

    m_deviceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceType"))
  {
    m_deviceType = DeviceTypeMapper::GetDeviceTypeForName(jsonValue.GetString("deviceType"));

    m_deviceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("providerName"))
  {
    m_providerName = jsonValue.GetString("providerName");

    m_providerNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("deviceArn", m_deviceArn);

  }

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("deviceName", m_deviceName);

  }

  if(m_deviceStatusHasBeenSet)
  {
   payload.WithString("deviceStatus", DeviceStatusMapper::GetNameForDeviceStatus(m_deviceStatus));
  }

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithString("deviceType", DeviceTypeMapper::GetNameForDeviceType(m_deviceType));
  }

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("providerName", m_providerName);

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
