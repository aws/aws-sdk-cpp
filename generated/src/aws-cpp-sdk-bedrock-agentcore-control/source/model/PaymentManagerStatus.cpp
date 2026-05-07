/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PaymentManagerStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PaymentManagerStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int READY_HASH = HashingUtils::HashString("READY");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

PaymentManagerStatus GetPaymentManagerStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return PaymentManagerStatus::CREATING;
  } else if (hashCode == UPDATING_HASH) {
    return PaymentManagerStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return PaymentManagerStatus::DELETING;
  } else if (hashCode == READY_HASH) {
    return PaymentManagerStatus::READY;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return PaymentManagerStatus::CREATE_FAILED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return PaymentManagerStatus::UPDATE_FAILED;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return PaymentManagerStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentManagerStatus>(hashCode);
  }

  return PaymentManagerStatus::NOT_SET;
}

Aws::String GetNameForPaymentManagerStatus(PaymentManagerStatus enumValue) {
  switch (enumValue) {
    case PaymentManagerStatus::NOT_SET:
      return {};
    case PaymentManagerStatus::CREATING:
      return "CREATING";
    case PaymentManagerStatus::UPDATING:
      return "UPDATING";
    case PaymentManagerStatus::DELETING:
      return "DELETING";
    case PaymentManagerStatus::READY:
      return "READY";
    case PaymentManagerStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case PaymentManagerStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case PaymentManagerStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentManagerStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
