/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServiceDeployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

ContainerServiceDeployment::ContainerServiceDeployment() : 
    m_version(0),
    m_versionHasBeenSet(false),
    m_state(ContainerServiceDeploymentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_publicEndpointHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

ContainerServiceDeployment::ContainerServiceDeployment(JsonView jsonValue) : 
    m_version(0),
    m_versionHasBeenSet(false),
    m_state(ContainerServiceDeploymentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_publicEndpointHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerServiceDeployment& ContainerServiceDeployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInteger("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ContainerServiceDeploymentStateMapper::GetContainerServiceDeploymentStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containers"))
  {
    Aws::Map<Aws::String, JsonView> containersJsonMap = jsonValue.GetObject("containers").GetAllObjects();
    for(auto& containersItem : containersJsonMap)
    {
      m_containers[containersItem.first] = containersItem.second.AsObject();
    }
    m_containersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicEndpoint"))
  {
    m_publicEndpoint = jsonValue.GetObject("publicEndpoint");

    m_publicEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerServiceDeployment::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("version", m_version);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ContainerServiceDeploymentStateMapper::GetNameForContainerServiceDeploymentState(m_state));
  }

  if(m_containersHasBeenSet)
  {
   JsonValue containersJsonMap;
   for(auto& containersItem : m_containers)
   {
     containersJsonMap.WithObject(containersItem.first, containersItem.second.Jsonize());
   }
   payload.WithObject("containers", std::move(containersJsonMap));

  }

  if(m_publicEndpointHasBeenSet)
  {
   payload.WithObject("publicEndpoint", m_publicEndpoint.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
