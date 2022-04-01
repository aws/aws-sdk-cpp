/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/InstanceBlockDeviceMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

InstanceBlockDeviceMapping::InstanceBlockDeviceMapping() : 
    m_deviceNameHasBeenSet(false),
    m_ebsHasBeenSet(false),
    m_virtualNameHasBeenSet(false),
    m_noDeviceHasBeenSet(false)
{
}

InstanceBlockDeviceMapping::InstanceBlockDeviceMapping(JsonView jsonValue) : 
    m_deviceNameHasBeenSet(false),
    m_ebsHasBeenSet(false),
    m_virtualNameHasBeenSet(false),
    m_noDeviceHasBeenSet(false)
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

  if(jsonValue.ValueExists("virtualName"))
  {
    m_virtualName = jsonValue.GetString("virtualName");

    m_virtualNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noDevice"))
  {
    m_noDevice = jsonValue.GetString("noDevice");

    m_noDeviceHasBeenSet = true;
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

  if(m_virtualNameHasBeenSet)
  {
   payload.WithString("virtualName", m_virtualName);

  }

  if(m_noDeviceHasBeenSet)
  {
   payload.WithString("noDevice", m_noDevice);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
