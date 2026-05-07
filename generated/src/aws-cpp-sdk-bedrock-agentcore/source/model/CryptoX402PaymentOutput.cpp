/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CryptoX402PaymentOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

CryptoX402PaymentOutput::CryptoX402PaymentOutput(JsonView jsonValue) { *this = jsonValue; }

CryptoX402PaymentOutput& CryptoX402PaymentOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("payload")) {
    m_payload = jsonValue.GetObject("payload");
    m_payloadHasBeenSet = true;
  }
  return *this;
}

JsonValue CryptoX402PaymentOutput::Jsonize() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_payloadHasBeenSet) {
    if (!m_payload.View().IsNull()) {
      payload.WithObject("payload", JsonValue(m_payload.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
