/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PaymentTokenResponseOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

PaymentTokenResponseOutput::PaymentTokenResponseOutput(JsonView jsonValue) { *this = jsonValue; }

PaymentTokenResponseOutput& PaymentTokenResponseOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("coinbaseCdpTokenResponse")) {
    m_coinbaseCdpTokenResponse = jsonValue.GetObject("coinbaseCdpTokenResponse");
    m_coinbaseCdpTokenResponseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stripePrivyTokenResponse")) {
    m_stripePrivyTokenResponse = jsonValue.GetObject("stripePrivyTokenResponse");
    m_stripePrivyTokenResponseHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentTokenResponseOutput::Jsonize() const {
  JsonValue payload;

  if (m_coinbaseCdpTokenResponseHasBeenSet) {
    payload.WithObject("coinbaseCdpTokenResponse", m_coinbaseCdpTokenResponse.Jsonize());
  }

  if (m_stripePrivyTokenResponseHasBeenSet) {
    payload.WithObject("stripePrivyTokenResponse", m_stripePrivyTokenResponse.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
