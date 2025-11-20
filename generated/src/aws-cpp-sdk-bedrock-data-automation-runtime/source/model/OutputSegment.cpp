/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/OutputSegment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomationRuntime {
namespace Model {

OutputSegment::OutputSegment(JsonView jsonValue) { *this = jsonValue; }

OutputSegment& OutputSegment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("customOutputStatus")) {
    m_customOutputStatus = CustomOutputStatusMapper::GetCustomOutputStatusForName(jsonValue.GetString("customOutputStatus"));
    m_customOutputStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customOutput")) {
    m_customOutput = jsonValue.GetString("customOutput");
    m_customOutputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("standardOutput")) {
    m_standardOutput = jsonValue.GetString("standardOutput");
    m_standardOutputHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputSegment::Jsonize() const {
  JsonValue payload;

  if (m_customOutputStatusHasBeenSet) {
    payload.WithString("customOutputStatus", CustomOutputStatusMapper::GetNameForCustomOutputStatus(m_customOutputStatus));
  }

  if (m_customOutputHasBeenSet) {
    payload.WithString("customOutput", m_customOutput);
  }

  if (m_standardOutputHasBeenSet) {
    payload.WithString("standardOutput", m_standardOutput);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
