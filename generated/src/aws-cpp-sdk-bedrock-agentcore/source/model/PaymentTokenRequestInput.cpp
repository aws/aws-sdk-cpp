/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PaymentTokenRequestInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

PaymentTokenRequestInput::PaymentTokenRequestInput(JsonView jsonValue) { *this = jsonValue; }

PaymentTokenRequestInput& PaymentTokenRequestInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("coinbaseCdpTokenRequest")) {
    m_coinbaseCdpTokenRequest = jsonValue.GetObject("coinbaseCdpTokenRequest");
    m_coinbaseCdpTokenRequestHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stripePrivyTokenRequest")) {
    m_stripePrivyTokenRequest = jsonValue.GetObject("stripePrivyTokenRequest");
    m_stripePrivyTokenRequestHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentTokenRequestInput::Jsonize() const {
  JsonValue payload;

  if (m_coinbaseCdpTokenRequestHasBeenSet) {
    payload.WithObject("coinbaseCdpTokenRequest", m_coinbaseCdpTokenRequest.Jsonize());
  }

  if (m_stripePrivyTokenRequestHasBeenSet) {
    payload.WithObject("stripePrivyTokenRequest", m_stripePrivyTokenRequest.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
