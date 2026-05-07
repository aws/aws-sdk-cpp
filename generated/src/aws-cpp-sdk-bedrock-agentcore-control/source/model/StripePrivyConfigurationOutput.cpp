/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/StripePrivyConfigurationOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

StripePrivyConfigurationOutput::StripePrivyConfigurationOutput(JsonView jsonValue) { *this = jsonValue; }

StripePrivyConfigurationOutput& StripePrivyConfigurationOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("appId")) {
    m_appId = jsonValue.GetString("appId");
    m_appIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("appSecretArn")) {
    m_appSecretArn = jsonValue.GetObject("appSecretArn");
    m_appSecretArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationPrivateKeyArn")) {
    m_authorizationPrivateKeyArn = jsonValue.GetObject("authorizationPrivateKeyArn");
    m_authorizationPrivateKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationId")) {
    m_authorizationId = jsonValue.GetString("authorizationId");
    m_authorizationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue StripePrivyConfigurationOutput::Jsonize() const {
  JsonValue payload;

  if (m_appIdHasBeenSet) {
    payload.WithString("appId", m_appId);
  }

  if (m_appSecretArnHasBeenSet) {
    payload.WithObject("appSecretArn", m_appSecretArn.Jsonize());
  }

  if (m_authorizationPrivateKeyArnHasBeenSet) {
    payload.WithObject("authorizationPrivateKeyArn", m_authorizationPrivateKeyArn.Jsonize());
  }

  if (m_authorizationIdHasBeenSet) {
    payload.WithString("authorizationId", m_authorizationId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
