/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/EcsContainerOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

EcsContainerOverride::EcsContainerOverride() : 
    m_commandHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_environmentFilesHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_memoryReservation(0),
    m_memoryReservationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false)
{
}

EcsContainerOverride::EcsContainerOverride(JsonView jsonValue) : 
    m_commandHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_environmentFilesHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_memoryReservation(0),
    m_memoryReservationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false)
{
  *this = jsonValue;
}

EcsContainerOverride& EcsContainerOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Command"))
  {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("Command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cpu"))
  {
    m_cpu = jsonValue.GetInteger("Cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    Aws::Utils::Array<JsonView> environmentJsonList = jsonValue.GetArray("Environment");
    for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
    {
      m_environment.push_back(environmentJsonList[environmentIndex].AsObject());
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentFiles"))
  {
    Aws::Utils::Array<JsonView> environmentFilesJsonList = jsonValue.GetArray("EnvironmentFiles");
    for(unsigned environmentFilesIndex = 0; environmentFilesIndex < environmentFilesJsonList.GetLength(); ++environmentFilesIndex)
    {
      m_environmentFiles.push_back(environmentFilesJsonList[environmentFilesIndex].AsObject());
    }
    m_environmentFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Memory"))
  {
    m_memory = jsonValue.GetInteger("Memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemoryReservation"))
  {
    m_memoryReservation = jsonValue.GetInteger("MemoryReservation");

    m_memoryReservationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceRequirements"))
  {
    Aws::Utils::Array<JsonView> resourceRequirementsJsonList = jsonValue.GetArray("ResourceRequirements");
    for(unsigned resourceRequirementsIndex = 0; resourceRequirementsIndex < resourceRequirementsJsonList.GetLength(); ++resourceRequirementsIndex)
    {
      m_resourceRequirements.push_back(resourceRequirementsJsonList[resourceRequirementsIndex].AsObject());
    }
    m_resourceRequirementsHasBeenSet = true;
  }

  return *this;
}

JsonValue EcsContainerOverride::Jsonize() const
{
  JsonValue payload;

  if(m_commandHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("Command", std::move(commandJsonList));

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithInteger("Cpu", m_cpu);

  }

  if(m_environmentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentJsonList(m_environment.size());
   for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
   {
     environmentJsonList[environmentIndex].AsObject(m_environment[environmentIndex].Jsonize());
   }
   payload.WithArray("Environment", std::move(environmentJsonList));

  }

  if(m_environmentFilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentFilesJsonList(m_environmentFiles.size());
   for(unsigned environmentFilesIndex = 0; environmentFilesIndex < environmentFilesJsonList.GetLength(); ++environmentFilesIndex)
   {
     environmentFilesJsonList[environmentFilesIndex].AsObject(m_environmentFiles[environmentFilesIndex].Jsonize());
   }
   payload.WithArray("EnvironmentFiles", std::move(environmentFilesJsonList));

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithInteger("Memory", m_memory);

  }

  if(m_memoryReservationHasBeenSet)
  {
   payload.WithInteger("MemoryReservation", m_memoryReservation);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_resourceRequirementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceRequirementsJsonList(m_resourceRequirements.size());
   for(unsigned resourceRequirementsIndex = 0; resourceRequirementsIndex < resourceRequirementsJsonList.GetLength(); ++resourceRequirementsIndex)
   {
     resourceRequirementsJsonList[resourceRequirementsIndex].AsObject(m_resourceRequirements[resourceRequirementsIndex].Jsonize());
   }
   payload.WithArray("ResourceRequirements", std::move(resourceRequirementsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
