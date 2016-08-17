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
#include <aws/opsworks/model/BlockDeviceMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

BlockDeviceMapping::BlockDeviceMapping() : 
    m_deviceNameHasBeenSet(false),
    m_noDeviceHasBeenSet(false),
    m_virtualNameHasBeenSet(false),
    m_ebsHasBeenSet(false)
{
}

BlockDeviceMapping::BlockDeviceMapping(const JsonValue& jsonValue) : 
    m_deviceNameHasBeenSet(false),
    m_noDeviceHasBeenSet(false),
    m_virtualNameHasBeenSet(false),
    m_ebsHasBeenSet(false)
{
  *this = jsonValue;
}

BlockDeviceMapping& BlockDeviceMapping::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoDevice"))
  {
    m_noDevice = jsonValue.GetString("NoDevice");

    m_noDeviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VirtualName"))
  {
    m_virtualName = jsonValue.GetString("VirtualName");

    m_virtualNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ebs"))
  {
    m_ebs = jsonValue.GetObject("Ebs");

    m_ebsHasBeenSet = true;
  }

  return *this;
}

JsonValue BlockDeviceMapping::Jsonize() const
{
  JsonValue payload;

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  if(m_noDeviceHasBeenSet)
  {
   payload.WithString("NoDevice", m_noDevice);

  }

  if(m_virtualNameHasBeenSet)
  {
   payload.WithString("VirtualName", m_virtualName);

  }

  if(m_ebsHasBeenSet)
  {
   payload.WithObject("Ebs", m_ebs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws