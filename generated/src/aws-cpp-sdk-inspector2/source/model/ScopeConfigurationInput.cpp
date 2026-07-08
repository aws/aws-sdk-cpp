/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ScopeConfigurationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ScopeConfigurationInput::ScopeConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

ScopeConfigurationInput& ScopeConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scopeType")) {
    m_scopeType = ScopeTypeMapper::GetScopeTypeForName(jsonValue.GetString("scopeType"));
    m_scopeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeValues")) {
    Aws::Utils::Array<JsonView> scopeValuesJsonList = jsonValue.GetArray("scopeValues");
    for (unsigned scopeValuesIndex = 0; scopeValuesIndex < scopeValuesJsonList.GetLength(); ++scopeValuesIndex) {
      m_scopeValues.push_back(scopeValuesJsonList[scopeValuesIndex].AsString());
    }
    m_scopeValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue ScopeConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_scopeTypeHasBeenSet) {
    payload.WithString("scopeType", ScopeTypeMapper::GetNameForScopeType(m_scopeType));
  }

  if (m_scopeValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> scopeValuesJsonList(m_scopeValues.size());
    for (unsigned scopeValuesIndex = 0; scopeValuesIndex < scopeValuesJsonList.GetLength(); ++scopeValuesIndex) {
      scopeValuesJsonList[scopeValuesIndex].AsString(m_scopeValues[scopeValuesIndex]);
    }
    payload.WithArray("scopeValues", std::move(scopeValuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
