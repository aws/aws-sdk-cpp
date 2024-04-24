/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerGroupsPerInstance.h>
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

ContainerGroupsPerInstance::ContainerGroupsPerInstance() : 
    m_desiredReplicaContainerGroupsPerInstance(0),
    m_desiredReplicaContainerGroupsPerInstanceHasBeenSet(false),
    m_maxReplicaContainerGroupsPerInstance(0),
    m_maxReplicaContainerGroupsPerInstanceHasBeenSet(false)
{
}

ContainerGroupsPerInstance::ContainerGroupsPerInstance(JsonView jsonValue) : 
    m_desiredReplicaContainerGroupsPerInstance(0),
    m_desiredReplicaContainerGroupsPerInstanceHasBeenSet(false),
    m_maxReplicaContainerGroupsPerInstance(0),
    m_maxReplicaContainerGroupsPerInstanceHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerGroupsPerInstance& ContainerGroupsPerInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DesiredReplicaContainerGroupsPerInstance"))
  {
    m_desiredReplicaContainerGroupsPerInstance = jsonValue.GetInteger("DesiredReplicaContainerGroupsPerInstance");

    m_desiredReplicaContainerGroupsPerInstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxReplicaContainerGroupsPerInstance"))
  {
    m_maxReplicaContainerGroupsPerInstance = jsonValue.GetInteger("MaxReplicaContainerGroupsPerInstance");

    m_maxReplicaContainerGroupsPerInstanceHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerGroupsPerInstance::Jsonize() const
{
  JsonValue payload;

  if(m_desiredReplicaContainerGroupsPerInstanceHasBeenSet)
  {
   payload.WithInteger("DesiredReplicaContainerGroupsPerInstance", m_desiredReplicaContainerGroupsPerInstance);

  }

  if(m_maxReplicaContainerGroupsPerInstanceHasBeenSet)
  {
   payload.WithInteger("MaxReplicaContainerGroupsPerInstance", m_maxReplicaContainerGroupsPerInstance);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
