/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CedarPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CedarPolicy::CedarPolicy(JsonView jsonValue) { *this = jsonValue; }

CedarPolicy& CedarPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("statement")) {
    m_statement = jsonValue.GetString("statement");
    m_statementHasBeenSet = true;
  }
  return *this;
}

JsonValue CedarPolicy::Jsonize() const {
  JsonValue payload;

  if (m_statementHasBeenSet) {
    payload.WithString("statement", m_statement);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
