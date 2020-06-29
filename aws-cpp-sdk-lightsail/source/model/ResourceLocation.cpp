/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ResourceLocation.h>
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

ResourceLocation::ResourceLocation() : 
    m_availabilityZoneHasBeenSet(false),
    m_regionName(RegionName::NOT_SET),
    m_regionNameHasBeenSet(false)
{
}

ResourceLocation::ResourceLocation(JsonView jsonValue) : 
    m_availabilityZoneHasBeenSet(false),
    m_regionName(RegionName::NOT_SET),
    m_regionNameHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceLocation& ResourceLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regionName"))
  {
    m_regionName = RegionNameMapper::GetRegionNameForName(jsonValue.GetString("regionName"));

    m_regionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceLocation::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("regionName", RegionNameMapper::GetNameForRegionName(m_regionName));
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
