/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ThresholdConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ThresholdConfiguration::ThresholdConfiguration(JsonView jsonValue) { *this = jsonValue; }

ThresholdConfiguration& ThresholdConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = ThresholdTypeMapper::GetThresholdTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetInteger("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue ThresholdConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", ThresholdTypeMapper::GetNameForThresholdType(m_type));
  }

  if (m_valueHasBeenSet) {
    payload.WithInteger("value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
