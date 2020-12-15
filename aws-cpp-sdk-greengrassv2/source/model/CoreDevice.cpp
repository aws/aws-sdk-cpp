/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/CoreDevice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

CoreDevice::CoreDevice() : 
    m_coreDeviceThingNameHasBeenSet(false),
    m_status(CoreDeviceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastStatusUpdateTimestampHasBeenSet(false)
{
}

CoreDevice::CoreDevice(JsonView jsonValue) : 
    m_coreDeviceThingNameHasBeenSet(false),
    m_status(CoreDeviceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastStatusUpdateTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

CoreDevice& CoreDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("coreDeviceThingName"))
  {
    m_coreDeviceThingName = jsonValue.GetString("coreDeviceThingName");

    m_coreDeviceThingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CoreDeviceStatusMapper::GetCoreDeviceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStatusUpdateTimestamp"))
  {
    m_lastStatusUpdateTimestamp = jsonValue.GetDouble("lastStatusUpdateTimestamp");

    m_lastStatusUpdateTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue CoreDevice::Jsonize() const
{
  JsonValue payload;

  if(m_coreDeviceThingNameHasBeenSet)
  {
   payload.WithString("coreDeviceThingName", m_coreDeviceThingName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CoreDeviceStatusMapper::GetNameForCoreDeviceStatus(m_status));
  }

  if(m_lastStatusUpdateTimestampHasBeenSet)
  {
   payload.WithDouble("lastStatusUpdateTimestamp", m_lastStatusUpdateTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
