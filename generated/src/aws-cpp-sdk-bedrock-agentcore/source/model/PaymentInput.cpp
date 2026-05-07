/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PaymentInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

PaymentInput::PaymentInput(JsonView jsonValue) { *this = jsonValue; }

PaymentInput& PaymentInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cryptoX402")) {
    m_cryptoX402 = jsonValue.GetObject("cryptoX402");
    m_cryptoX402HasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentInput::Jsonize() const {
  JsonValue payload;

  if (m_cryptoX402HasBeenSet) {
    payload.WithObject("cryptoX402", m_cryptoX402.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
