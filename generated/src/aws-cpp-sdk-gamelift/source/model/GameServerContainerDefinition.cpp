/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerContainerDefinition.h>
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

GameServerContainerDefinition::GameServerContainerDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

GameServerContainerDefinition& GameServerContainerDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerName"))
  {
    m_containerName = jsonValue.GetString("ContainerName");
    m_containerNameHasBeenSet = true;
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
  if(jsonValue.ValueExists("MountPoints"))
  {
    Aws::Utils::Array<JsonView> mountPointsJsonList = jsonValue.GetArray("MountPoints");
    for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
    {
      m_mountPoints.push_back(mountPointsJsonList[mountPointsIndex].AsObject());
    }
    m_mountPointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnvironmentOverride"))
  {
    Aws::Utils::Array<JsonView> environmentOverrideJsonList = jsonValue.GetArray("EnvironmentOverride");
    for(unsigned environmentOverrideIndex = 0; environmentOverrideIndex < environmentOverrideJsonList.GetLength(); ++environmentOverrideIndex)
    {
      m_environmentOverride.push_back(environmentOverrideJsonList[environmentOverrideIndex].AsObject());
    }
    m_environmentOverrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageUri"))
  {
    m_imageUri = jsonValue.GetString("ImageUri");
    m_imageUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PortConfiguration"))
  {
    m_portConfiguration = jsonValue.GetObject("PortConfiguration");
    m_portConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResolvedImageDigest"))
  {
    m_resolvedImageDigest = jsonValue.GetString("ResolvedImageDigest");
    m_resolvedImageDigestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerSdkVersion"))
  {
    m_serverSdkVersion = jsonValue.GetString("ServerSdkVersion");
    m_serverSdkVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue GameServerContainerDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("ContainerName", m_containerName);

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

  if(m_mountPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mountPointsJsonList(m_mountPoints.size());
   for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
   {
     mountPointsJsonList[mountPointsIndex].AsObject(m_mountPoints[mountPointsIndex].Jsonize());
   }
   payload.WithArray("MountPoints", std::move(mountPointsJsonList));

  }

  if(m_environmentOverrideHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentOverrideJsonList(m_environmentOverride.size());
   for(unsigned environmentOverrideIndex = 0; environmentOverrideIndex < environmentOverrideJsonList.GetLength(); ++environmentOverrideIndex)
   {
     environmentOverrideJsonList[environmentOverrideIndex].AsObject(m_environmentOverride[environmentOverrideIndex].Jsonize());
   }
   payload.WithArray("EnvironmentOverride", std::move(environmentOverrideJsonList));

  }

  if(m_imageUriHasBeenSet)
  {
   payload.WithString("ImageUri", m_imageUri);

  }

  if(m_portConfigurationHasBeenSet)
  {
   payload.WithObject("PortConfiguration", m_portConfiguration.Jsonize());

  }

  if(m_resolvedImageDigestHasBeenSet)
  {
   payload.WithString("ResolvedImageDigest", m_resolvedImageDigest);

  }

  if(m_serverSdkVersionHasBeenSet)
  {
   payload.WithString("ServerSdkVersion", m_serverSdkVersion);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
