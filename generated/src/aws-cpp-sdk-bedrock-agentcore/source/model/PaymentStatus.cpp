/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PaymentStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace PaymentStatusMapper {

static const int PROOF_GENERATED_HASH = HashingUtils::HashString("PROOF_GENERATED");

PaymentStatus GetPaymentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROOF_GENERATED_HASH) {
    return PaymentStatus::PROOF_GENERATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentStatus>(hashCode);
  }

  return PaymentStatus::NOT_SET;
}

Aws::String GetNameForPaymentStatus(PaymentStatus enumValue) {
  switch (enumValue) {
    case PaymentStatus::NOT_SET:
      return {};
    case PaymentStatus::PROOF_GENERATED:
      return "PROOF_GENERATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
