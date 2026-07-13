/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-places/model/CrossReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {

CrossReference::CrossReference(JsonView jsonValue) { *this = jsonValue; }

CrossReference& CrossReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetString("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourcePlaceId")) {
    m_sourcePlaceId = jsonValue.GetString("SourcePlaceId");
    m_sourcePlaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceCategories")) {
    Aws::Utils::Array<JsonView> sourceCategoriesJsonList = jsonValue.GetArray("SourceCategories");
    for (unsigned sourceCategoriesIndex = 0; sourceCategoriesIndex < sourceCategoriesJsonList.GetLength(); ++sourceCategoriesIndex) {
      m_sourceCategories.push_back(sourceCategoriesJsonList[sourceCategoriesIndex].AsObject());
    }
    m_sourceCategoriesHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossReference::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithString("Source", m_source);
  }

  if (m_sourcePlaceIdHasBeenSet) {
    payload.WithString("SourcePlaceId", m_sourcePlaceId);
  }

  if (m_sourceCategoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceCategoriesJsonList(m_sourceCategories.size());
    for (unsigned sourceCategoriesIndex = 0; sourceCategoriesIndex < sourceCategoriesJsonList.GetLength(); ++sourceCategoriesIndex) {
      sourceCategoriesJsonList[sourceCategoriesIndex].AsObject(m_sourceCategories[sourceCategoriesIndex].Jsonize());
    }
    payload.WithArray("SourceCategories", std::move(sourceCategoriesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
