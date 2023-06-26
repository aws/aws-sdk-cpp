/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Container.h>
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

Container::Container() : 
    m_containerArnHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_runtimeIdHasBeenSet(false),
    m_lastStatusHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_networkBindingsHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_healthStatus(HealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_managedAgentsHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_memoryReservationHasBeenSet(false),
    m_gpuIdsHasBeenSet(false)
{
}

Container::Container(JsonView jsonValue) : 
    m_containerArnHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_runtimeIdHasBeenSet(false),
    m_lastStatusHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_networkBindingsHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_healthStatus(HealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_managedAgentsHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_memoryReservationHasBeenSet(false),
    m_gpuIdsHasBeenSet(false)
{
  *this = jsonValue;
}

Container& Container::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerArn"))
  {
    m_containerArn = jsonValue.GetString("containerArn");

    m_containerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskArn"))
  {
    m_taskArn = jsonValue.GetString("taskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageDigest"))
  {
    m_imageDigest = jsonValue.GetString("imageDigest");

    m_imageDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtimeId"))
  {
    m_runtimeId = jsonValue.GetString("runtimeId");

    m_runtimeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStatus"))
  {
    m_lastStatus = jsonValue.GetString("lastStatus");

    m_lastStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exitCode"))
  {
    m_exitCode = jsonValue.GetInteger("exitCode");

    m_exitCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkBindings"))
  {
    Aws::Utils::Array<JsonView> networkBindingsJsonList = jsonValue.GetArray("networkBindings");
    for(unsigned networkBindingsIndex = 0; networkBindingsIndex < networkBindingsJsonList.GetLength(); ++networkBindingsIndex)
    {
      m_networkBindings.push_back(networkBindingsJsonList[networkBindingsIndex].AsObject());
    }
    m_networkBindingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInterfaces"))
  {
    Aws::Utils::Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("networkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
    m_networkInterfacesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthStatus"))
  {
    m_healthStatus = HealthStatusMapper::GetHealthStatusForName(jsonValue.GetString("healthStatus"));

    m_healthStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managedAgents"))
  {
    Aws::Utils::Array<JsonView> managedAgentsJsonList = jsonValue.GetArray("managedAgents");
    for(unsigned managedAgentsIndex = 0; managedAgentsIndex < managedAgentsJsonList.GetLength(); ++managedAgentsIndex)
    {
      m_managedAgents.push_back(managedAgentsJsonList[managedAgentsIndex].AsObject());
    }
    m_managedAgentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetString("cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetString("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memoryReservation"))
  {
    m_memoryReservation = jsonValue.GetString("memoryReservation");

    m_memoryReservationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gpuIds"))
  {
    Aws::Utils::Array<JsonView> gpuIdsJsonList = jsonValue.GetArray("gpuIds");
    for(unsigned gpuIdsIndex = 0; gpuIdsIndex < gpuIdsJsonList.GetLength(); ++gpuIdsIndex)
    {
      m_gpuIds.push_back(gpuIdsJsonList[gpuIdsIndex].AsString());
    }
    m_gpuIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue Container::Jsonize() const
{
  JsonValue payload;

  if(m_containerArnHasBeenSet)
  {
   payload.WithString("containerArn", m_containerArn);

  }

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("taskArn", m_taskArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("imageDigest", m_imageDigest);

  }

  if(m_runtimeIdHasBeenSet)
  {
   payload.WithString("runtimeId", m_runtimeId);

  }

  if(m_lastStatusHasBeenSet)
  {
   payload.WithString("lastStatus", m_lastStatus);

  }

  if(m_exitCodeHasBeenSet)
  {
   payload.WithInteger("exitCode", m_exitCode);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_networkBindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkBindingsJsonList(m_networkBindings.size());
   for(unsigned networkBindingsIndex = 0; networkBindingsIndex < networkBindingsJsonList.GetLength(); ++networkBindingsIndex)
   {
     networkBindingsJsonList[networkBindingsIndex].AsObject(m_networkBindings[networkBindingsIndex].Jsonize());
   }
   payload.WithArray("networkBindings", std::move(networkBindingsJsonList));

  }

  if(m_networkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("networkInterfaces", std::move(networkInterfacesJsonList));

  }

  if(m_healthStatusHasBeenSet)
  {
   payload.WithString("healthStatus", HealthStatusMapper::GetNameForHealthStatus(m_healthStatus));
  }

  if(m_managedAgentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> managedAgentsJsonList(m_managedAgents.size());
   for(unsigned managedAgentsIndex = 0; managedAgentsIndex < managedAgentsJsonList.GetLength(); ++managedAgentsIndex)
   {
     managedAgentsJsonList[managedAgentsIndex].AsObject(m_managedAgents[managedAgentsIndex].Jsonize());
   }
   payload.WithArray("managedAgents", std::move(managedAgentsJsonList));

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithString("cpu", m_cpu);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithString("memory", m_memory);

  }

  if(m_memoryReservationHasBeenSet)
  {
   payload.WithString("memoryReservation", m_memoryReservation);

  }

  if(m_gpuIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gpuIdsJsonList(m_gpuIds.size());
   for(unsigned gpuIdsIndex = 0; gpuIdsIndex < gpuIdsJsonList.GetLength(); ++gpuIdsIndex)
   {
     gpuIdsJsonList[gpuIdsIndex].AsString(m_gpuIds[gpuIdsIndex]);
   }
   payload.WithArray("gpuIds", std::move(gpuIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
