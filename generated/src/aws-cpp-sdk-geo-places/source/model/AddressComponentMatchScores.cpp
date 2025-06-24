/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/AddressComponentMatchScores.h>
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

AddressComponentMatchScores::AddressComponentMatchScores(JsonView jsonValue)
{
  *this = jsonValue;
}

AddressComponentMatchScores& AddressComponentMatchScores::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetDouble("Country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetDouble("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubRegion"))
  {
    m_subRegion = jsonValue.GetDouble("SubRegion");
    m_subRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Locality"))
  {
    m_locality = jsonValue.GetDouble("Locality");
    m_localityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("District"))
  {
    m_district = jsonValue.GetDouble("District");
    m_districtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubDistrict"))
  {
    m_subDistrict = jsonValue.GetDouble("SubDistrict");
    m_subDistrictHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetDouble("PostalCode");
    m_postalCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Block"))
  {
    m_block = jsonValue.GetDouble("Block");
    m_blockHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubBlock"))
  {
    m_subBlock = jsonValue.GetDouble("SubBlock");
    m_subBlockHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Intersection"))
  {
    Aws::Utils::Array<JsonView> intersectionJsonList = jsonValue.GetArray("Intersection");
    for(unsigned intersectionIndex = 0; intersectionIndex < intersectionJsonList.GetLength(); ++intersectionIndex)
    {
      m_intersection.push_back(intersectionJsonList[intersectionIndex].AsDouble());
    }
    m_intersectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddressNumber"))
  {
    m_addressNumber = jsonValue.GetDouble("AddressNumber");
    m_addressNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Building"))
  {
    m_building = jsonValue.GetDouble("Building");
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

JsonValue AddressComponentMatchScores::Jsonize() const
{
  JsonValue payload;

  if(m_countryHasBeenSet)
  {
   payload.WithDouble("Country", m_country);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithDouble("Region", m_region);

  }

  if(m_subRegionHasBeenSet)
  {
   payload.WithDouble("SubRegion", m_subRegion);

  }

  if(m_localityHasBeenSet)
  {
   payload.WithDouble("Locality", m_locality);

  }

  if(m_districtHasBeenSet)
  {
   payload.WithDouble("District", m_district);

  }

  if(m_subDistrictHasBeenSet)
  {
   payload.WithDouble("SubDistrict", m_subDistrict);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithDouble("PostalCode", m_postalCode);

  }

  if(m_blockHasBeenSet)
  {
   payload.WithDouble("Block", m_block);

  }

  if(m_subBlockHasBeenSet)
  {
   payload.WithDouble("SubBlock", m_subBlock);

  }

  if(m_intersectionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> intersectionJsonList(m_intersection.size());
   for(unsigned intersectionIndex = 0; intersectionIndex < intersectionJsonList.GetLength(); ++intersectionIndex)
   {
     intersectionJsonList[intersectionIndex].AsDouble(m_intersection[intersectionIndex]);
   }
   payload.WithArray("Intersection", std::move(intersectionJsonList));

  }

  if(m_addressNumberHasBeenSet)
  {
   payload.WithDouble("AddressNumber", m_addressNumber);

  }

  if(m_buildingHasBeenSet)
  {
   payload.WithDouble("Building", m_building);

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
