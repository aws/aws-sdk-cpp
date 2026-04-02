/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OAuth2AuthorizationData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

OAuth2AuthorizationData::OAuth2AuthorizationData(JsonView jsonValue) { *this = jsonValue; }

OAuth2AuthorizationData& OAuth2AuthorizationData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("authorizationUrl")) {
    m_authorizationUrl = jsonValue.GetString("authorizationUrl");
    m_authorizationUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userId")) {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuth2AuthorizationData::Jsonize() const {
  JsonValue payload;

  if (m_authorizationUrlHasBeenSet) {
    payload.WithString("authorizationUrl", m_authorizationUrl);
  }

  if (m_userIdHasBeenSet) {
    payload.WithString("userId", m_userId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
