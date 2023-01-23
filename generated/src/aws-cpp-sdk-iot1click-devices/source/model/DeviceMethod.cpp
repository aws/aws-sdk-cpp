/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DeviceMethod::DeviceMethod(JsonView jsonValue) : 
    m_deviceTypeHasBeenSet(false),
    m_methodNameHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceMethod& DeviceMethod::operator =(JsonView jsonValue)
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
