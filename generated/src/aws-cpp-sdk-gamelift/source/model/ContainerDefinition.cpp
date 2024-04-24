/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

ContainerDefinition::ContainerDefinition() : 
    m_containerNameHasBeenSet(false),
    m_imageUriHasBeenSet(false),
    m_resolvedImageDigestHasBeenSet(false),
    m_memoryLimitsHasBeenSet(false),
    m_portConfigurationHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_essential(false),
    m_essentialHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_dependsOnHasBeenSet(false)
{
}

ContainerDefinition::ContainerDefinition(JsonView jsonValue) : 
    m_containerNameHasBeenSet(false),
    m_imageUriHasBeenSet(false),
    m_resolvedImageDigestHasBeenSet(false),
    m_memoryLimitsHasBeenSet(false),
    m_portConfigurationHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_essential(false),
    m_essentialHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_dependsOnHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerDefinition& ContainerDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerName"))
  {
    m_containerName = jsonValue.GetString("ContainerName");

    m_containerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageUri"))
  {
    m_imageUri = jsonValue.GetString("ImageUri");

    m_imageUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResolvedImageDigest"))
  {
    m_resolvedImageDigest = jsonValue.GetString("ResolvedImageDigest");

    m_resolvedImageDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemoryLimits"))
  {
    m_memoryLimits = jsonValue.GetObject("MemoryLimits");

    m_memoryLimitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortConfiguration"))
  {
    m_portConfiguration = jsonValue.GetObject("PortConfiguration");

    m_portConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cpu"))
  {
    m_cpu = jsonValue.GetInteger("Cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheck"))
  {
    m_healthCheck = jsonValue.GetObject("HealthCheck");

    m_healthCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Command"))
  {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("Command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Essential"))
  {
    m_essential = jsonValue.GetBool("Essential");

    m_essentialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntryPoint"))
  {
    Aws::Utils::Array<JsonView> entryPointJsonList = jsonValue.GetArray("EntryPoint");
    for(unsigned entryPointIndex = 0; entryPointIndex < entryPointJsonList.GetLength(); ++entryPointIndex)
    {
      m_entryPoint.push_back(entryPointJsonList[entryPointIndex].AsString());
    }
    m_entryPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkingDirectory"))
  {
    m_workingDirectory = jsonValue.GetString("WorkingDirectory");

    m_workingDirectoryHasBeenSet = true;
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

  if(jsonValue.ValueExists("DependsOn"))
  {
    Aws::Utils::Array<JsonView> dependsOnJsonList = jsonValue.GetArray("DependsOn");
    for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
    {
      m_dependsOn.push_back(dependsOnJsonList[dependsOnIndex].AsObject());
    }
    m_dependsOnHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("ContainerName", m_containerName);

  }

  if(m_imageUriHasBeenSet)
  {
   payload.WithString("ImageUri", m_imageUri);

  }

  if(m_resolvedImageDigestHasBeenSet)
  {
   payload.WithString("ResolvedImageDigest", m_resolvedImageDigest);

  }

  if(m_memoryLimitsHasBeenSet)
  {
   payload.WithObject("MemoryLimits", m_memoryLimits.Jsonize());

  }

  if(m_portConfigurationHasBeenSet)
  {
   payload.WithObject("PortConfiguration", m_portConfiguration.Jsonize());

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithInteger("Cpu", m_cpu);

  }

  if(m_healthCheckHasBeenSet)
  {
   payload.WithObject("HealthCheck", m_healthCheck.Jsonize());

  }

  if(m_commandHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("Command", std::move(commandJsonList));

  }

  if(m_essentialHasBeenSet)
  {
   payload.WithBool("Essential", m_essential);

  }

  if(m_entryPointHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entryPointJsonList(m_entryPoint.size());
   for(unsigned entryPointIndex = 0; entryPointIndex < entryPointJsonList.GetLength(); ++entryPointIndex)
   {
     entryPointJsonList[entryPointIndex].AsString(m_entryPoint[entryPointIndex]);
   }
   payload.WithArray("EntryPoint", std::move(entryPointJsonList));

  }

  if(m_workingDirectoryHasBeenSet)
  {
   payload.WithString("WorkingDirectory", m_workingDirectory);

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

  if(m_dependsOnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
   for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
   {
     dependsOnJsonList[dependsOnIndex].AsObject(m_dependsOn[dependsOnIndex].Jsonize());
   }
   payload.WithArray("DependsOn", std::move(dependsOnJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
