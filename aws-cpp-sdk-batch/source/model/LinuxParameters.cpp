/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/LinuxParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

LinuxParameters::LinuxParameters() : 
    m_devicesHasBeenSet(false)
{
}

LinuxParameters::LinuxParameters(JsonView jsonValue) : 
    m_devicesHasBeenSet(false)
{
  *this = jsonValue;
}

LinuxParameters& LinuxParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("devices"))
  {
    Array<JsonView> devicesJsonList = jsonValue.GetArray("devices");
    for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
    {
      m_devices.push_back(devicesJsonList[devicesIndex].AsObject());
    }
    m_devicesHasBeenSet = true;
  }

  return *this;
}

JsonValue LinuxParameters::Jsonize() const
{
  JsonValue payload;

  if(m_devicesHasBeenSet)
  {
   Array<JsonValue> devicesJsonList(m_devices.size());
   for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
   {
     devicesJsonList[devicesIndex].AsObject(m_devices[devicesIndex].Jsonize());
   }
   payload.WithArray("devices", std::move(devicesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
