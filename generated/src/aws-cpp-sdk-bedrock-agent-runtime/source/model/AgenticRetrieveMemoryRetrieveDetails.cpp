/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryRetrieveDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveMemoryRetrieveDetails::AgenticRetrieveMemoryRetrieveDetails(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveMemoryRetrieveDetails& AgenticRetrieveMemoryRetrieveDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inputQuery")) {
    m_inputQuery = jsonValue.GetObject("inputQuery");
    m_inputQueryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memoryId")) {
    m_memoryId = jsonValue.GetString("memoryId");
    m_memoryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespace")) {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespacePath")) {
    m_namespacePath = jsonValue.GetString("namespacePath");
    m_namespacePathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("strategyId")) {
    m_strategyId = jsonValue.GetString("strategyId");
    m_strategyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveMemoryRetrieveDetails::Jsonize() const {
  JsonValue payload;

  if (m_inputQueryHasBeenSet) {
    payload.WithObject("inputQuery", m_inputQuery.Jsonize());
  }

  if (m_memoryIdHasBeenSet) {
    payload.WithString("memoryId", m_memoryId);
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("namespace", m_namespace);
  }

  if (m_namespacePathHasBeenSet) {
    payload.WithString("namespacePath", m_namespacePath);
  }

  if (m_strategyIdHasBeenSet) {
    payload.WithString("strategyId", m_strategyId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
