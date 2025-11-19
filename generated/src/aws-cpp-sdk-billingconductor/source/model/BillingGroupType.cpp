/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/BillingGroupType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BillingConductor {
namespace Model {
namespace BillingGroupTypeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int TRANSFER_BILLING_HASH = HashingUtils::HashString("TRANSFER_BILLING");

BillingGroupType GetBillingGroupTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return BillingGroupType::STANDARD;
  } else if (hashCode == TRANSFER_BILLING_HASH) {
    return BillingGroupType::TRANSFER_BILLING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BillingGroupType>(hashCode);
  }

  return BillingGroupType::NOT_SET;
}

Aws::String GetNameForBillingGroupType(BillingGroupType enumValue) {
  switch (enumValue) {
    case BillingGroupType::NOT_SET:
      return {};
    case BillingGroupType::STANDARD:
      return "STANDARD";
    case BillingGroupType::TRANSFER_BILLING:
      return "TRANSFER_BILLING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BillingGroupTypeMapper
}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
