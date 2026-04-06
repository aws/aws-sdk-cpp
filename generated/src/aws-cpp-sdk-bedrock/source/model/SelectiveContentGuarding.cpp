/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/SelectiveContentGuarding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

SelectiveContentGuarding::SelectiveContentGuarding(JsonView jsonValue) { *this = jsonValue; }

SelectiveContentGuarding& SelectiveContentGuarding::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("system")) {
    m_system = SelectiveGuardingModeMapper::GetSelectiveGuardingModeForName(jsonValue.GetString("system"));
    m_systemHasBeenSet = true;
  }
  if (jsonValue.ValueExists("messages")) {
    m_messages = SelectiveGuardingModeMapper::GetSelectiveGuardingModeForName(jsonValue.GetString("messages"));
    m_messagesHasBeenSet = true;
  }
  return *this;
}

JsonValue SelectiveContentGuarding::Jsonize() const {
  JsonValue payload;

  if (m_systemHasBeenSet) {
    payload.WithString("system", SelectiveGuardingModeMapper::GetNameForSelectiveGuardingMode(m_system));
  }

  if (m_messagesHasBeenSet) {
    payload.WithString("messages", SelectiveGuardingModeMapper::GetNameForSelectiveGuardingMode(m_messages));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
