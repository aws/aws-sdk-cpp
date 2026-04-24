/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyStatementReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyStatementReference::AutomatedReasoningPolicyStatementReference(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyStatementReference& AutomatedReasoningPolicyStatementReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("documentId")) {
    m_documentId = jsonValue.GetString("documentId");
    m_documentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statementId")) {
    m_statementId = jsonValue.GetString("statementId");
    m_statementIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyStatementReference::Jsonize() const {
  JsonValue payload;

  if (m_documentIdHasBeenSet) {
    payload.WithString("documentId", m_documentId);
  }

  if (m_statementIdHasBeenSet) {
    payload.WithString("statementId", m_statementId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
