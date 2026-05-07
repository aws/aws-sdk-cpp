/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PaymentSessionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace PaymentSessionStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

PaymentSessionStatus GetPaymentSessionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return PaymentSessionStatus::ACTIVE;
  } else if (hashCode == EXPIRED_HASH) {
    return PaymentSessionStatus::EXPIRED;
  } else if (hashCode == DELETED_HASH) {
    return PaymentSessionStatus::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentSessionStatus>(hashCode);
  }

  return PaymentSessionStatus::NOT_SET;
}

Aws::String GetNameForPaymentSessionStatus(PaymentSessionStatus enumValue) {
  switch (enumValue) {
    case PaymentSessionStatus::NOT_SET:
      return {};
    case PaymentSessionStatus::ACTIVE:
      return "ACTIVE";
    case PaymentSessionStatus::EXPIRED:
      return "EXPIRED";
    case PaymentSessionStatus::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentSessionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
