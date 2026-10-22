/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RetrievalInstructionFailureReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

RetrievalInstructionFailureReason::RetrievalInstructionFailureReason(JsonView jsonValue) { *this = jsonValue; }

RetrievalInstructionFailureReason& RetrievalInstructionFailureReason::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fieldName")) {
    m_fieldName = RetrievalInstructionFieldNameMapper::GetRetrievalInstructionFieldNameForName(jsonValue.GetString("fieldName"));
    m_fieldNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = RetrievalInstructionFailureReasonCodeMapper::GetRetrievalInstructionFailureReasonCodeForName(jsonValue.GetString("code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievalInstructionFailureReason::Jsonize() const {
  JsonValue payload;

  if (m_fieldNameHasBeenSet) {
    payload.WithString("fieldName", RetrievalInstructionFieldNameMapper::GetNameForRetrievalInstructionFieldName(m_fieldName));
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", RetrievalInstructionFailureReasonCodeMapper::GetNameForRetrievalInstructionFailureReasonCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
