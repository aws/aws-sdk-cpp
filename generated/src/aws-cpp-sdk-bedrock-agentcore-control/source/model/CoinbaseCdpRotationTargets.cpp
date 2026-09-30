/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CoinbaseCdpRotationTargets.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CoinbaseCdpRotationTargets::CoinbaseCdpRotationTargets(JsonView jsonValue) { *this = jsonValue; }

CoinbaseCdpRotationTargets& CoinbaseCdpRotationTargets::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("secrets")) {
    Aws::Utils::Array<JsonView> secretsJsonList = jsonValue.GetArray("secrets");
    for (unsigned secretsIndex = 0; secretsIndex < secretsJsonList.GetLength(); ++secretsIndex) {
      m_secrets.push_back(CoinbaseCdpSecretMapper::GetCoinbaseCdpSecretForName(secretsJsonList[secretsIndex].AsString()));
    }
    m_secretsHasBeenSet = true;
  }
  return *this;
}

JsonValue CoinbaseCdpRotationTargets::Jsonize() const {
  JsonValue payload;

  if (m_secretsHasBeenSet) {
    Aws::Utils::Array<JsonValue> secretsJsonList(m_secrets.size());
    for (unsigned secretsIndex = 0; secretsIndex < secretsJsonList.GetLength(); ++secretsIndex) {
      secretsJsonList[secretsIndex].AsString(CoinbaseCdpSecretMapper::GetNameForCoinbaseCdpSecret(m_secrets[secretsIndex]));
    }
    payload.WithArray("secrets", std::move(secretsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
