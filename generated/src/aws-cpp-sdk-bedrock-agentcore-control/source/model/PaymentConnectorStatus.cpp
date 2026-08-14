/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PaymentConnectorStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PaymentConnectorStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int READY_HASH = HashingUtils::HashString("READY");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
static const int AWS_MARKETPLACE_SUBSCRIPTION_REQUIRED_HASH = HashingUtils::HashString("AWS_MARKETPLACE_SUBSCRIPTION_REQUIRED");
static const int PENDING_AUTHENTICATION_HASH = HashingUtils::HashString("PENDING_AUTHENTICATION");
static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
static const int AUTHENTICATION_EXPIRED_HASH = HashingUtils::HashString("AUTHENTICATION_EXPIRED");
static const int AUTHENTICATION_FAILED_HASH = HashingUtils::HashString("AUTHENTICATION_FAILED");

PaymentConnectorStatus GetPaymentConnectorStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return PaymentConnectorStatus::CREATING;
  } else if (hashCode == UPDATING_HASH) {
    return PaymentConnectorStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return PaymentConnectorStatus::DELETING;
  } else if (hashCode == READY_HASH) {
    return PaymentConnectorStatus::READY;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return PaymentConnectorStatus::CREATE_FAILED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return PaymentConnectorStatus::UPDATE_FAILED;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return PaymentConnectorStatus::DELETE_FAILED;
  } else if (hashCode == AWS_MARKETPLACE_SUBSCRIPTION_REQUIRED_HASH) {
    return PaymentConnectorStatus::AWS_MARKETPLACE_SUBSCRIPTION_REQUIRED;
  } else if (hashCode == PENDING_AUTHENTICATION_HASH) {
    return PaymentConnectorStatus::PENDING_AUTHENTICATION;
  } else if (hashCode == PROVISIONING_HASH) {
    return PaymentConnectorStatus::PROVISIONING;
  } else if (hashCode == AUTHENTICATION_EXPIRED_HASH) {
    return PaymentConnectorStatus::AUTHENTICATION_EXPIRED;
  } else if (hashCode == AUTHENTICATION_FAILED_HASH) {
    return PaymentConnectorStatus::AUTHENTICATION_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentConnectorStatus>(hashCode);
  }

  return PaymentConnectorStatus::NOT_SET;
}

Aws::String GetNameForPaymentConnectorStatus(PaymentConnectorStatus enumValue) {
  switch (enumValue) {
    case PaymentConnectorStatus::NOT_SET:
      return {};
    case PaymentConnectorStatus::CREATING:
      return "CREATING";
    case PaymentConnectorStatus::UPDATING:
      return "UPDATING";
    case PaymentConnectorStatus::DELETING:
      return "DELETING";
    case PaymentConnectorStatus::READY:
      return "READY";
    case PaymentConnectorStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case PaymentConnectorStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case PaymentConnectorStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    case PaymentConnectorStatus::AWS_MARKETPLACE_SUBSCRIPTION_REQUIRED:
      return "AWS_MARKETPLACE_SUBSCRIPTION_REQUIRED";
    case PaymentConnectorStatus::PENDING_AUTHENTICATION:
      return "PENDING_AUTHENTICATION";
    case PaymentConnectorStatus::PROVISIONING:
      return "PROVISIONING";
    case PaymentConnectorStatus::AUTHENTICATION_EXPIRED:
      return "AUTHENTICATION_EXPIRED";
    case PaymentConnectorStatus::AUTHENTICATION_FAILED:
      return "AUTHENTICATION_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentConnectorStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
