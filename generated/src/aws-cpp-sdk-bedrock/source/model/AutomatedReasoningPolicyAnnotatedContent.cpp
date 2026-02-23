/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotatedContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyAnnotatedContent::AutomatedReasoningPolicyAnnotatedContent(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyAnnotatedContent& AutomatedReasoningPolicyAnnotatedContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("line")) {
    m_line = jsonValue.GetObject("line");
    m_lineHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyAnnotatedContent::Jsonize() const {
  JsonValue payload;

  if (m_lineHasBeenSet) {
    payload.WithObject("line", m_line.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
