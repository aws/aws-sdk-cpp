/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PaymentType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace PaymentTypeMapper {

static const int CRYPTO_X402_HASH = HashingUtils::HashString("CRYPTO_X402");

PaymentType GetPaymentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CRYPTO_X402_HASH) {
    return PaymentType::CRYPTO_X402;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentType>(hashCode);
  }

  return PaymentType::NOT_SET;
}

Aws::String GetNameForPaymentType(PaymentType enumValue) {
  switch (enumValue) {
    case PaymentType::NOT_SET:
      return {};
    case PaymentType::CRYPTO_X402:
      return "CRYPTO_X402";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
