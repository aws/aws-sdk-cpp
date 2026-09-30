/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CredentialRotationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CredentialRotationConfig::CredentialRotationConfig(JsonView jsonValue) { *this = jsonValue; }

CredentialRotationConfig& CredentialRotationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("coinbaseCDP")) {
    m_coinbaseCDP = jsonValue.GetObject("coinbaseCDP");
    m_coinbaseCDPHasBeenSet = true;
  }
  return *this;
}

JsonValue CredentialRotationConfig::Jsonize() const {
  JsonValue payload;

  if (m_coinbaseCDPHasBeenSet) {
    payload.WithObject("coinbaseCDP", m_coinbaseCDP.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
