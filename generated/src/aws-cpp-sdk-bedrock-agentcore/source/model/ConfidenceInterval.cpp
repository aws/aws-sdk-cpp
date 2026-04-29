/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ConfidenceInterval.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ConfidenceInterval::ConfidenceInterval(JsonView jsonValue) { *this = jsonValue; }

ConfidenceInterval& ConfidenceInterval::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lower")) {
    m_lower = jsonValue.GetDouble("lower");
    m_lowerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("upper")) {
    m_upper = jsonValue.GetDouble("upper");
    m_upperHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfidenceInterval::Jsonize() const {
  JsonValue payload;

  if (m_lowerHasBeenSet) {
    payload.WithDouble("lower", m_lower);
  }

  if (m_upperHasBeenSet) {
    payload.WithDouble("upper", m_upper);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
