/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MatchPrincipalEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

MatchPrincipalEntry::MatchPrincipalEntry(JsonView jsonValue) { *this = jsonValue; }

MatchPrincipalEntry& MatchPrincipalEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("iamPrincipal")) {
    m_iamPrincipal = jsonValue.GetObject("iamPrincipal");
    m_iamPrincipalHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchPrincipalEntry::Jsonize() const {
  JsonValue payload;

  if (m_iamPrincipalHasBeenSet) {
    payload.WithObject("iamPrincipal", m_iamPrincipal.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
