/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/LinkedAccountDeveloperJwt.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

LinkedAccountDeveloperJwt::LinkedAccountDeveloperJwt(JsonView jsonValue) { *this = jsonValue; }

LinkedAccountDeveloperJwt& LinkedAccountDeveloperJwt::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kid")) {
    m_kid = jsonValue.GetString("kid");
    m_kidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sub")) {
    m_sub = jsonValue.GetString("sub");
    m_subHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkedAccountDeveloperJwt::Jsonize() const {
  JsonValue payload;

  if (m_kidHasBeenSet) {
    payload.WithString("kid", m_kid);
  }

  if (m_subHasBeenSet) {
    payload.WithString("sub", m_sub);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
