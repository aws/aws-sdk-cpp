/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SessionFinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

SessionFinding::SessionFinding(JsonView jsonValue) { *this = jsonValue; }

SessionFinding& SessionFinding::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetId")) {
    m_targetId = jsonValue.GetString("targetId");
    m_targetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetType")) {
    m_targetType = FindingTargetTypeMapper::GetFindingTargetTypeForName(jsonValue.GetString("targetType"));
    m_targetTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("category")) {
    m_category = jsonValue.GetString("category");
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = jsonValue.GetDouble("confidence");
    m_confidenceHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionFinding::Jsonize() const {
  JsonValue payload;

  if (m_targetIdHasBeenSet) {
    payload.WithString("targetId", m_targetId);
  }

  if (m_targetTypeHasBeenSet) {
    payload.WithString("targetType", FindingTargetTypeMapper::GetNameForFindingTargetType(m_targetType));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_categoryHasBeenSet) {
    payload.WithString("category", m_category);
  }

  if (m_confidenceHasBeenSet) {
    payload.WithDouble("confidence", m_confidence);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
