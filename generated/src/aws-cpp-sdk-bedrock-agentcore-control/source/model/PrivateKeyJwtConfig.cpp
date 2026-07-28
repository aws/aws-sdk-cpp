/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PrivateKeyJwtConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PrivateKeyJwtConfig::PrivateKeyJwtConfig(JsonView jsonValue) { *this = jsonValue; }

PrivateKeyJwtConfig& PrivateKeyJwtConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("privateKeySource")) {
    m_privateKeySource = jsonValue.GetObject("privateKeySource");
    m_privateKeySourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("signingAlgorithm")) {
    m_signingAlgorithm = SigningAlgorithmMapper::GetSigningAlgorithmForName(jsonValue.GetString("signingAlgorithm"));
    m_signingAlgorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalHeaderClaims")) {
    Aws::Map<Aws::String, JsonView> additionalHeaderClaimsJsonMap = jsonValue.GetObject("additionalHeaderClaims").GetAllObjects();
    for (auto& additionalHeaderClaimsItem : additionalHeaderClaimsJsonMap) {
      m_additionalHeaderClaims[additionalHeaderClaimsItem.first] = additionalHeaderClaimsItem.second.AsString();
    }
    m_additionalHeaderClaimsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalPayloadClaims")) {
    Aws::Map<Aws::String, JsonView> additionalPayloadClaimsJsonMap = jsonValue.GetObject("additionalPayloadClaims").GetAllObjects();
    for (auto& additionalPayloadClaimsItem : additionalPayloadClaimsJsonMap) {
      m_additionalPayloadClaims[additionalPayloadClaimsItem.first] = additionalPayloadClaimsItem.second.AsString();
    }
    m_additionalPayloadClaimsHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivateKeyJwtConfig::Jsonize() const {
  JsonValue payload;

  if (m_privateKeySourceHasBeenSet) {
    payload.WithObject("privateKeySource", m_privateKeySource.Jsonize());
  }

  if (m_signingAlgorithmHasBeenSet) {
    payload.WithString("signingAlgorithm", SigningAlgorithmMapper::GetNameForSigningAlgorithm(m_signingAlgorithm));
  }

  if (m_additionalHeaderClaimsHasBeenSet) {
    JsonValue additionalHeaderClaimsJsonMap;
    for (auto& additionalHeaderClaimsItem : m_additionalHeaderClaims) {
      additionalHeaderClaimsJsonMap.WithString(additionalHeaderClaimsItem.first, additionalHeaderClaimsItem.second);
    }
    payload.WithObject("additionalHeaderClaims", std::move(additionalHeaderClaimsJsonMap));
  }

  if (m_additionalPayloadClaimsHasBeenSet) {
    JsonValue additionalPayloadClaimsJsonMap;
    for (auto& additionalPayloadClaimsItem : m_additionalPayloadClaims) {
      additionalPayloadClaimsJsonMap.WithString(additionalPayloadClaimsItem.first, additionalPayloadClaimsItem.second);
    }
    payload.WithObject("additionalPayloadClaims", std::move(additionalPayloadClaimsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
