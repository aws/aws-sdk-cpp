/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TaskOverride.h>
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

TaskOverride::TaskOverride() : 
    m_containerOverridesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_inferenceAcceleratorOverridesHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false),
    m_ephemeralStorageHasBeenSet(false)
{
}

TaskOverride::TaskOverride(JsonView jsonValue) : 
    m_containerOverridesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_inferenceAcceleratorOverridesHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false),
    m_ephemeralStorageHasBeenSet(false)
{
  *this = jsonValue;
}

TaskOverride& TaskOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerOverrides"))
  {
    Aws::Utils::Array<JsonView> containerOverridesJsonList = jsonValue.GetArray("containerOverrides");
    for(unsigned containerOverridesIndex = 0; containerOverridesIndex < containerOverridesJsonList.GetLength(); ++containerOverridesIndex)
    {
      m_containerOverrides.push_back(containerOverridesJsonList[containerOverridesIndex].AsObject());
    }
    m_containerOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetString("cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inferenceAcceleratorOverrides"))
  {
    Aws::Utils::Array<JsonView> inferenceAcceleratorOverridesJsonList = jsonValue.GetArray("inferenceAcceleratorOverrides");
    for(unsigned inferenceAcceleratorOverridesIndex = 0; inferenceAcceleratorOverridesIndex < inferenceAcceleratorOverridesJsonList.GetLength(); ++inferenceAcceleratorOverridesIndex)
    {
      m_inferenceAcceleratorOverrides.push_back(inferenceAcceleratorOverridesJsonList[inferenceAcceleratorOverridesIndex].AsObject());
    }
    m_inferenceAcceleratorOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetString("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskRoleArn"))
  {
    m_taskRoleArn = jsonValue.GetString("taskRoleArn");

    m_taskRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ephemeralStorage"))
  {
    m_ephemeralStorage = jsonValue.GetObject("ephemeralStorage");

    m_ephemeralStorageHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskOverride::Jsonize() const
{
  JsonValue payload;

  if(m_containerOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerOverridesJsonList(m_containerOverrides.size());
   for(unsigned containerOverridesIndex = 0; containerOverridesIndex < containerOverridesJsonList.GetLength(); ++containerOverridesIndex)
   {
     containerOverridesJsonList[containerOverridesIndex].AsObject(m_containerOverrides[containerOverridesIndex].Jsonize());
   }
   payload.WithArray("containerOverrides", std::move(containerOverridesJsonList));

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithString("cpu", m_cpu);

  }

  if(m_inferenceAcceleratorOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inferenceAcceleratorOverridesJsonList(m_inferenceAcceleratorOverrides.size());
   for(unsigned inferenceAcceleratorOverridesIndex = 0; inferenceAcceleratorOverridesIndex < inferenceAcceleratorOverridesJsonList.GetLength(); ++inferenceAcceleratorOverridesIndex)
   {
     inferenceAcceleratorOverridesJsonList[inferenceAcceleratorOverridesIndex].AsObject(m_inferenceAcceleratorOverrides[inferenceAcceleratorOverridesIndex].Jsonize());
   }
   payload.WithArray("inferenceAcceleratorOverrides", std::move(inferenceAcceleratorOverridesJsonList));

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithString("memory", m_memory);

  }

  if(m_taskRoleArnHasBeenSet)
  {
   payload.WithString("taskRoleArn", m_taskRoleArn);

  }

  if(m_ephemeralStorageHasBeenSet)
  {
   payload.WithObject("ephemeralStorage", m_ephemeralStorage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
