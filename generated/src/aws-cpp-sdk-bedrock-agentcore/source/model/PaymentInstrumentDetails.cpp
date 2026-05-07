/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PaymentInstrumentDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

PaymentInstrumentDetails::PaymentInstrumentDetails(JsonView jsonValue) { *this = jsonValue; }

PaymentInstrumentDetails& PaymentInstrumentDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("embeddedCryptoWallet")) {
    m_embeddedCryptoWallet = jsonValue.GetObject("embeddedCryptoWallet");
    m_embeddedCryptoWalletHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentInstrumentDetails::Jsonize() const {
  JsonValue payload;

  if (m_embeddedCryptoWalletHasBeenSet) {
    payload.WithObject("embeddedCryptoWallet", m_embeddedCryptoWallet.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
