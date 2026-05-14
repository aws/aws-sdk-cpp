/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/BatchDeleteAdvancedPromptOptimizationJobError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

BatchDeleteAdvancedPromptOptimizationJobError::BatchDeleteAdvancedPromptOptimizationJobError(JsonView jsonValue) { *this = jsonValue; }

BatchDeleteAdvancedPromptOptimizationJobError& BatchDeleteAdvancedPromptOptimizationJobError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobIdentifier")) {
    m_jobIdentifier = jsonValue.GetString("jobIdentifier");
    m_jobIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteAdvancedPromptOptimizationJobError::Jsonize() const {
  JsonValue payload;

  if (m_jobIdentifierHasBeenSet) {
    payload.WithString("jobIdentifier", m_jobIdentifier);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
