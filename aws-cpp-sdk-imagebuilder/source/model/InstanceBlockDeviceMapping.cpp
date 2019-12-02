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
