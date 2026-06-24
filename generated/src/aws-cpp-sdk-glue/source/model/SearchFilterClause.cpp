/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/SearchFilterClause.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

SearchFilterClause::SearchFilterClause(JsonView jsonValue) { *this = jsonValue; }

SearchFilterClause& SearchFilterClause::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AndAllFilters")) {
    Aws::Utils::Array<JsonView> andAllFiltersJsonList = jsonValue.GetArray("AndAllFilters");
    for (unsigned andAllFiltersIndex = 0; andAllFiltersIndex < andAllFiltersJsonList.GetLength(); ++andAllFiltersIndex) {
      m_andAllFilters.push_back(andAllFiltersJsonList[andAllFiltersIndex].AsObject());
    }
    m_andAllFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OrAnyFilters")) {
    Aws::Utils::Array<JsonView> orAnyFiltersJsonList = jsonValue.GetArray("OrAnyFilters");
    for (unsigned orAnyFiltersIndex = 0; orAnyFiltersIndex < orAnyFiltersJsonList.GetLength(); ++orAnyFiltersIndex) {
      m_orAnyFilters.push_back(orAnyFiltersJsonList[orAnyFiltersIndex].AsObject());
    }
    m_orAnyFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttributeFilter")) {
    m_attributeFilter = jsonValue.GetObject("AttributeFilter");
    m_attributeFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MapFilter")) {
    m_mapFilter = jsonValue.GetObject("MapFilter");
    m_mapFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchFilterClause::Jsonize() const {
  JsonValue payload;

  if (m_andAllFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> andAllFiltersJsonList(m_andAllFilters.size());
    for (unsigned andAllFiltersIndex = 0; andAllFiltersIndex < andAllFiltersJsonList.GetLength(); ++andAllFiltersIndex) {
      andAllFiltersJsonList[andAllFiltersIndex].AsObject(m_andAllFilters[andAllFiltersIndex].Jsonize());
    }
    payload.WithArray("AndAllFilters", std::move(andAllFiltersJsonList));
  }

  if (m_orAnyFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> orAnyFiltersJsonList(m_orAnyFilters.size());
    for (unsigned orAnyFiltersIndex = 0; orAnyFiltersIndex < orAnyFiltersJsonList.GetLength(); ++orAnyFiltersIndex) {
      orAnyFiltersJsonList[orAnyFiltersIndex].AsObject(m_orAnyFilters[orAnyFiltersIndex].Jsonize());
    }
    payload.WithArray("OrAnyFilters", std::move(orAnyFiltersJsonList));
  }

  if (m_attributeFilterHasBeenSet) {
    payload.WithObject("AttributeFilter", m_attributeFilter.Jsonize());
  }

  if (m_mapFilterHasBeenSet) {
    payload.WithObject("MapFilter", m_mapFilter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
