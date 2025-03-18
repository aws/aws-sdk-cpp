/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/AddressComponentPhonemes.h>
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

AddressComponentPhonemes::AddressComponentPhonemes(JsonView jsonValue)
{
  *this = jsonValue;
}

AddressComponentPhonemes& AddressComponentPhonemes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Country"))
  {
    Aws::Utils::Array<JsonView> countryJsonList = jsonValue.GetArray("Country");
    for(unsigned countryIndex = 0; countryIndex < countryJsonList.GetLength(); ++countryIndex)
    {
      m_country.push_back(countryJsonList[countryIndex].AsObject());
    }
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    Aws::Utils::Array<JsonView> regionJsonList = jsonValue.GetArray("Region");
    for(unsigned regionIndex = 0; regionIndex < regionJsonList.GetLength(); ++regionIndex)
    {
      m_region.push_back(regionJsonList[regionIndex].AsObject());
    }
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubRegion"))
  {
    Aws::Utils::Array<JsonView> subRegionJsonList = jsonValue.GetArray("SubRegion");
    for(unsigned subRegionIndex = 0; subRegionIndex < subRegionJsonList.GetLength(); ++subRegionIndex)
    {
      m_subRegion.push_back(subRegionJsonList[subRegionIndex].AsObject());
    }
    m_subRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Locality"))
  {
    Aws::Utils::Array<JsonView> localityJsonList = jsonValue.GetArray("Locality");
    for(unsigned localityIndex = 0; localityIndex < localityJsonList.GetLength(); ++localityIndex)
    {
      m_locality.push_back(localityJsonList[localityIndex].AsObject());
    }
    m_localityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("District"))
  {
    Aws::Utils::Array<JsonView> districtJsonList = jsonValue.GetArray("District");
    for(unsigned districtIndex = 0; districtIndex < districtJsonList.GetLength(); ++districtIndex)
    {
      m_district.push_back(districtJsonList[districtIndex].AsObject());
    }
    m_districtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubDistrict"))
  {
    Aws::Utils::Array<JsonView> subDistrictJsonList = jsonValue.GetArray("SubDistrict");
    for(unsigned subDistrictIndex = 0; subDistrictIndex < subDistrictJsonList.GetLength(); ++subDistrictIndex)
    {
      m_subDistrict.push_back(subDistrictJsonList[subDistrictIndex].AsObject());
    }
    m_subDistrictHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Block"))
  {
    Aws::Utils::Array<JsonView> blockJsonList = jsonValue.GetArray("Block");
    for(unsigned blockIndex = 0; blockIndex < blockJsonList.GetLength(); ++blockIndex)
    {
      m_block.push_back(blockJsonList[blockIndex].AsObject());
    }
    m_blockHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubBlock"))
  {
    Aws::Utils::Array<JsonView> subBlockJsonList = jsonValue.GetArray("SubBlock");
    for(unsigned subBlockIndex = 0; subBlockIndex < subBlockJsonList.GetLength(); ++subBlockIndex)
    {
      m_subBlock.push_back(subBlockJsonList[subBlockIndex].AsObject());
    }
    m_subBlockHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Street"))
  {
    Aws::Utils::Array<JsonView> streetJsonList = jsonValue.GetArray("Street");
    for(unsigned streetIndex = 0; streetIndex < streetJsonList.GetLength(); ++streetIndex)
    {
      m_street.push_back(streetJsonList[streetIndex].AsObject());
    }
    m_streetHasBeenSet = true;
  }
  return *this;
}

JsonValue AddressComponentPhonemes::Jsonize() const
{
  JsonValue payload;

  if(m_countryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> countryJsonList(m_country.size());
   for(unsigned countryIndex = 0; countryIndex < countryJsonList.GetLength(); ++countryIndex)
   {
     countryJsonList[countryIndex].AsObject(m_country[countryIndex].Jsonize());
   }
   payload.WithArray("Country", std::move(countryJsonList));

  }

  if(m_regionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionJsonList(m_region.size());
   for(unsigned regionIndex = 0; regionIndex < regionJsonList.GetLength(); ++regionIndex)
   {
     regionJsonList[regionIndex].AsObject(m_region[regionIndex].Jsonize());
   }
   payload.WithArray("Region", std::move(regionJsonList));

  }

  if(m_subRegionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subRegionJsonList(m_subRegion.size());
   for(unsigned subRegionIndex = 0; subRegionIndex < subRegionJsonList.GetLength(); ++subRegionIndex)
   {
     subRegionJsonList[subRegionIndex].AsObject(m_subRegion[subRegionIndex].Jsonize());
   }
   payload.WithArray("SubRegion", std::move(subRegionJsonList));

  }

  if(m_localityHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> localityJsonList(m_locality.size());
   for(unsigned localityIndex = 0; localityIndex < localityJsonList.GetLength(); ++localityIndex)
   {
     localityJsonList[localityIndex].AsObject(m_locality[localityIndex].Jsonize());
   }
   payload.WithArray("Locality", std::move(localityJsonList));

  }

  if(m_districtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> districtJsonList(m_district.size());
   for(unsigned districtIndex = 0; districtIndex < districtJsonList.GetLength(); ++districtIndex)
   {
     districtJsonList[districtIndex].AsObject(m_district[districtIndex].Jsonize());
   }
   payload.WithArray("District", std::move(districtJsonList));

  }

  if(m_subDistrictHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subDistrictJsonList(m_subDistrict.size());
   for(unsigned subDistrictIndex = 0; subDistrictIndex < subDistrictJsonList.GetLength(); ++subDistrictIndex)
   {
     subDistrictJsonList[subDistrictIndex].AsObject(m_subDistrict[subDistrictIndex].Jsonize());
   }
   payload.WithArray("SubDistrict", std::move(subDistrictJsonList));

  }

  if(m_blockHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockJsonList(m_block.size());
   for(unsigned blockIndex = 0; blockIndex < blockJsonList.GetLength(); ++blockIndex)
   {
     blockJsonList[blockIndex].AsObject(m_block[blockIndex].Jsonize());
   }
   payload.WithArray("Block", std::move(blockJsonList));

  }

  if(m_subBlockHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subBlockJsonList(m_subBlock.size());
   for(unsigned subBlockIndex = 0; subBlockIndex < subBlockJsonList.GetLength(); ++subBlockIndex)
   {
     subBlockJsonList[subBlockIndex].AsObject(m_subBlock[subBlockIndex].Jsonize());
   }
   payload.WithArray("SubBlock", std::move(subBlockJsonList));

  }

  if(m_streetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> streetJsonList(m_street.size());
   for(unsigned streetIndex = 0; streetIndex < streetJsonList.GetLength(); ++streetIndex)
   {
     streetJsonList[streetIndex].AsObject(m_street[streetIndex].Jsonize());
   }
   payload.WithArray("Street", std::move(streetJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
