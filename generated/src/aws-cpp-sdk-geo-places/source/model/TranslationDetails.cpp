/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-places/model/TranslationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {

TranslationDetails::TranslationDetails(JsonView jsonValue) { *this = jsonValue; }

TranslationDetails& TranslationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Locality")) {
    Aws::Utils::Array<JsonView> localityJsonList = jsonValue.GetArray("Locality");
    for (unsigned localityIndex = 0; localityIndex < localityJsonList.GetLength(); ++localityIndex) {
      m_locality.push_back(localityJsonList[localityIndex].AsObject());
    }
    m_localityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    Aws::Utils::Array<JsonView> regionJsonList = jsonValue.GetArray("Region");
    for (unsigned regionIndex = 0; regionIndex < regionJsonList.GetLength(); ++regionIndex) {
      m_region.push_back(regionJsonList[regionIndex].AsObject());
    }
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("District")) {
    Aws::Utils::Array<JsonView> districtJsonList = jsonValue.GetArray("District");
    for (unsigned districtIndex = 0; districtIndex < districtJsonList.GetLength(); ++districtIndex) {
      m_district.push_back(districtJsonList[districtIndex].AsObject());
    }
    m_districtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubRegion")) {
    Aws::Utils::Array<JsonView> subRegionJsonList = jsonValue.GetArray("SubRegion");
    for (unsigned subRegionIndex = 0; subRegionIndex < subRegionJsonList.GetLength(); ++subRegionIndex) {
      m_subRegion.push_back(subRegionJsonList[subRegionIndex].AsObject());
    }
    m_subRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue TranslationDetails::Jsonize() const {
  JsonValue payload;

  if (m_localityHasBeenSet) {
    Aws::Utils::Array<JsonValue> localityJsonList(m_locality.size());
    for (unsigned localityIndex = 0; localityIndex < localityJsonList.GetLength(); ++localityIndex) {
      localityJsonList[localityIndex].AsObject(m_locality[localityIndex].Jsonize());
    }
    payload.WithArray("Locality", std::move(localityJsonList));
  }

  if (m_regionHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionJsonList(m_region.size());
    for (unsigned regionIndex = 0; regionIndex < regionJsonList.GetLength(); ++regionIndex) {
      regionJsonList[regionIndex].AsObject(m_region[regionIndex].Jsonize());
    }
    payload.WithArray("Region", std::move(regionJsonList));
  }

  if (m_districtHasBeenSet) {
    Aws::Utils::Array<JsonValue> districtJsonList(m_district.size());
    for (unsigned districtIndex = 0; districtIndex < districtJsonList.GetLength(); ++districtIndex) {
      districtJsonList[districtIndex].AsObject(m_district[districtIndex].Jsonize());
    }
    payload.WithArray("District", std::move(districtJsonList));
  }

  if (m_subRegionHasBeenSet) {
    Aws::Utils::Array<JsonValue> subRegionJsonList(m_subRegion.size());
    for (unsigned subRegionIndex = 0; subRegionIndex < subRegionJsonList.GetLength(); ++subRegionIndex) {
      subRegionJsonList[subRegionIndex].AsObject(m_subRegion[subRegionIndex].Jsonize());
    }
    payload.WithArray("SubRegion", std::move(subRegionJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
