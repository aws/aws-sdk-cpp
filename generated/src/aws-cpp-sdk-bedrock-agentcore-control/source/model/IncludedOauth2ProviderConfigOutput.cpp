﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/IncludedOauth2ProviderConfigOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

IncludedOauth2ProviderConfigOutput::IncludedOauth2ProviderConfigOutput(JsonView jsonValue) { *this = jsonValue; }

IncludedOauth2ProviderConfigOutput& IncludedOauth2ProviderConfigOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("oauthDiscovery")) {
    m_oauthDiscovery = jsonValue.GetObject("oauthDiscovery");
    m_oauthDiscoveryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IncludedOauth2ProviderConfigOutput::Jsonize() const {
  JsonValue payload;

  if (m_oauthDiscoveryHasBeenSet) {
    payload.WithObject("oauthDiscovery", m_oauthDiscovery.Jsonize());
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
