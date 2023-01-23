/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_availabilityZonesHasBeenSet(false),
    m_relationalDatabaseAvailabilityZonesHasBeenSet(false)
{
}

Region::Region(JsonView jsonValue) : 
    m_continentCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_name(RegionName::NOT_SET),
    m_nameHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_relationalDatabaseAvailabilityZonesHasBeenSet(false)
{
  *this = jsonValue;
}

Region& Region::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("availabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsObject());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationalDatabaseAvailabilityZones"))
  {
    Aws::Utils::Array<JsonView> relationalDatabaseAvailabilityZonesJsonList = jsonValue.GetArray("relationalDatabaseAvailabilityZones");
    for(unsigned relationalDatabaseAvailabilityZonesIndex = 0; relationalDatabaseAvailabilityZonesIndex < relationalDatabaseAvailabilityZonesJsonList.GetLength(); ++relationalDatabaseAvailabilityZonesIndex)
    {
      m_relationalDatabaseAvailabilityZones.push_back(relationalDatabaseAvailabilityZonesJsonList[relationalDatabaseAvailabilityZonesIndex].AsObject());
    }
    m_relationalDatabaseAvailabilityZonesHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsObject(m_availabilityZones[availabilityZonesIndex].Jsonize());
   }
   payload.WithArray("availabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_relationalDatabaseAvailabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relationalDatabaseAvailabilityZonesJsonList(m_relationalDatabaseAvailabilityZones.size());
   for(unsigned relationalDatabaseAvailabilityZonesIndex = 0; relationalDatabaseAvailabilityZonesIndex < relationalDatabaseAvailabilityZonesJsonList.GetLength(); ++relationalDatabaseAvailabilityZonesIndex)
   {
     relationalDatabaseAvailabilityZonesJsonList[relationalDatabaseAvailabilityZonesIndex].AsObject(m_relationalDatabaseAvailabilityZones[relationalDatabaseAvailabilityZonesIndex].Jsonize());
   }
   payload.WithArray("relationalDatabaseAvailabilityZones", std::move(relationalDatabaseAvailabilityZonesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
