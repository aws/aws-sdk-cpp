/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/AccountSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

AccountSettings::AccountSettings() : 
    m_awsAccountNumberHasBeenSet(false),
    m_unmeteredDevicesHasBeenSet(false),
    m_unmeteredRemoteAccessDevicesHasBeenSet(false),
    m_maxJobTimeoutMinutes(0),
    m_maxJobTimeoutMinutesHasBeenSet(false),
    m_trialMinutesHasBeenSet(false),
    m_maxSlotsHasBeenSet(false),
    m_defaultJobTimeoutMinutes(0),
    m_defaultJobTimeoutMinutesHasBeenSet(false),
    m_skipAppResign(false),
    m_skipAppResignHasBeenSet(false)
{
}

AccountSettings::AccountSettings(JsonView jsonValue) : 
    m_awsAccountNumberHasBeenSet(false),
    m_unmeteredDevicesHasBeenSet(false),
    m_unmeteredRemoteAccessDevicesHasBeenSet(false),
    m_maxJobTimeoutMinutes(0),
    m_maxJobTimeoutMinutesHasBeenSet(false),
    m_trialMinutesHasBeenSet(false),
    m_maxSlotsHasBeenSet(false),
    m_defaultJobTimeoutMinutes(0),
    m_defaultJobTimeoutMinutesHasBeenSet(false),
    m_skipAppResign(false),
    m_skipAppResignHasBeenSet(false)
{
  *this = jsonValue;
}

AccountSettings& AccountSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccountNumber"))
  {
    m_awsAccountNumber = jsonValue.GetString("awsAccountNumber");

    m_awsAccountNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unmeteredDevices"))
  {
    Aws::Map<Aws::String, JsonView> unmeteredDevicesJsonMap = jsonValue.GetObject("unmeteredDevices").GetAllObjects();
    for(auto& unmeteredDevicesItem : unmeteredDevicesJsonMap)
    {
      m_unmeteredDevices[DevicePlatformMapper::GetDevicePlatformForName(unmeteredDevicesItem.first)] = unmeteredDevicesItem.second.AsInteger();
    }
    m_unmeteredDevicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unmeteredRemoteAccessDevices"))
  {
    Aws::Map<Aws::String, JsonView> unmeteredRemoteAccessDevicesJsonMap = jsonValue.GetObject("unmeteredRemoteAccessDevices").GetAllObjects();
    for(auto& unmeteredRemoteAccessDevicesItem : unmeteredRemoteAccessDevicesJsonMap)
    {
      m_unmeteredRemoteAccessDevices[DevicePlatformMapper::GetDevicePlatformForName(unmeteredRemoteAccessDevicesItem.first)] = unmeteredRemoteAccessDevicesItem.second.AsInteger();
    }
    m_unmeteredRemoteAccessDevicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxJobTimeoutMinutes"))
  {
    m_maxJobTimeoutMinutes = jsonValue.GetInteger("maxJobTimeoutMinutes");

    m_maxJobTimeoutMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trialMinutes"))
  {
    m_trialMinutes = jsonValue.GetObject("trialMinutes");

    m_trialMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxSlots"))
  {
    Aws::Map<Aws::String, JsonView> maxSlotsJsonMap = jsonValue.GetObject("maxSlots").GetAllObjects();
    for(auto& maxSlotsItem : maxSlotsJsonMap)
    {
      m_maxSlots[maxSlotsItem.first] = maxSlotsItem.second.AsInteger();
    }
    m_maxSlotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultJobTimeoutMinutes"))
  {
    m_defaultJobTimeoutMinutes = jsonValue.GetInteger("defaultJobTimeoutMinutes");

    m_defaultJobTimeoutMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("skipAppResign"))
  {
    m_skipAppResign = jsonValue.GetBool("skipAppResign");

    m_skipAppResignHasBeenSet = true;
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

  if(m_unmeteredRemoteAccessDevicesHasBeenSet)
  {
   JsonValue unmeteredRemoteAccessDevicesJsonMap;
   for(auto& unmeteredRemoteAccessDevicesItem : m_unmeteredRemoteAccessDevices)
   {
     unmeteredRemoteAccessDevicesJsonMap.WithInteger(DevicePlatformMapper::GetNameForDevicePlatform(unmeteredRemoteAccessDevicesItem.first), unmeteredRemoteAccessDevicesItem.second);
   }
   payload.WithObject("unmeteredRemoteAccessDevices", std::move(unmeteredRemoteAccessDevicesJsonMap));

  }

  if(m_maxJobTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("maxJobTimeoutMinutes", m_maxJobTimeoutMinutes);

  }

  if(m_trialMinutesHasBeenSet)
  {
   payload.WithObject("trialMinutes", m_trialMinutes.Jsonize());

  }

  if(m_maxSlotsHasBeenSet)
  {
   JsonValue maxSlotsJsonMap;
   for(auto& maxSlotsItem : m_maxSlots)
   {
     maxSlotsJsonMap.WithInteger(maxSlotsItem.first, maxSlotsItem.second);
   }
   payload.WithObject("maxSlots", std::move(maxSlotsJsonMap));

  }

  if(m_defaultJobTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("defaultJobTimeoutMinutes", m_defaultJobTimeoutMinutes);

  }

  if(m_skipAppResignHasBeenSet)
  {
   payload.WithBool("skipAppResign", m_skipAppResign);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
