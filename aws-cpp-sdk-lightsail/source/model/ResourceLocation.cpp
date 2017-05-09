/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ResourceLocation::ResourceLocation(const JsonValue& jsonValue) : 
    m_availabilityZoneHasBeenSet(false),
    m_regionName(RegionName::NOT_SET),
    m_regionNameHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceLocation& ResourceLocation::operator =(const JsonValue& jsonValue)
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