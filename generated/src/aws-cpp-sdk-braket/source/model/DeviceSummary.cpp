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

DeviceSummary::DeviceSummary(JsonView jsonValue)
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
  if(jsonValue.ValueExists("providerName"))
  {
    m_providerName = jsonValue.GetString("providerName");
    m_providerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceType"))
  {
    m_deviceType = DeviceTypeMapper::GetDeviceTypeForName(jsonValue.GetString("deviceType"));
    m_deviceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceStatus"))
  {
    m_deviceStatus = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("deviceStatus"));
    m_deviceStatusHasBeenSet = true;
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

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("providerName", m_providerName);

  }

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithString("deviceType", DeviceTypeMapper::GetNameForDeviceType(m_deviceType));
  }

  if(m_deviceStatusHasBeenSet)
  {
   payload.WithString("deviceStatus", DeviceStatusMapper::GetNameForDeviceStatus(m_deviceStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
