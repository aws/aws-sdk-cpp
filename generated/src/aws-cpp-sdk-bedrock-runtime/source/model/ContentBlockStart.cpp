/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ContentBlockStart.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

ContentBlockStart::ContentBlockStart(JsonView jsonValue) { *this = jsonValue; }

ContentBlockStart& ContentBlockStart::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolUse")) {
    m_toolUse = jsonValue.GetObject("toolUse");
    m_toolUseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolResult")) {
    m_toolResult = jsonValue.GetObject("toolResult");
    m_toolResultHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentBlockStart::Jsonize() const {
  JsonValue payload;

  if (m_toolUseHasBeenSet) {
    payload.WithObject("toolUse", m_toolUse.Jsonize());
  }

  if (m_toolResultHasBeenSet) {
    payload.WithObject("toolResult", m_toolResult.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
