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

#include <aws/medialive/model/DescribeInputDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInputDeviceResult::DescribeInputDeviceResult() : 
    m_connectionState(InputDeviceConnectionState::NOT_SET),
    m_deviceSettingsSyncState(DeviceSettingsSyncState::NOT_SET),
    m_type(InputDeviceType::NOT_SET)
{
}

DescribeInputDeviceResult::DescribeInputDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_connectionState(InputDeviceConnectionState::NOT_SET),
    m_deviceSettingsSyncState(DeviceSettingsSyncState::NOT_SET),
    m_type(InputDeviceType::NOT_SET)
{
  *this = result;
}

DescribeInputDeviceResult& DescribeInputDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
