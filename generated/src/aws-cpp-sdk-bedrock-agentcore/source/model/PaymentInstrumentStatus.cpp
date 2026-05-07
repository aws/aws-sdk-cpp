/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PaymentInstrumentStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace PaymentInstrumentStatusMapper {

static const int INITIATED_HASH = HashingUtils::HashString("INITIATED");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

PaymentInstrumentStatus GetPaymentInstrumentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INITIATED_HASH) {
    return PaymentInstrumentStatus::INITIATED;
  } else if (hashCode == ACTIVE_HASH) {
    return PaymentInstrumentStatus::ACTIVE;
  } else if (hashCode == FAILED_HASH) {
    return PaymentInstrumentStatus::FAILED;
  } else if (hashCode == DELETED_HASH) {
    return PaymentInstrumentStatus::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentInstrumentStatus>(hashCode);
  }

  return PaymentInstrumentStatus::NOT_SET;
}

Aws::String GetNameForPaymentInstrumentStatus(PaymentInstrumentStatus enumValue) {
  switch (enumValue) {
    case PaymentInstrumentStatus::NOT_SET:
      return {};
    case PaymentInstrumentStatus::INITIATED:
      return "INITIATED";
    case PaymentInstrumentStatus::ACTIVE:
      return "ACTIVE";
    case PaymentInstrumentStatus::FAILED:
      return "FAILED";
    case PaymentInstrumentStatus::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentInstrumentStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
