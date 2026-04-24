/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AuthorizingClaimMatchValueType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

AuthorizingClaimMatchValueType::AuthorizingClaimMatchValueType(JsonView jsonValue) { *this = jsonValue; }

AuthorizingClaimMatchValueType& AuthorizingClaimMatchValueType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("claimMatchValue")) {
    m_claimMatchValue = jsonValue.GetObject("claimMatchValue");
    m_claimMatchValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("claimMatchOperator")) {
    m_claimMatchOperator = ClaimMatchOperatorTypeMapper::GetClaimMatchOperatorTypeForName(jsonValue.GetString("claimMatchOperator"));
    m_claimMatchOperatorHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthorizingClaimMatchValueType::Jsonize() const {
  JsonValue payload;

  if (m_claimMatchValueHasBeenSet) {
    payload.WithObject("claimMatchValue", m_claimMatchValue.Jsonize());
  }

  if (m_claimMatchOperatorHasBeenSet) {
    payload.WithString("claimMatchOperator", ClaimMatchOperatorTypeMapper::GetNameForClaimMatchOperatorType(m_claimMatchOperator));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
