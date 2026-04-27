/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/SelectionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

SelectionConfig::SelectionConfig(JsonView jsonValue) { *this = jsonValue; }

SelectionConfig& SelectionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = SelectionTypeMapper::GetSelectionTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Pattern")) {
    m_pattern = jsonValue.GetString("Pattern");
    m_patternHasBeenSet = true;
  }
  return *this;
}

JsonValue SelectionConfig::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", SelectionTypeMapper::GetNameForSelectionType(m_type));
  }

  if (m_patternHasBeenSet) {
    payload.WithString("Pattern", m_pattern);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
