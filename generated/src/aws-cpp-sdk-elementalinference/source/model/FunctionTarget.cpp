/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/FunctionTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

FunctionTarget::FunctionTarget(JsonView jsonValue) { *this = jsonValue; }

FunctionTarget& FunctionTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bedrock")) {
    m_bedrock = jsonValue.GetObject("bedrock");
    m_bedrockHasBeenSet = true;
  }
  if (jsonValue.ValueExists("passthrough")) {
    m_passthrough = jsonValue.GetObject("passthrough");
    m_passthroughHasBeenSet = true;
  }
  return *this;
}

JsonValue FunctionTarget::Jsonize() const {
  JsonValue payload;

  if (m_bedrockHasBeenSet) {
    payload.WithObject("bedrock", m_bedrock.Jsonize());
  }

  if (m_passthroughHasBeenSet) {
    payload.WithObject("passthrough", m_passthrough.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
