/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/PlacementGroupConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

PlacementGroupConfig::PlacementGroupConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

PlacementGroupConfig& PlacementGroupConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceRole"))
  {
    m_instanceRole = InstanceRoleTypeMapper::GetInstanceRoleTypeForName(jsonValue.GetString("InstanceRole"));
    m_instanceRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlacementStrategy"))
  {
    m_placementStrategy = PlacementGroupStrategyMapper::GetPlacementGroupStrategyForName(jsonValue.GetString("PlacementStrategy"));
    m_placementStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue PlacementGroupConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceRoleHasBeenSet)
  {
   payload.WithString("InstanceRole", InstanceRoleTypeMapper::GetNameForInstanceRoleType(m_instanceRole));
  }

  if(m_placementStrategyHasBeenSet)
  {
   payload.WithString("PlacementStrategy", PlacementGroupStrategyMapper::GetNameForPlacementGroupStrategy(m_placementStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
