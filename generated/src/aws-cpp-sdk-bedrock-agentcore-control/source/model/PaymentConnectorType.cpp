/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PaymentConnectorType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PaymentConnectorTypeMapper {

static const int CoinbaseCDP_HASH = HashingUtils::HashString("CoinbaseCDP");
static const int StripePrivy_HASH = HashingUtils::HashString("StripePrivy");

PaymentConnectorType GetPaymentConnectorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CoinbaseCDP_HASH) {
    return PaymentConnectorType::CoinbaseCDP;
  } else if (hashCode == StripePrivy_HASH) {
    return PaymentConnectorType::StripePrivy;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentConnectorType>(hashCode);
  }

  return PaymentConnectorType::NOT_SET;
}

Aws::String GetNameForPaymentConnectorType(PaymentConnectorType enumValue) {
  switch (enumValue) {
    case PaymentConnectorType::NOT_SET:
      return {};
    case PaymentConnectorType::CoinbaseCDP:
      return "CoinbaseCDP";
    case PaymentConnectorType::StripePrivy:
      return "StripePrivy";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentConnectorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
