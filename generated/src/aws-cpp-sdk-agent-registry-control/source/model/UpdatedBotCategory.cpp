/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdatedBotCategory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

UpdatedBotCategory::UpdatedBotCategory(JsonView jsonValue) { *this = jsonValue; }

UpdatedBotCategory& UpdatedBotCategory::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("optionalValue")) {
    m_optionalValue = BotCategoryMapper::GetBotCategoryForName(jsonValue.GetString("optionalValue"));
    m_optionalValueHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedBotCategory::Jsonize() const {
  JsonValue payload;

  if (m_optionalValueHasBeenSet) {
    payload.WithString("optionalValue", BotCategoryMapper::GetNameForBotCategory(m_optionalValue));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
