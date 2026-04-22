/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessInlineFunctionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessInlineFunctionConfig::HarnessInlineFunctionConfig(JsonView jsonValue) { *this = jsonValue; }

HarnessInlineFunctionConfig& HarnessInlineFunctionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputSchema")) {
    m_inputSchema = jsonValue.GetObject("inputSchema");
    m_inputSchemaHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessInlineFunctionConfig::Jsonize() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_inputSchemaHasBeenSet) {
    if (!m_inputSchema.View().IsNull()) {
      payload.WithObject("inputSchema", JsonValue(m_inputSchema.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
