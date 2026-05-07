/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PaymentCredentialProviderVendorType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PaymentCredentialProviderVendorTypeMapper {

static const int CoinbaseCDP_HASH = HashingUtils::HashString("CoinbaseCDP");
static const int StripePrivy_HASH = HashingUtils::HashString("StripePrivy");

PaymentCredentialProviderVendorType GetPaymentCredentialProviderVendorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CoinbaseCDP_HASH) {
    return PaymentCredentialProviderVendorType::CoinbaseCDP;
  } else if (hashCode == StripePrivy_HASH) {
    return PaymentCredentialProviderVendorType::StripePrivy;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentCredentialProviderVendorType>(hashCode);
  }

  return PaymentCredentialProviderVendorType::NOT_SET;
}

Aws::String GetNameForPaymentCredentialProviderVendorType(PaymentCredentialProviderVendorType enumValue) {
  switch (enumValue) {
    case PaymentCredentialProviderVendorType::NOT_SET:
      return {};
    case PaymentCredentialProviderVendorType::CoinbaseCDP:
      return "CoinbaseCDP";
    case PaymentCredentialProviderVendorType::StripePrivy:
      return "StripePrivy";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentCredentialProviderVendorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
