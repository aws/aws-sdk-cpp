/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/DocumentAcl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

DocumentAcl::DocumentAcl(JsonView jsonValue) { *this = jsonValue; }

DocumentAcl& DocumentAcl::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allowList")) {
    m_allowList = jsonValue.GetObject("allowList");
    m_allowListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("denyList")) {
    m_denyList = jsonValue.GetObject("denyList");
    m_denyListHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentAcl::Jsonize() const {
  JsonValue payload;

  if (m_allowListHasBeenSet) {
    payload.WithObject("allowList", m_allowList.Jsonize());
  }

  if (m_denyListHasBeenSet) {
    payload.WithObject("denyList", m_denyList.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
