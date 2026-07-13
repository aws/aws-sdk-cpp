/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ScopeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConfigService {
namespace Model {

ScopeConfiguration::ScopeConfiguration(JsonView jsonValue) { *this = jsonValue; }

ScopeConfiguration& ScopeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scopeType")) {
    m_scopeType = jsonValue.GetString("scopeType");
    m_scopeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeValues")) {
    Aws::Utils::Array<JsonView> scopeValuesJsonList = jsonValue.GetArray("scopeValues");
    for (unsigned scopeValuesIndex = 0; scopeValuesIndex < scopeValuesJsonList.GetLength(); ++scopeValuesIndex) {
      m_scopeValues.push_back(scopeValuesJsonList[scopeValuesIndex].AsString());
    }
    m_scopeValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allRegions")) {
    m_allRegions = jsonValue.GetBool("allRegions");
    m_allRegionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("includedRegions")) {
    Aws::Utils::Array<JsonView> includedRegionsJsonList = jsonValue.GetArray("includedRegions");
    for (unsigned includedRegionsIndex = 0; includedRegionsIndex < includedRegionsJsonList.GetLength(); ++includedRegionsIndex) {
      m_includedRegions.push_back(includedRegionsJsonList[includedRegionsIndex].AsString());
    }
    m_includedRegionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ScopeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_scopeTypeHasBeenSet) {
    payload.WithString("scopeType", m_scopeType);
  }

  if (m_scopeValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> scopeValuesJsonList(m_scopeValues.size());
    for (unsigned scopeValuesIndex = 0; scopeValuesIndex < scopeValuesJsonList.GetLength(); ++scopeValuesIndex) {
      scopeValuesJsonList[scopeValuesIndex].AsString(m_scopeValues[scopeValuesIndex]);
    }
    payload.WithArray("scopeValues", std::move(scopeValuesJsonList));
  }

  if (m_allRegionsHasBeenSet) {
    payload.WithBool("allRegions", m_allRegions);
  }

  if (m_includedRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> includedRegionsJsonList(m_includedRegions.size());
    for (unsigned includedRegionsIndex = 0; includedRegionsIndex < includedRegionsJsonList.GetLength(); ++includedRegionsIndex) {
      includedRegionsJsonList[includedRegionsIndex].AsString(m_includedRegions[includedRegionsIndex]);
    }
    payload.WithArray("includedRegions", std::move(includedRegionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
