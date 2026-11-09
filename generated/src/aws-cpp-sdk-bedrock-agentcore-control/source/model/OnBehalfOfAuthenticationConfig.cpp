/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OnBehalfOfAuthenticationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

OnBehalfOfAuthenticationConfig::OnBehalfOfAuthenticationConfig(JsonView jsonValue) { *this = jsonValue; }

OnBehalfOfAuthenticationConfig& OnBehalfOfAuthenticationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clientAuthenticationMethod")) {
    m_clientAuthenticationMethod = OnBehalfOfClientAuthenticationMethodMapper::GetOnBehalfOfClientAuthenticationMethodForName(
        jsonValue.GetString("clientAuthenticationMethod"));
    m_clientAuthenticationMethodHasBeenSet = true;
  }
  return *this;
}

JsonValue OnBehalfOfAuthenticationConfig::Jsonize() const {
  JsonValue payload;

  if (m_clientAuthenticationMethodHasBeenSet) {
    payload.WithString(
        "clientAuthenticationMethod",
        OnBehalfOfClientAuthenticationMethodMapper::GetNameForOnBehalfOfClientAuthenticationMethod(m_clientAuthenticationMethod));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
