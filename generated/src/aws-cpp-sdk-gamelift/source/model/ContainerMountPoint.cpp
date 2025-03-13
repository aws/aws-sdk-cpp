/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerMountPoint.h>
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

ContainerMountPoint::ContainerMountPoint(JsonView jsonValue)
{
  *this = jsonValue;
}

ContainerMountPoint& ContainerMountPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstancePath"))
  {
    m_instancePath = jsonValue.GetString("InstancePath");
    m_instancePathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContainerPath"))
  {
    m_containerPath = jsonValue.GetString("ContainerPath");
    m_containerPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccessLevel"))
  {
    m_accessLevel = ContainerMountPointAccessLevelMapper::GetContainerMountPointAccessLevelForName(jsonValue.GetString("AccessLevel"));
    m_accessLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerMountPoint::Jsonize() const
{
  JsonValue payload;

  if(m_instancePathHasBeenSet)
  {
   payload.WithString("InstancePath", m_instancePath);

  }

  if(m_containerPathHasBeenSet)
  {
   payload.WithString("ContainerPath", m_containerPath);

  }

  if(m_accessLevelHasBeenSet)
  {
   payload.WithString("AccessLevel", ContainerMountPointAccessLevelMapper::GetNameForContainerMountPointAccessLevel(m_accessLevel));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
