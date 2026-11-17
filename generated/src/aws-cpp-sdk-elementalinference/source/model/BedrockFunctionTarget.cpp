/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/BedrockFunctionTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

BedrockFunctionTarget::BedrockFunctionTarget(JsonView jsonValue) { *this = jsonValue; }

BedrockFunctionTarget& BedrockFunctionTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("api")) {
    m_api = BedrockApiMapper::GetBedrockApiForName(jsonValue.GetString("api"));
    m_apiHasBeenSet = true;
  }
  if (jsonValue.ValueExists("model")) {
    m_model = jsonValue.GetString("model");
    m_modelHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockFunctionTarget::Jsonize() const {
  JsonValue payload;

  if (m_apiHasBeenSet) {
    payload.WithString("api", BedrockApiMapper::GetNameForBedrockApi(m_api));
  }

  if (m_modelHasBeenSet) {
    payload.WithString("model", m_model);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
