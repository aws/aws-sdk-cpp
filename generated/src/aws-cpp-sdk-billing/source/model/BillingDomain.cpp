/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingDomain.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {
namespace BillingDomainMapper {

static const int BILLABLE_HASH = HashingUtils::HashString("BILLABLE");
static const int PRO_FORMA_HASH = HashingUtils::HashString("PRO_FORMA");

BillingDomain GetBillingDomainForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BILLABLE_HASH) {
    return BillingDomain::BILLABLE;
  } else if (hashCode == PRO_FORMA_HASH) {
    return BillingDomain::PRO_FORMA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BillingDomain>(hashCode);
  }

  return BillingDomain::NOT_SET;
}

Aws::String GetNameForBillingDomain(BillingDomain enumValue) {
  switch (enumValue) {
    case BillingDomain::NOT_SET:
      return {};
    case BillingDomain::BILLABLE:
      return "BILLABLE";
    case BillingDomain::PRO_FORMA:
      return "PRO_FORMA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BillingDomainMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
