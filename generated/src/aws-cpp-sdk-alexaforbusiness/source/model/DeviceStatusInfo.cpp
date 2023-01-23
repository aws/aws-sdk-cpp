/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DeviceStatusInfo.h>
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

DeviceStatusInfo::DeviceStatusInfo() : 
    m_deviceStatusDetailsHasBeenSet(false),
    m_connectionStatus(ConnectionStatus::NOT_SET),
    m_connectionStatusHasBeenSet(false),
    m_connectionStatusUpdatedTimeHasBeenSet(false)
{
}

DeviceStatusInfo::DeviceStatusInfo(JsonView jsonValue) : 
    m_deviceStatusDetailsHasBeenSet(false),
    m_connectionStatus(ConnectionStatus::NOT_SET),
    m_connectionStatusHasBeenSet(false),
    m_connectionStatusUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceStatusInfo& DeviceStatusInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceStatusDetails"))
  {
    Aws::Utils::Array<JsonView> deviceStatusDetailsJsonList = jsonValue.GetArray("DeviceStatusDetails");
    for(unsigned deviceStatusDetailsIndex = 0; deviceStatusDetailsIndex < deviceStatusDetailsJsonList.GetLength(); ++deviceStatusDetailsIndex)
    {
      m_deviceStatusDetails.push_back(deviceStatusDetailsJsonList[deviceStatusDetailsIndex].AsObject());
    }
    m_deviceStatusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionStatus"))
  {
    m_connectionStatus = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("ConnectionStatus"));

    m_connectionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionStatusUpdatedTime"))
  {
    m_connectionStatusUpdatedTime = jsonValue.GetDouble("ConnectionStatusUpdatedTime");

    m_connectionStatusUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceStatusInfo::Jsonize() const
{
  JsonValue payload;

  if(m_deviceStatusDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceStatusDetailsJsonList(m_deviceStatusDetails.size());
   for(unsigned deviceStatusDetailsIndex = 0; deviceStatusDetailsIndex < deviceStatusDetailsJsonList.GetLength(); ++deviceStatusDetailsIndex)
   {
     deviceStatusDetailsJsonList[deviceStatusDetailsIndex].AsObject(m_deviceStatusDetails[deviceStatusDetailsIndex].Jsonize());
   }
   payload.WithArray("DeviceStatusDetails", std::move(deviceStatusDetailsJsonList));

  }

  if(m_connectionStatusHasBeenSet)
  {
   payload.WithString("ConnectionStatus", ConnectionStatusMapper::GetNameForConnectionStatus(m_connectionStatus));
  }

  if(m_connectionStatusUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("ConnectionStatusUpdatedTime", m_connectionStatusUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
