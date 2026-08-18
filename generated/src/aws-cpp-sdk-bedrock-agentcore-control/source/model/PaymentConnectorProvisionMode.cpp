/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PaymentConnectorProvisionMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PaymentConnectorProvisionModeMapper {

static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
static const int QUICK_CREATE_HASH = HashingUtils::HashString("QUICK_CREATE");

PaymentConnectorProvisionMode GetPaymentConnectorProvisionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANUAL_HASH) {
    return PaymentConnectorProvisionMode::MANUAL;
  } else if (hashCode == QUICK_CREATE_HASH) {
    return PaymentConnectorProvisionMode::QUICK_CREATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentConnectorProvisionMode>(hashCode);
  }

  return PaymentConnectorProvisionMode::NOT_SET;
}

Aws::String GetNameForPaymentConnectorProvisionMode(PaymentConnectorProvisionMode enumValue) {
  switch (enumValue) {
    case PaymentConnectorProvisionMode::NOT_SET:
      return {};
    case PaymentConnectorProvisionMode::MANUAL:
      return "MANUAL";
    case PaymentConnectorProvisionMode::QUICK_CREATE:
      return "QUICK_CREATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentConnectorProvisionModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
