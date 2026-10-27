/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OnBehalfOfTokenExchangeConfigType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

OnBehalfOfTokenExchangeConfigType::OnBehalfOfTokenExchangeConfigType(JsonView jsonValue) { *this = jsonValue; }

OnBehalfOfTokenExchangeConfigType& OnBehalfOfTokenExchangeConfigType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("grantType")) {
    m_grantType =
        OnBehalfOfTokenExchangeGrantTypeTypeMapper::GetOnBehalfOfTokenExchangeGrantTypeTypeForName(jsonValue.GetString("grantType"));
    m_grantTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenExchangeGrantTypeConfig")) {
    m_tokenExchangeGrantTypeConfig = jsonValue.GetObject("tokenExchangeGrantTypeConfig");
    m_tokenExchangeGrantTypeConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("onBehalfOfAuthenticationConfig")) {
    m_onBehalfOfAuthenticationConfig = jsonValue.GetObject("onBehalfOfAuthenticationConfig");
    m_onBehalfOfAuthenticationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue OnBehalfOfTokenExchangeConfigType::Jsonize() const {
  JsonValue payload;

  if (m_grantTypeHasBeenSet) {
    payload.WithString("grantType",
                       OnBehalfOfTokenExchangeGrantTypeTypeMapper::GetNameForOnBehalfOfTokenExchangeGrantTypeType(m_grantType));
  }

  if (m_tokenExchangeGrantTypeConfigHasBeenSet) {
    payload.WithObject("tokenExchangeGrantTypeConfig", m_tokenExchangeGrantTypeConfig.Jsonize());
  }

  if (m_onBehalfOfAuthenticationConfigHasBeenSet) {
    payload.WithObject("onBehalfOfAuthenticationConfig", m_onBehalfOfAuthenticationConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
