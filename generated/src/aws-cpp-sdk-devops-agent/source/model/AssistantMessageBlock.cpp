/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AssistantMessageBlock.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

AssistantMessageBlock::AssistantMessageBlock(JsonView jsonValue) { *this = jsonValue; }

AssistantMessageBlock& AssistantMessageBlock::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolUse")) {
    m_toolUse = jsonValue.GetObject("toolUse");
    m_toolUseHasBeenSet = true;
  }
  return *this;
}

JsonValue AssistantMessageBlock::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  if (m_toolUseHasBeenSet) {
    if (!m_toolUse.View().IsNull()) {
      payload.WithObject("toolUse", JsonValue(m_toolUse.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
