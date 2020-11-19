/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateInputDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateInputDeviceResult::UpdateInputDeviceResult() : 
    m_connectionState(InputDeviceConnectionState::NOT_SET),
    m_deviceSettingsSyncState(DeviceSettingsSyncState::NOT_SET),
    m_deviceUpdateStatus(DeviceUpdateStatus::NOT_SET),
    m_type(InputDeviceType::NOT_SET)
{
}

UpdateInputDeviceResult::UpdateInputDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_connectionState(InputDeviceConnectionState::NOT_SET),
    m_deviceSettingsSyncState(DeviceSettingsSyncState::NOT_SET),
    m_deviceUpdateStatus(DeviceUpdateStatus::NOT_SET),
    m_type(InputDeviceType::NOT_SET)
{
  *this = result;
}

UpdateInputDeviceResult& UpdateInputDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("connectionState"))
  {
    m_connectionState = InputDeviceConnectionStateMapper::GetInputDeviceConnectionStateForName(jsonValue.GetString("connectionState"));

  }

  if(jsonValue.ValueExists("deviceSettingsSyncState"))
  {
    m_deviceSettingsSyncState = DeviceSettingsSyncStateMapper::GetDeviceSettingsSyncStateForName(jsonValue.GetString("deviceSettingsSyncState"));

  }

  if(jsonValue.ValueExists("deviceUpdateStatus"))
  {
    m_deviceUpdateStatus = DeviceUpdateStatusMapper::GetDeviceUpdateStatusForName(jsonValue.GetString("deviceUpdateStatus"));

  }

  if(jsonValue.ValueExists("hdDeviceSettings"))
  {
    m_hdDeviceSettings = jsonValue.GetObject("hdDeviceSettings");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("macAddress"))
  {
    m_macAddress = jsonValue.GetString("macAddress");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("networkSettings"))
  {
    m_networkSettings = jsonValue.GetObject("networkSettings");

  }

  if(jsonValue.ValueExists("serialNumber"))
  {
    m_serialNumber = jsonValue.GetString("serialNumber");

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = InputDeviceTypeMapper::GetInputDeviceTypeForName(jsonValue.GetString("type"));

  }



  return *this;
}
