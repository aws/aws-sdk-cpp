/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/Address.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

Address::Address(JsonView jsonValue)
{
  *this = jsonValue;
}

Address& Address::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetObject("Country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetObject("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubRegion"))
  {
    m_subRegion = jsonValue.GetObject("SubRegion");
    m_subRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Locality"))
  {
    m_locality = jsonValue.GetString("Locality");
    m_localityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("District"))
  {
    m_district = jsonValue.GetString("District");
    m_districtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubDistrict"))
  {
    m_subDistrict = jsonValue.GetString("SubDistrict");
    m_subDistrictHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetString("PostalCode");
    m_postalCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Block"))
  {
    m_block = jsonValue.GetString("Block");
    m_blockHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubBlock"))
  {
    m_subBlock = jsonValue.GetString("SubBlock");
    m_subBlockHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Intersection"))
  {
    Aws::Utils::Array<JsonView> intersectionJsonList = jsonValue.GetArray("Intersection");
    for(unsigned intersectionIndex = 0; intersectionIndex < intersectionJsonList.GetLength(); ++intersectionIndex)
    {
      m_intersection.push_back(intersectionJsonList[intersectionIndex].AsString());
    }
    m_intersectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Street"))
  {
    m_street = jsonValue.GetString("Street");
    m_streetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreetComponents"))
  {
    Aws::Utils::Array<JsonView> streetComponentsJsonList = jsonValue.GetArray("StreetComponents");
    for(unsigned streetComponentsIndex = 0; streetComponentsIndex < streetComponentsJsonList.GetLength(); ++streetComponentsIndex)
    {
      m_streetComponents.push_back(streetComponentsJsonList[streetComponentsIndex].AsObject());
    }
    m_streetComponentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddressNumber"))
  {
    m_addressNumber = jsonValue.GetString("AddressNumber");
    m_addressNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Building"))
  {
    m_building = jsonValue.GetString("Building");
    m_buildingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecondaryAddressComponents"))
  {
    Aws::Utils::Array<JsonView> secondaryAddressComponentsJsonList = jsonValue.GetArray("SecondaryAddressComponents");
    for(unsigned secondaryAddressComponentsIndex = 0; secondaryAddressComponentsIndex < secondaryAddressComponentsJsonList.GetLength(); ++secondaryAddressComponentsIndex)
    {
      m_secondaryAddressComponents.push_back(secondaryAddressComponentsJsonList[secondaryAddressComponentsIndex].AsObject());
    }
    m_secondaryAddressComponentsHasBeenSet = true;
  }
  return *this;
}

JsonValue Address::Jsonize() const
{
  JsonValue payload;

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithObject("Country", m_country.Jsonize());

  }

  if(m_regionHasBeenSet)
  {
   payload.WithObject("Region", m_region.Jsonize());

  }

  if(m_subRegionHasBeenSet)
  {
   payload.WithObject("SubRegion", m_subRegion.Jsonize());

  }

  if(m_localityHasBeenSet)
  {
   payload.WithString("Locality", m_locality);

  }

  if(m_districtHasBeenSet)
  {
   payload.WithString("District", m_district);

  }

  if(m_subDistrictHasBeenSet)
  {
   payload.WithString("SubDistrict", m_subDistrict);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  if(m_blockHasBeenSet)
  {
   payload.WithString("Block", m_block);

  }

  if(m_subBlockHasBeenSet)
  {
   payload.WithString("SubBlock", m_subBlock);

  }

  if(m_intersectionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> intersectionJsonList(m_intersection.size());
   for(unsigned intersectionIndex = 0; intersectionIndex < intersectionJsonList.GetLength(); ++intersectionIndex)
   {
     intersectionJsonList[intersectionIndex].AsString(m_intersection[intersectionIndex]);
   }
   payload.WithArray("Intersection", std::move(intersectionJsonList));

  }

  if(m_streetHasBeenSet)
  {
   payload.WithString("Street", m_street);

  }

  if(m_streetComponentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> streetComponentsJsonList(m_streetComponents.size());
   for(unsigned streetComponentsIndex = 0; streetComponentsIndex < streetComponentsJsonList.GetLength(); ++streetComponentsIndex)
   {
     streetComponentsJsonList[streetComponentsIndex].AsObject(m_streetComponents[streetComponentsIndex].Jsonize());
   }
   payload.WithArray("StreetComponents", std::move(streetComponentsJsonList));

  }

  if(m_addressNumberHasBeenSet)
  {
   payload.WithString("AddressNumber", m_addressNumber);

  }

  if(m_buildingHasBeenSet)
  {
   payload.WithString("Building", m_building);

  }

  if(m_secondaryAddressComponentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secondaryAddressComponentsJsonList(m_secondaryAddressComponents.size());
   for(unsigned secondaryAddressComponentsIndex = 0; secondaryAddressComponentsIndex < secondaryAddressComponentsJsonList.GetLength(); ++secondaryAddressComponentsIndex)
   {
     secondaryAddressComponentsJsonList[secondaryAddressComponentsIndex].AsObject(m_secondaryAddressComponents[secondaryAddressComponentsIndex].Jsonize());
   }
   payload.WithArray("SecondaryAddressComponents", std::move(secondaryAddressComponentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
