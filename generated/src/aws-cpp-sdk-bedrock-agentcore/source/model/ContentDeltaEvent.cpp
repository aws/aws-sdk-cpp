/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ContentDeltaEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ContentDeltaEvent::ContentDeltaEvent(JsonView jsonValue) { *this = jsonValue; }

ContentDeltaEvent& ContentDeltaEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("stdout")) {
    m_stdout = jsonValue.GetString("stdout");
    m_stdoutHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stderr")) {
    m_stderr = jsonValue.GetString("stderr");
    m_stderrHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentDeltaEvent::Jsonize() const {
  JsonValue payload;

  if (m_stdoutHasBeenSet) {
    payload.WithString("stdout", m_stdout);
  }

  if (m_stderrHasBeenSet) {
    payload.WithString("stderr", m_stderr);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
