/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/UserMessageBlock.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

UserMessageBlock::UserMessageBlock(JsonView jsonValue) { *this = jsonValue; }

UserMessageBlock& UserMessageBlock::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolResult")) {
    m_toolResult = jsonValue.GetObject("toolResult");
    m_toolResultHasBeenSet = true;
  }
  return *this;
}

JsonValue UserMessageBlock::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  if (m_toolResultHasBeenSet) {
    if (!m_toolResult.View().IsNull()) {
      payload.WithObject("toolResult", JsonValue(m_toolResult.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
