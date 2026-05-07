/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/StripePrivyConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

StripePrivyConfigurationInput::StripePrivyConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

StripePrivyConfigurationInput& StripePrivyConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("appId")) {
    m_appId = jsonValue.GetString("appId");
    m_appIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("appSecret")) {
    m_appSecret = jsonValue.GetString("appSecret");
    m_appSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationPrivateKey")) {
    m_authorizationPrivateKey = jsonValue.GetString("authorizationPrivateKey");
    m_authorizationPrivateKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationId")) {
    m_authorizationId = jsonValue.GetString("authorizationId");
    m_authorizationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue StripePrivyConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_appIdHasBeenSet) {
    payload.WithString("appId", m_appId);
  }

  if (m_appSecretHasBeenSet) {
    payload.WithString("appSecret", m_appSecret);
  }

  if (m_authorizationPrivateKeyHasBeenSet) {
    payload.WithString("authorizationPrivateKey", m_authorizationPrivateKey);
  }

  if (m_authorizationIdHasBeenSet) {
    payload.WithString("authorizationId", m_authorizationId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
