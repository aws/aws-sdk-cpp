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

#include <aws/lightsail/model/Region.h>
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

Region::Region() : 
    m_continentCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_name(RegionName::NOT_SET),
    m_nameHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false)
{
}

Region::Region(const JsonValue& jsonValue) : 
    m_continentCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_name(RegionName::NOT_SET),
    m_nameHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false)
{
  *this = jsonValue;
}

Region& Region::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("continentCode"))
  {
    m_continentCode = jsonValue.GetString("continentCode");

    m_continentCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = RegionNameMapper::GetRegionNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZones"))
  {
    Array<JsonValue> availabilityZonesJsonList = jsonValue.GetArray("availabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsObject());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  return *this;
}

JsonValue Region::Jsonize() const
{
  JsonValue payload;

  if(m_continentCodeHasBeenSet)
  {
   payload.WithString("continentCode", m_continentCode);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", RegionNameMapper::GetNameForRegionName(m_name));
  }

  if(m_availabilityZonesHasBeenSet)
  {
   Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsObject(m_availabilityZones[availabilityZonesIndex].Jsonize());
   }
   payload.WithArray("availabilityZones", std::move(availabilityZonesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws