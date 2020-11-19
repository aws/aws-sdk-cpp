/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputDeviceSummary::InputDeviceSummary() : 
    m_arnHasBeenSet(false),
    m_connectionState(InputDeviceConnectionState::NOT_SET),
    m_connectionStateHasBeenSet(false),
    m_deviceSettingsSyncState(DeviceSettingsSyncState::NOT_SET),
    m_deviceSettingsSyncStateHasBeenSet(false),
    m_deviceUpdateStatus(DeviceUpdateStatus::NOT_SET),
    m_deviceUpdateStatusHasBeenSet(false),
    m_hdDeviceSettingsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networkSettingsHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_type(InputDeviceType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

InputDeviceSummary::InputDeviceSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_connectionState(InputDeviceConnectionState::NOT_SET),
    m_connectionStateHasBeenSet(false),
    m_deviceSettingsSyncState(DeviceSettingsSyncState::NOT_SET),
    m_deviceSettingsSyncStateHasBeenSet(false),
    m_deviceUpdateStatus(DeviceUpdateStatus::NOT_SET),
    m_deviceUpdateStatusHasBeenSet(false),
    m_hdDeviceSettingsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networkSettingsHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_type(InputDeviceType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

InputDeviceSummary& InputDeviceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionState"))
  {
    m_connectionState = InputDeviceConnectionStateMapper::GetInputDeviceConnectionStateForName(jsonValue.GetString("connectionState"));

    m_connectionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceSettingsSyncState"))
  {
    m_deviceSettingsSyncState = DeviceSettingsSyncStateMapper::GetDeviceSettingsSyncStateForName(jsonValue.GetString("deviceSettingsSyncState"));

    m_deviceSettingsSyncStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceUpdateStatus"))
  {
    m_deviceUpdateStatus = DeviceUpdateStatusMapper::GetDeviceUpdateStatusForName(jsonValue.GetString("deviceUpdateStatus"));

    m_deviceUpdateStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hdDeviceSettings"))
  {
    m_hdDeviceSettings = jsonValue.GetObject("hdDeviceSettings");

    m_hdDeviceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("macAddress"))
  {
    m_macAddress = jsonValue.GetString("macAddress");

    m_macAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkSettings"))
  {
    m_networkSettings = jsonValue.GetObject("networkSettings");

    m_networkSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serialNumber"))
  {
    m_serialNumber = jsonValue.GetString("serialNumber");

    m_serialNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = InputDeviceTypeMapper::GetInputDeviceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDeviceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_connectionStateHasBeenSet)
  {
   payload.WithString("connectionState", InputDeviceConnectionStateMapper::GetNameForInputDeviceConnectionState(m_connectionState));
  }

  if(m_deviceSettingsSyncStateHasBeenSet)
  {
   payload.WithString("deviceSettingsSyncState", DeviceSettingsSyncStateMapper::GetNameForDeviceSettingsSyncState(m_deviceSettingsSyncState));
  }

  if(m_deviceUpdateStatusHasBeenSet)
  {
   payload.WithString("deviceUpdateStatus", DeviceUpdateStatusMapper::GetNameForDeviceUpdateStatus(m_deviceUpdateStatus));
  }

  if(m_hdDeviceSettingsHasBeenSet)
  {
   payload.WithObject("hdDeviceSettings", m_hdDeviceSettings.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_macAddressHasBeenSet)
  {
   payload.WithString("macAddress", m_macAddress);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_networkSettingsHasBeenSet)
  {
   payload.WithObject("networkSettings", m_networkSettings.Jsonize());

  }

  if(m_serialNumberHasBeenSet)
  {
   payload.WithString("serialNumber", m_serialNumber);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", InputDeviceTypeMapper::GetNameForInputDeviceType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
