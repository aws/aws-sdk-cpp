/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/AttributeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

AttributeFilter::AttributeFilter(JsonView jsonValue) { *this = jsonValue; }

AttributeFilter& AttributeFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AttributeFilterName")) {
    m_attributeFilterName = jsonValue.GetString("AttributeFilterName");
    m_attributeFilterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttributeFilterValues")) {
    Aws::Utils::Array<JsonView> attributeFilterValuesJsonList = jsonValue.GetArray("AttributeFilterValues");
    for (unsigned attributeFilterValuesIndex = 0; attributeFilterValuesIndex < attributeFilterValuesJsonList.GetLength();
         ++attributeFilterValuesIndex) {
      m_attributeFilterValues.push_back(attributeFilterValuesJsonList[attributeFilterValuesIndex].AsString());
    }
    m_attributeFilterValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue AttributeFilter::Jsonize() const {
  JsonValue payload;

  if (m_attributeFilterNameHasBeenSet) {
    payload.WithString("AttributeFilterName", m_attributeFilterName);
  }

  if (m_attributeFilterValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributeFilterValuesJsonList(m_attributeFilterValues.size());
    for (unsigned attributeFilterValuesIndex = 0; attributeFilterValuesIndex < attributeFilterValuesJsonList.GetLength();
         ++attributeFilterValuesIndex) {
      attributeFilterValuesJsonList[attributeFilterValuesIndex].AsString(m_attributeFilterValues[attributeFilterValuesIndex]);
    }
    payload.WithArray("AttributeFilterValues", std::move(attributeFilterValuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
