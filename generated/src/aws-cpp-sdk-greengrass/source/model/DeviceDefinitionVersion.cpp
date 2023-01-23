/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/DeviceDefinitionVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

DeviceDefinitionVersion::DeviceDefinitionVersion() : 
    m_devicesHasBeenSet(false)
{
}

DeviceDefinitionVersion::DeviceDefinitionVersion(JsonView jsonValue) : 
    m_devicesHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceDefinitionVersion& DeviceDefinitionVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Devices"))
  {
    Aws::Utils::Array<JsonView> devicesJsonList = jsonValue.GetArray("Devices");
    for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
    {
      m_devices.push_back(devicesJsonList[devicesIndex].AsObject());
    }
    m_devicesHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceDefinitionVersion::Jsonize() const
{
  JsonValue payload;

  if(m_devicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> devicesJsonList(m_devices.size());
   for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
   {
     devicesJsonList[devicesIndex].AsObject(m_devices[devicesIndex].Jsonize());
   }
   payload.WithArray("Devices", std::move(devicesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
