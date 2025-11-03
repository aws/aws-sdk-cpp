/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CodeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CodeConfiguration::CodeConfiguration(JsonView jsonValue) { *this = jsonValue; }

CodeConfiguration& CodeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetObject("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runtime")) {
    m_runtime = AgentManagedRuntimeTypeMapper::GetAgentManagedRuntimeTypeForName(jsonValue.GetString("runtime"));
    m_runtimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entryPoint")) {
    Aws::Utils::Array<JsonView> entryPointJsonList = jsonValue.GetArray("entryPoint");
    for (unsigned entryPointIndex = 0; entryPointIndex < entryPointJsonList.GetLength(); ++entryPointIndex) {
      m_entryPoint.push_back(entryPointJsonList[entryPointIndex].AsString());
    }
    m_entryPointHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithObject("code", m_code.Jsonize());
  }

  if (m_runtimeHasBeenSet) {
    payload.WithString("runtime", AgentManagedRuntimeTypeMapper::GetNameForAgentManagedRuntimeType(m_runtime));
  }

  if (m_entryPointHasBeenSet) {
    Aws::Utils::Array<JsonValue> entryPointJsonList(m_entryPoint.size());
    for (unsigned entryPointIndex = 0; entryPointIndex < entryPointJsonList.GetLength(); ++entryPointIndex) {
      entryPointJsonList[entryPointIndex].AsString(m_entryPoint[entryPointIndex]);
    }
    payload.WithArray("entryPoint", std::move(entryPointJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
