/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyAtomicStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyAtomicStatement::AutomatedReasoningPolicyAtomicStatement(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyAtomicStatement& AutomatedReasoningPolicyAtomicStatement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("location")) {
    m_location = jsonValue.GetObject("location");
    m_locationHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyAtomicStatement::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  if (m_locationHasBeenSet) {
    payload.WithObject("location", m_location.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
