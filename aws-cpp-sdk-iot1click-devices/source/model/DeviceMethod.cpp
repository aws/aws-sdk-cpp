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

#include <aws/iot1click-devices/model/DeviceMethod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT1ClickDevicesService
{
namespace Model
{

DeviceMethod::DeviceMethod() : 
    m_deviceTypeHasBeenSet(false),
    m_methodNameHasBeenSet(false)
{
}

DeviceMethod::DeviceMethod(const JsonValue& jsonValue) : 
    m_deviceTypeHasBeenSet(false),
    m_methodNameHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceMethod& DeviceMethod::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("deviceType"))
  {
    m_deviceType = jsonValue.GetString("deviceType");

    m_deviceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("methodName"))
  {
    m_methodName = jsonValue.GetString("methodName");

    m_methodNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceMethod::Jsonize() const
{
  JsonValue payload;

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithString("deviceType", m_deviceType);

  }

  if(m_methodNameHasBeenSet)
  {
   payload.WithString("methodName", m_methodName);

  }

  return payload;
}

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
