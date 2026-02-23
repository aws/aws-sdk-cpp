/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotatedLine.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyAnnotatedLine::AutomatedReasoningPolicyAnnotatedLine(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyAnnotatedLine& AutomatedReasoningPolicyAnnotatedLine::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lineNumber")) {
    m_lineNumber = jsonValue.GetInteger("lineNumber");
    m_lineNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lineText")) {
    m_lineText = jsonValue.GetString("lineText");
    m_lineTextHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyAnnotatedLine::Jsonize() const {
  JsonValue payload;

  if (m_lineNumberHasBeenSet) {
    payload.WithInteger("lineNumber", m_lineNumber);
  }

  if (m_lineTextHasBeenSet) {
    payload.WithString("lineText", m_lineText);
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
