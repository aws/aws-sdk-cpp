/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/RecommenderFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

RecommenderFilter::RecommenderFilter(JsonView jsonValue) { *this = jsonValue; }

RecommenderFilter& RecommenderFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Values")) {
    Aws::Map<Aws::String, JsonView> valuesJsonMap = jsonValue.GetObject("Values").GetAllObjects();
    for (auto& valuesItem : valuesJsonMap) {
      m_values[valuesItem.first] = valuesItem.second.AsString();
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommenderFilter::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_valuesHasBeenSet) {
    JsonValue valuesJsonMap;
    for (auto& valuesItem : m_values) {
      valuesJsonMap.WithString(valuesItem.first, valuesItem.second);
    }
    payload.WithObject("Values", std::move(valuesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
