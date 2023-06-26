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
    m_devicesHasBeenSet(false),
    m_initProcessEnabled(false),
    m_initProcessEnabledHasBeenSet(false),
    m_sharedMemorySize(0),
    m_sharedMemorySizeHasBeenSet(false),
    m_tmpfsHasBeenSet(false),
    m_maxSwap(0),
    m_maxSwapHasBeenSet(false),
    m_swappiness(0),
    m_swappinessHasBeenSet(false)
{
}

LinuxParameters::LinuxParameters(JsonView jsonValue) : 
    m_devicesHasBeenSet(false),
    m_initProcessEnabled(false),
    m_initProcessEnabledHasBeenSet(false),
    m_sharedMemorySize(0),
    m_sharedMemorySizeHasBeenSet(false),
    m_tmpfsHasBeenSet(false),
    m_maxSwap(0),
    m_maxSwapHasBeenSet(false),
    m_swappiness(0),
    m_swappinessHasBeenSet(false)
{
  *this = jsonValue;
}

LinuxParameters& LinuxParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("devices"))
  {
    Aws::Utils::Array<JsonView> devicesJsonList = jsonValue.GetArray("devices");
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
    Aws::Utils::Array<JsonView> tmpfsJsonList = jsonValue.GetArray("tmpfs");
    for(unsigned tmpfsIndex = 0; tmpfsIndex < tmpfsJsonList.GetLength(); ++tmpfsIndex)
    {
      m_tmpfs.push_back(tmpfsJsonList[tmpfsIndex].AsObject());
    }
    m_tmpfsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxSwap"))
  {
    m_maxSwap = jsonValue.GetInteger("maxSwap");

    m_maxSwapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("swappiness"))
  {
    m_swappiness = jsonValue.GetInteger("swappiness");

    m_swappinessHasBeenSet = true;
  }

  return *this;
}

JsonValue LinuxParameters::Jsonize() const
{
  JsonValue payload;

  if(m_devicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> devicesJsonList(m_devices.size());
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
   Aws::Utils::Array<JsonValue> tmpfsJsonList(m_tmpfs.size());
   for(unsigned tmpfsIndex = 0; tmpfsIndex < tmpfsJsonList.GetLength(); ++tmpfsIndex)
   {
     tmpfsJsonList[tmpfsIndex].AsObject(m_tmpfs[tmpfsIndex].Jsonize());
   }
   payload.WithArray("tmpfs", std::move(tmpfsJsonList));

  }

  if(m_maxSwapHasBeenSet)
  {
   payload.WithInteger("maxSwap", m_maxSwap);

  }

  if(m_swappinessHasBeenSet)
  {
   payload.WithInteger("swappiness", m_swappiness);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
