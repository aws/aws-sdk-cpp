/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/model/AccountSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AccountSettings::AccountSettings() : 
    m_awsAccountNumberHasBeenSet(false),
    m_unmeteredDevicesHasBeenSet(false)
{
}

AccountSettings::AccountSettings(const JsonValue& jsonValue) : 
    m_awsAccountNumberHasBeenSet(false),
    m_unmeteredDevicesHasBeenSet(false)
{
  *this = jsonValue;
}

AccountSettings& AccountSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("awsAccountNumber"))
  {
    m_awsAccountNumber = jsonValue.GetString("awsAccountNumber");

    m_awsAccountNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unmeteredDevices"))
  {
    Aws::Map<Aws::String, JsonValue> unmeteredDevicesJsonMap = jsonValue.GetObject("unmeteredDevices").GetAllObjects();
    for(auto& unmeteredDevicesItem : unmeteredDevicesJsonMap)
    {
      m_unmeteredDevices[DevicePlatformMapper::GetDevicePlatformForName(unmeteredDevicesItem.first)] = unmeteredDevicesItem.second.AsInteger();
    }
    m_unmeteredDevicesHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountSettings::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountNumberHasBeenSet)
  {
   payload.WithString("awsAccountNumber", m_awsAccountNumber);

  }

  if(m_unmeteredDevicesHasBeenSet)
  {
   JsonValue unmeteredDevicesJsonMap;
   for(auto& unmeteredDevicesItem : m_unmeteredDevices)
   {
     unmeteredDevicesJsonMap.WithInteger(DevicePlatformMapper::GetNameForDevicePlatform(unmeteredDevicesItem.first), unmeteredDevicesItem.second);
   }
   payload.WithObject("unmeteredDevices", std::move(unmeteredDevicesJsonMap));

  }

  return payload;
}