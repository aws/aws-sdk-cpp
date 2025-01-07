﻿/**
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
    m_lastStatusUpdateTimestampHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_runtimeHasBeenSet(false)
{
}

CoreDevice::CoreDevice(JsonView jsonValue)
  : CoreDevice()
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

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = jsonValue.GetString("platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = jsonValue.GetString("architecture");

    m_architectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtime"))
  {
    m_runtime = jsonValue.GetString("runtime");

    m_runtimeHasBeenSet = true;
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

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", m_platform);

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("architecture", m_architecture);

  }

  if(m_runtimeHasBeenSet)
  {
   payload.WithString("runtime", m_runtime);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
