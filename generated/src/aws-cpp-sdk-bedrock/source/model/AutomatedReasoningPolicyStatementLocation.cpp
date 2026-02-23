/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyStatementLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyStatementLocation::AutomatedReasoningPolicyStatementLocation(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyStatementLocation& AutomatedReasoningPolicyStatementLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lines")) {
    Aws::Utils::Array<JsonView> linesJsonList = jsonValue.GetArray("lines");
    for (unsigned linesIndex = 0; linesIndex < linesJsonList.GetLength(); ++linesIndex) {
      m_lines.push_back(linesJsonList[linesIndex].AsInteger());
    }
    m_linesHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyStatementLocation::Jsonize() const {
  JsonValue payload;

  if (m_linesHasBeenSet) {
    Aws::Utils::Array<JsonValue> linesJsonList(m_lines.size());
    for (unsigned linesIndex = 0; linesIndex < linesJsonList.GetLength(); ++linesIndex) {
      linesJsonList[linesIndex].AsInteger(m_lines[linesIndex]);
    }
    payload.WithArray("lines", std::move(linesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
