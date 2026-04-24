/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Content.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

Content::Content(JsonView jsonValue) { *this = jsonValue; }

Content& Content::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rawText")) {
    m_rawText = jsonValue.GetString("rawText");
    m_rawTextHasBeenSet = true;
  }
  return *this;
}

JsonValue Content::Jsonize() const {
  JsonValue payload;

  if (m_rawTextHasBeenSet) {
    payload.WithString("rawText", m_rawText);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
