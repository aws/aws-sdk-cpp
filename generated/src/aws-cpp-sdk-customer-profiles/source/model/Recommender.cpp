/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/Recommender.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

Recommender::Recommender(JsonView jsonValue) { *this = jsonValue; }

Recommender& Recommender::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Filters")) {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("Filters");
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PromotionalFilters")) {
    Aws::Utils::Array<JsonView> promotionalFiltersJsonList = jsonValue.GetArray("PromotionalFilters");
    for (unsigned promotionalFiltersIndex = 0; promotionalFiltersIndex < promotionalFiltersJsonList.GetLength();
         ++promotionalFiltersIndex) {
      m_promotionalFilters.push_back(promotionalFiltersJsonList[promotionalFiltersIndex].AsObject());
    }
    m_promotionalFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue Recommender::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("Filters", std::move(filtersJsonList));
  }

  if (m_promotionalFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> promotionalFiltersJsonList(m_promotionalFilters.size());
    for (unsigned promotionalFiltersIndex = 0; promotionalFiltersIndex < promotionalFiltersJsonList.GetLength();
         ++promotionalFiltersIndex) {
      promotionalFiltersJsonList[promotionalFiltersIndex].AsObject(m_promotionalFilters[promotionalFiltersIndex].Jsonize());
    }
    payload.WithArray("PromotionalFilters", std::move(promotionalFiltersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
