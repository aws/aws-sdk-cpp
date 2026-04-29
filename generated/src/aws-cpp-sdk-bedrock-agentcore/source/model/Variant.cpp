/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/Variant.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

Variant::Variant(JsonView jsonValue) { *this = jsonValue; }

Variant& Variant::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("weight")) {
    m_weight = jsonValue.GetInteger("weight");
    m_weightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("variantConfiguration")) {
    m_variantConfiguration = jsonValue.GetObject("variantConfiguration");
    m_variantConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue Variant::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_weightHasBeenSet) {
    payload.WithInteger("weight", m_weight);
  }

  if (m_variantConfigurationHasBeenSet) {
    payload.WithObject("variantConfiguration", m_variantConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
