/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/CommandParameterValueNumberRange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {

CommandParameterValueNumberRange::CommandParameterValueNumberRange(JsonView jsonValue) { *this = jsonValue; }

CommandParameterValueNumberRange& CommandParameterValueNumberRange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("min")) {
    m_min = jsonValue.GetString("min");
    m_minHasBeenSet = true;
  }
  if (jsonValue.ValueExists("max")) {
    m_max = jsonValue.GetString("max");
    m_maxHasBeenSet = true;
  }
  return *this;
}

JsonValue CommandParameterValueNumberRange::Jsonize() const {
  JsonValue payload;

  if (m_minHasBeenSet) {
    payload.WithString("min", m_min);
  }

  if (m_maxHasBeenSet) {
    payload.WithString("max", m_max);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
