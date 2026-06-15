/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksSensitiveInformationResultEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailChecksSensitiveInformationResultEntry::GuardrailChecksSensitiveInformationResultEntry(JsonView jsonValue) { *this = jsonValue; }

GuardrailChecksSensitiveInformationResultEntry& GuardrailChecksSensitiveInformationResultEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = GuardrailChecksSensitiveInformationEntityTypeMapper::GetGuardrailChecksSensitiveInformationEntityTypeForName(
        jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidenceScore")) {
    m_confidenceScore = jsonValue.GetDouble("confidenceScore");
    m_confidenceScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("beginOffset")) {
    m_beginOffset = jsonValue.GetInteger("beginOffset");
    m_beginOffsetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endOffset")) {
    m_endOffset = jsonValue.GetInteger("endOffset");
    m_endOffsetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("messageIndex")) {
    m_messageIndex = jsonValue.GetInteger("messageIndex");
    m_messageIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contentIndex")) {
    m_contentIndex = jsonValue.GetInteger("contentIndex");
    m_contentIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailChecksSensitiveInformationResultEntry::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString(
        "type", GuardrailChecksSensitiveInformationEntityTypeMapper::GetNameForGuardrailChecksSensitiveInformationEntityType(m_type));
  }

  if (m_confidenceScoreHasBeenSet) {
    payload.WithDouble("confidenceScore", m_confidenceScore);
  }

  if (m_beginOffsetHasBeenSet) {
    payload.WithInteger("beginOffset", m_beginOffset);
  }

  if (m_endOffsetHasBeenSet) {
    payload.WithInteger("endOffset", m_endOffset);
  }

  if (m_messageIndexHasBeenSet) {
    payload.WithInteger("messageIndex", m_messageIndex);
  }

  if (m_contentIndexHasBeenSet) {
    payload.WithInteger("contentIndex", m_contentIndex);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
