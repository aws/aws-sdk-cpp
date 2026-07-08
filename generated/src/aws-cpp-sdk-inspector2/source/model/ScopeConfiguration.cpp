/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ScopeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ScopeConfiguration::ScopeConfiguration(JsonView jsonValue) { *this = jsonValue; }

ScopeConfiguration& ScopeConfiguration::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("state")) {
    m_state = ScopeStateMapper::GetScopeStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateReason")) {
    m_stateReason = jsonValue.GetString("stateReason");
    m_stateReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ScopeConfiguration::Jsonize() const {
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

  if (m_stateHasBeenSet) {
    payload.WithString("state", ScopeStateMapper::GetNameForScopeState(m_state));
  }

  if (m_stateReasonHasBeenSet) {
    payload.WithString("stateReason", m_stateReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
