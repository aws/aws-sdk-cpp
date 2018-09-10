﻿/*
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

#include <aws/ecs/model/LinuxParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

LinuxParameters::LinuxParameters() : 
    m_capabilitiesHasBeenSet(false),
    m_devicesHasBeenSet(false),
    m_initProcessEnabled(false),
    m_initProcessEnabledHasBeenSet(false),
    m_sharedMemorySize(0),
    m_sharedMemorySizeHasBeenSet(false),
    m_tmpfsHasBeenSet(false)
{
}

LinuxParameters::LinuxParameters(JsonView jsonValue) : 
    m_capabilitiesHasBeenSet(false),
    m_devicesHasBeenSet(false),
    m_initProcessEnabled(false),
    m_initProcessEnabledHasBeenSet(false),
    m_sharedMemorySize(0),
    m_sharedMemorySizeHasBeenSet(false),
    m_tmpfsHasBeenSet(false)
{
  *this = jsonValue;
}

LinuxParameters& LinuxParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("capabilities"))
  {
    m_capabilities = jsonValue.GetObject("capabilities");

    m_capabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("devices"))
  {
    Array<JsonView> devicesJsonList = jsonValue.GetArray("devices");
    for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
    {
      m_devices.push_back(devicesJsonList[devicesIndex].AsObject());
    }
    m_devicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initProcessEnabled"))
  {
    m_initProcessEnabled = jsonValue.GetBool("initProcessEnabled");

    m_initProcessEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sharedMemorySize"))
  {
    m_sharedMemorySize = jsonValue.GetInteger("sharedMemorySize");

    m_sharedMemorySizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tmpfs"))
  {
    Array<JsonView> tmpfsJsonList = jsonValue.GetArray("tmpfs");
    for(unsigned tmpfsIndex = 0; tmpfsIndex < tmpfsJsonList.GetLength(); ++tmpfsIndex)
    {
      m_tmpfs.push_back(tmpfsJsonList[tmpfsIndex].AsObject());
    }
    m_tmpfsHasBeenSet = true;
  }

  return *this;
}

JsonValue LinuxParameters::Jsonize() const
{
  JsonValue payload;

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithObject("capabilities", m_capabilities.Jsonize());

  }

  if(m_devicesHasBeenSet)
  {
   Array<JsonValue> devicesJsonList(m_devices.size());
   for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
   {
     devicesJsonList[devicesIndex].AsObject(m_devices[devicesIndex].Jsonize());
   }
   payload.WithArray("devices", std::move(devicesJsonList));

  }

  if(m_initProcessEnabledHasBeenSet)
  {
   payload.WithBool("initProcessEnabled", m_initProcessEnabled);

  }

  if(m_sharedMemorySizeHasBeenSet)
  {
   payload.WithInteger("sharedMemorySize", m_sharedMemorySize);

  }

  if(m_tmpfsHasBeenSet)
  {
   Array<JsonValue> tmpfsJsonList(m_tmpfs.size());
   for(unsigned tmpfsIndex = 0; tmpfsIndex < tmpfsJsonList.GetLength(); ++tmpfsIndex)
   {
     tmpfsJsonList[tmpfsIndex].AsObject(m_tmpfs[tmpfsIndex].Jsonize());
   }
   payload.WithArray("tmpfs", std::move(tmpfsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
