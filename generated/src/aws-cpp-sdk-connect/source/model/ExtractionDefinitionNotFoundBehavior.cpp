/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ExtractionDefinitionNotFoundBehavior.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ExtractionDefinitionNotFoundBehavior::ExtractionDefinitionNotFoundBehavior(JsonView jsonValue) { *this = jsonValue; }

ExtractionDefinitionNotFoundBehavior& ExtractionDefinitionNotFoundBehavior::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Behavior")) {
    m_behavior = NotFoundBehaviorTypeMapper::GetNotFoundBehaviorTypeForName(jsonValue.GetString("Behavior"));
    m_behaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultValue")) {
    m_defaultValue = jsonValue.GetString("DefaultValue");
    m_defaultValueHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractionDefinitionNotFoundBehavior::Jsonize() const {
  JsonValue payload;

  if (m_behaviorHasBeenSet) {
    payload.WithString("Behavior", NotFoundBehaviorTypeMapper::GetNameForNotFoundBehaviorType(m_behavior));
  }

  if (m_defaultValueHasBeenSet) {
    payload.WithString("DefaultValue", m_defaultValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
