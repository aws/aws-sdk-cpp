/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails::AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails() : 
    m_capabilitiesHasBeenSet(false),
    m_devicesHasBeenSet(false),
    m_initProcessEnabled(false),
    m_initProcessEnabledHasBeenSet(false),
    m_maxSwap(0),
    m_maxSwapHasBeenSet(false),
    m_sharedMemorySize(0),
    m_sharedMemorySizeHasBeenSet(false),
    m_swappiness(0),
    m_swappinessHasBeenSet(false),
    m_tmpfsHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails::AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails(JsonView jsonValue) : 
    m_capabilitiesHasBeenSet(false),
    m_devicesHasBeenSet(false),
    m_initProcessEnabled(false),
    m_initProcessEnabledHasBeenSet(false),
    m_maxSwap(0),
    m_maxSwapHasBeenSet(false),
    m_sharedMemorySize(0),
    m_sharedMemorySizeHasBeenSet(false),
    m_swappiness(0),
    m_swappinessHasBeenSet(false),
    m_tmpfsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Capabilities"))
  {
    m_capabilities = jsonValue.GetObject("Capabilities");

    m_capabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Devices"))
  {
    Aws::Utils::Array<JsonView> devicesJsonList = jsonValue.GetArray("Devices");
    for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
    {
      m_devices.push_back(devicesJsonList[devicesIndex].AsObject());
    }
    m_devicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitProcessEnabled"))
  {
    m_initProcessEnabled = jsonValue.GetBool("InitProcessEnabled");

    m_initProcessEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxSwap"))
  {
    m_maxSwap = jsonValue.GetInteger("MaxSwap");

    m_maxSwapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharedMemorySize"))
  {
    m_sharedMemorySize = jsonValue.GetInteger("SharedMemorySize");

    m_sharedMemorySizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Swappiness"))
  {
    m_swappiness = jsonValue.GetInteger("Swappiness");

    m_swappinessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tmpfs"))
  {
    Aws::Utils::Array<JsonView> tmpfsJsonList = jsonValue.GetArray("Tmpfs");
    for(unsigned tmpfsIndex = 0; tmpfsIndex < tmpfsJsonList.GetLength(); ++tmpfsIndex)
    {
      m_tmpfs.push_back(tmpfsJsonList[tmpfsIndex].AsObject());
    }
    m_tmpfsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails::Jsonize() const
{
  JsonValue payload;

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithObject("Capabilities", m_capabilities.Jsonize());

  }

  if(m_devicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> devicesJsonList(m_devices.size());
   for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
   {
     devicesJsonList[devicesIndex].AsObject(m_devices[devicesIndex].Jsonize());
   }
   payload.WithArray("Devices", std::move(devicesJsonList));

  }

  if(m_initProcessEnabledHasBeenSet)
  {
   payload.WithBool("InitProcessEnabled", m_initProcessEnabled);

  }

  if(m_maxSwapHasBeenSet)
  {
   payload.WithInteger("MaxSwap", m_maxSwap);

  }

  if(m_sharedMemorySizeHasBeenSet)
  {
   payload.WithInteger("SharedMemorySize", m_sharedMemorySize);

  }

  if(m_swappinessHasBeenSet)
  {
   payload.WithInteger("Swappiness", m_swappiness);

  }

  if(m_tmpfsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tmpfsJsonList(m_tmpfs.size());
   for(unsigned tmpfsIndex = 0; tmpfsIndex < tmpfsJsonList.GetLength(); ++tmpfsIndex)
   {
     tmpfsJsonList[tmpfsIndex].AsObject(m_tmpfs[tmpfsIndex].Jsonize());
   }
   payload.WithArray("Tmpfs", std::move(tmpfsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
