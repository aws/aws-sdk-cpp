/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/LambdaContainerParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

LambdaContainerParams::LambdaContainerParams() : 
    m_memorySizeInKB(0),
    m_memorySizeInKBHasBeenSet(false),
    m_mountROSysfs(false),
    m_mountROSysfsHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_devicesHasBeenSet(false)
{
}

LambdaContainerParams::LambdaContainerParams(JsonView jsonValue) : 
    m_memorySizeInKB(0),
    m_memorySizeInKBHasBeenSet(false),
    m_mountROSysfs(false),
    m_mountROSysfsHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_devicesHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaContainerParams& LambdaContainerParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("memorySizeInKB"))
  {
    m_memorySizeInKB = jsonValue.GetInteger("memorySizeInKB");

    m_memorySizeInKBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mountROSysfs"))
  {
    m_mountROSysfs = jsonValue.GetBool("mountROSysfs");

    m_mountROSysfsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumes"))
  {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("volumes");
    for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
    {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("devices"))
  {
    Aws::Utils::Array<JsonView> devicesJsonList = jsonValue.GetArray("devices");
    for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
    {
      m_devices.push_back(devicesJsonList[devicesIndex].AsObject());
    }
    m_devicesHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaContainerParams::Jsonize() const
{
  JsonValue payload;

  if(m_memorySizeInKBHasBeenSet)
  {
   payload.WithInteger("memorySizeInKB", m_memorySizeInKB);

  }

  if(m_mountROSysfsHasBeenSet)
  {
   payload.WithBool("mountROSysfs", m_mountROSysfs);

  }

  if(m_volumesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumesJsonList(m_volumes.size());
   for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
   {
     volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
   }
   payload.WithArray("volumes", std::move(volumesJsonList));

  }

  if(m_devicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> devicesJsonList(m_devices.size());
   for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
   {
     devicesJsonList[devicesIndex].AsObject(m_devices[devicesIndex].Jsonize());
   }
   payload.WithArray("devices", std::move(devicesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
