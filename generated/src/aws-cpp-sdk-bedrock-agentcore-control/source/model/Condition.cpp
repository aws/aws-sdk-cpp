/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Condition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

Condition::Condition(JsonView jsonValue) { *this = jsonValue; }

Condition& Condition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("matchPrincipals")) {
    m_matchPrincipals = jsonValue.GetObject("matchPrincipals");
    m_matchPrincipalsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("matchPaths")) {
    m_matchPaths = jsonValue.GetObject("matchPaths");
    m_matchPathsHasBeenSet = true;
  }
  return *this;
}

JsonValue Condition::Jsonize() const {
  JsonValue payload;

  if (m_matchPrincipalsHasBeenSet) {
    payload.WithObject("matchPrincipals", m_matchPrincipals.Jsonize());
  }

  if (m_matchPathsHasBeenSet) {
    payload.WithObject("matchPaths", m_matchPaths.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
