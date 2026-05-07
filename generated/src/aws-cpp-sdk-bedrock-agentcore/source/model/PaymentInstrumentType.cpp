/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PaymentInstrumentType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace PaymentInstrumentTypeMapper {

static const int EMBEDDED_CRYPTO_WALLET_HASH = HashingUtils::HashString("EMBEDDED_CRYPTO_WALLET");

PaymentInstrumentType GetPaymentInstrumentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EMBEDDED_CRYPTO_WALLET_HASH) {
    return PaymentInstrumentType::EMBEDDED_CRYPTO_WALLET;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentInstrumentType>(hashCode);
  }

  return PaymentInstrumentType::NOT_SET;
}

Aws::String GetNameForPaymentInstrumentType(PaymentInstrumentType enumValue) {
  switch (enumValue) {
    case PaymentInstrumentType::NOT_SET:
      return {};
    case PaymentInstrumentType::EMBEDDED_CRYPTO_WALLET:
      return "EMBEDDED_CRYPTO_WALLET";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentInstrumentTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
