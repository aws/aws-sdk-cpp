/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConnectorFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConfigService {
namespace Model {

ConnectorFilter::ConnectorFilter(JsonView jsonValue) { *this = jsonValue; }

ConnectorFilter& ConnectorFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("filterName")) {
    m_filterName = ConnectorFilterNameMapper::GetConnectorFilterNameForName(jsonValue.GetString("filterName"));
    m_filterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filterValues")) {
    Aws::Utils::Array<JsonView> filterValuesJsonList = jsonValue.GetArray("filterValues");
    for (unsigned filterValuesIndex = 0; filterValuesIndex < filterValuesJsonList.GetLength(); ++filterValuesIndex) {
      m_filterValues.push_back(filterValuesJsonList[filterValuesIndex].AsString());
    }
    m_filterValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorFilter::Jsonize() const {
  JsonValue payload;

  if (m_filterNameHasBeenSet) {
    payload.WithString("filterName", ConnectorFilterNameMapper::GetNameForConnectorFilterName(m_filterName));
  }

  if (m_filterValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> filterValuesJsonList(m_filterValues.size());
    for (unsigned filterValuesIndex = 0; filterValuesIndex < filterValuesJsonList.GetLength(); ++filterValuesIndex) {
      filterValuesJsonList[filterValuesIndex].AsString(m_filterValues[filterValuesIndex]);
    }
    payload.WithArray("filterValues", std::move(filterValuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
