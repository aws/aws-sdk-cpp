/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CoinbaseCdpTokenRequestInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

CoinbaseCdpTokenRequestInput::CoinbaseCdpTokenRequestInput(JsonView jsonValue) { *this = jsonValue; }

CoinbaseCdpTokenRequestInput& CoinbaseCdpTokenRequestInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("requestMethod")) {
    m_requestMethod = PaymentHttpMethodTypeMapper::GetPaymentHttpMethodTypeForName(jsonValue.GetString("requestMethod"));
    m_requestMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestHost")) {
    m_requestHost = jsonValue.GetString("requestHost");
    m_requestHostHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestPath")) {
    m_requestPath = jsonValue.GetString("requestPath");
    m_requestPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("includeWalletAuthToken")) {
    m_includeWalletAuthToken = jsonValue.GetBool("includeWalletAuthToken");
    m_includeWalletAuthTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestBody")) {
    m_requestBody = jsonValue.GetString("requestBody");
    m_requestBodyHasBeenSet = true;
  }
  return *this;
}

JsonValue CoinbaseCdpTokenRequestInput::Jsonize() const {
  JsonValue payload;

  if (m_requestMethodHasBeenSet) {
    payload.WithString("requestMethod", PaymentHttpMethodTypeMapper::GetNameForPaymentHttpMethodType(m_requestMethod));
  }

  if (m_requestHostHasBeenSet) {
    payload.WithString("requestHost", m_requestHost);
  }

  if (m_requestPathHasBeenSet) {
    payload.WithString("requestPath", m_requestPath);
  }

  if (m_includeWalletAuthTokenHasBeenSet) {
    payload.WithBool("includeWalletAuthToken", m_includeWalletAuthToken);
  }

  if (m_requestBodyHasBeenSet) {
    payload.WithString("requestBody", m_requestBody);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
