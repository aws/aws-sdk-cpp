/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/AutocompleteAddressHighlights.h>
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

AutocompleteAddressHighlights::AutocompleteAddressHighlights(JsonView jsonValue)
{
  *this = jsonValue;
}

AutocompleteAddressHighlights& AutocompleteAddressHighlights::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Label"))
  {
    Aws::Utils::Array<JsonView> labelJsonList = jsonValue.GetArray("Label");
    for(unsigned labelIndex = 0; labelIndex < labelJsonList.GetLength(); ++labelIndex)
    {
      m_label.push_back(labelJsonList[labelIndex].AsObject());
    }
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
  if(jsonValue.ValueExists("Street"))
  {
    Aws::Utils::Array<JsonView> streetJsonList = jsonValue.GetArray("Street");
    for(unsigned streetIndex = 0; streetIndex < streetJsonList.GetLength(); ++streetIndex)
    {
      m_street.push_back(streetJsonList[streetIndex].AsObject());
    }
    m_streetHasBeenSet = true;
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
  if(jsonValue.ValueExists("Intersection"))
  {
    Aws::Utils::Array<JsonView> intersectionJsonList = jsonValue.GetArray("Intersection");
    for(unsigned intersectionIndex = 0; intersectionIndex < intersectionJsonList.GetLength(); ++intersectionIndex)
    {
      Aws::Utils::Array<JsonView> highlightListJsonList = intersectionJsonList[intersectionIndex].AsArray();
      Aws::Vector<Highlight> highlightListList;
      highlightListList.reserve((size_t)highlightListJsonList.GetLength());
      for(unsigned highlightListIndex = 0; highlightListIndex < highlightListJsonList.GetLength(); ++highlightListIndex)
      {
        highlightListList.push_back(highlightListJsonList[highlightListIndex].AsObject());
      }
      m_intersection.push_back(std::move(highlightListList));
    }
    m_intersectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostalCode"))
  {
    Aws::Utils::Array<JsonView> postalCodeJsonList = jsonValue.GetArray("PostalCode");
    for(unsigned postalCodeIndex = 0; postalCodeIndex < postalCodeJsonList.GetLength(); ++postalCodeIndex)
    {
      m_postalCode.push_back(postalCodeJsonList[postalCodeIndex].AsObject());
    }
    m_postalCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddressNumber"))
  {
    Aws::Utils::Array<JsonView> addressNumberJsonList = jsonValue.GetArray("AddressNumber");
    for(unsigned addressNumberIndex = 0; addressNumberIndex < addressNumberJsonList.GetLength(); ++addressNumberIndex)
    {
      m_addressNumber.push_back(addressNumberJsonList[addressNumberIndex].AsObject());
    }
    m_addressNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Building"))
  {
    Aws::Utils::Array<JsonView> buildingJsonList = jsonValue.GetArray("Building");
    for(unsigned buildingIndex = 0; buildingIndex < buildingJsonList.GetLength(); ++buildingIndex)
    {
      m_building.push_back(buildingJsonList[buildingIndex].AsObject());
    }
    m_buildingHasBeenSet = true;
  }
  return *this;
}

JsonValue AutocompleteAddressHighlights::Jsonize() const
{
  JsonValue payload;

  if(m_labelHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelJsonList(m_label.size());
   for(unsigned labelIndex = 0; labelIndex < labelJsonList.GetLength(); ++labelIndex)
   {
     labelJsonList[labelIndex].AsObject(m_label[labelIndex].Jsonize());
   }
   payload.WithArray("Label", std::move(labelJsonList));

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

  if(m_streetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> streetJsonList(m_street.size());
   for(unsigned streetIndex = 0; streetIndex < streetJsonList.GetLength(); ++streetIndex)
   {
     streetJsonList[streetIndex].AsObject(m_street[streetIndex].Jsonize());
   }
   payload.WithArray("Street", std::move(streetJsonList));

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

  if(m_intersectionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> intersectionJsonList(m_intersection.size());
   for(unsigned intersectionIndex = 0; intersectionIndex < intersectionJsonList.GetLength(); ++intersectionIndex)
   {
     Aws::Utils::Array<JsonValue> highlightListJsonList(m_intersection[intersectionIndex].size());
     for(unsigned highlightListIndex = 0; highlightListIndex < highlightListJsonList.GetLength(); ++highlightListIndex)
     {
       highlightListJsonList[highlightListIndex].AsObject(m_intersection[intersectionIndex][highlightListIndex].Jsonize());
     }
     intersectionJsonList[intersectionIndex].AsArray(std::move(highlightListJsonList));
   }
   payload.WithArray("Intersection", std::move(intersectionJsonList));

  }

  if(m_postalCodeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> postalCodeJsonList(m_postalCode.size());
   for(unsigned postalCodeIndex = 0; postalCodeIndex < postalCodeJsonList.GetLength(); ++postalCodeIndex)
   {
     postalCodeJsonList[postalCodeIndex].AsObject(m_postalCode[postalCodeIndex].Jsonize());
   }
   payload.WithArray("PostalCode", std::move(postalCodeJsonList));

  }

  if(m_addressNumberHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addressNumberJsonList(m_addressNumber.size());
   for(unsigned addressNumberIndex = 0; addressNumberIndex < addressNumberJsonList.GetLength(); ++addressNumberIndex)
   {
     addressNumberJsonList[addressNumberIndex].AsObject(m_addressNumber[addressNumberIndex].Jsonize());
   }
   payload.WithArray("AddressNumber", std::move(addressNumberJsonList));

  }

  if(m_buildingHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> buildingJsonList(m_building.size());
   for(unsigned buildingIndex = 0; buildingIndex < buildingJsonList.GetLength(); ++buildingIndex)
   {
     buildingJsonList[buildingIndex].AsObject(m_building[buildingIndex].Jsonize());
   }
   payload.WithArray("Building", std::move(buildingJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
