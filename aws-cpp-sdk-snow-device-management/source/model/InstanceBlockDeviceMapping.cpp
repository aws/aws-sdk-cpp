/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/InstanceBlockDeviceMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{

InstanceBlockDeviceMapping::InstanceBlockDeviceMapping() : 
    m_deviceNameHasBeenSet(false),
    m_ebsHasBeenSet(false)
{
}

InstanceBlockDeviceMapping::InstanceBlockDeviceMapping(JsonView jsonValue) : 
    m_deviceNameHasBeenSet(false),
    m_ebsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceBlockDeviceMapping& InstanceBlockDeviceMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deviceName"))
  {
    m_deviceName = jsonValue.GetString("deviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebs"))
  {
    m_ebs = jsonValue.GetObject("ebs");

    m_ebsHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceBlockDeviceMapping::Jsonize() const
{
  JsonValue payload;

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("deviceName", m_deviceName);

  }

  if(m_ebsHasBeenSet)
  {
   payload.WithObject("ebs", m_ebs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
